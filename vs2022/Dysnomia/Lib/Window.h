#pragma once
#include <windows.h>
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <wchar.h>
#include <math.h>
#include <d2d1.h>
#include <d2d1helper.h>
#include <dwrite.h>
#include <wincodec.h>
#include <d2d1_1.h>

#ifndef Assert
#if defined( DEBUG ) || defined( _DEBUG )
#define Assert(b) do {if (!(b)) {OutputDebugStringA("Assert: " #b "\n");}} while(0)
#else
#define Assert(b)
#endif //DEBUG || _DEBUG
#endif

#ifndef HINST_THISCOMPONENT
EXTERN_C IMAGE_DOS_HEADER __ImageBase;
#define HINST_THISCOMPONENT ((HINSTANCE)&__ImageBase)
#endif

using namespace std;

namespace Dysnomia {
    class Window {
    public:
        Window() : m_hwnd(NULL),
            m_pDirect2dFactory(NULL),
            m_pRenderTarget(NULL),
            m_pLightSlateGrayBrush(NULL),
            m_pCornflowerBlueBrush(NULL) {

        }

        ~Window() {
            SafeRelease(&m_pDirect2dFactory);
            SafeRelease(&m_pRenderTarget);
            SafeRelease(&m_pLightSlateGrayBrush);
            SafeRelease(&m_pCornflowerBlueBrush);
        }

        HRESULT Init() {
            HRESULT hr;

            hr = CreateFactory();

            if (SUCCEEDED(hr))
            {
                WNDCLASSEX wcex = { sizeof(WNDCLASSEX) };
                wcex.style = CS_HREDRAW | CS_VREDRAW;
                wcex.lpfnWndProc = (WNDPROC) WndProc;
                wcex.cbClsExtra = 0;
                wcex.cbWndExtra = sizeof(LONG_PTR);
                wcex.hInstance = HINST_THISCOMPONENT;
                wcex.hbrBackground = NULL;
                wcex.lpszMenuName = NULL;
                wcex.hCursor = LoadCursor(NULL, IDI_APPLICATION);
                wcex.lpszClassName = L"Dysnomia";

                RegisterClassEx(&wcex);

                m_hwnd = CreateWindow(
                    L"Dysnomia",
                    L"Dysnomia v5.6-Alpha",
                    WS_OVERLAPPEDWINDOW,
                    CW_USEDEFAULT,
                    CW_USEDEFAULT,
                    0,
                    0,
                    NULL,
                    NULL,
                    HINST_THISCOMPONENT,
                    this);

                if (m_hwnd)
                {
                    float dpi = GetDpiForWindow(m_hwnd);

                    SetWindowPos(
                        m_hwnd,
                        NULL,
                        NULL,
                        NULL,
                        static_cast<int>(ceil(640.f * dpi / 96.f)),
                        static_cast<int>(ceil(480.f * dpi / 96.f)),
                        SWP_NOMOVE);
                    ShowWindow(m_hwnd, SW_SHOWNORMAL);
                    UpdateWindow(m_hwnd);
                }
            }

            return hr;
        }

        void Step() {
            MSG msg;

            while (GetMessage(&msg, NULL, 0, 0))
            {
                TranslateMessage(&msg);
                DispatchMessage(&msg);
            }
        }

    private:
        HWND m_hwnd;
        ID2D1Factory* m_pDirect2dFactory;
        ID2D1HwndRenderTarget* m_pRenderTarget;
        ID2D1SolidColorBrush* m_pLightSlateGrayBrush;
        ID2D1SolidColorBrush* m_pCornflowerBlueBrush;

        HRESULT CreateFactory()
        {
            HRESULT hr = S_OK;

            hr = D2D1CreateFactory(D2D1_FACTORY_TYPE_MULTI_THREADED, &m_pDirect2dFactory);

            return hr;
        }

        HRESULT CreateDeviceResources()
        {
            HRESULT hr = S_OK;

            if (!m_pRenderTarget)
            {
                RECT rc;
                GetClientRect(m_hwnd, &rc);

                D2D1_SIZE_U size = D2D1::SizeU(
                    rc.right - rc.left,
                    rc.bottom - rc.top
                );

                hr = m_pDirect2dFactory->CreateHwndRenderTarget(
                    D2D1::RenderTargetProperties(),
                    D2D1::HwndRenderTargetProperties(m_hwnd, size),
                    &m_pRenderTarget
                );

                if (SUCCEEDED(hr))
                {
                    hr = m_pRenderTarget->CreateSolidColorBrush(
                        D2D1::ColorF(D2D1::ColorF::LightSlateGray),
                        &m_pLightSlateGrayBrush
                    );
                }
                if (SUCCEEDED(hr))
                {
                    hr = m_pRenderTarget->CreateSolidColorBrush(
                        D2D1::ColorF(D2D1::ColorF::CornflowerBlue),
                        &m_pCornflowerBlueBrush
                    );
                }
            }

            return hr;
        }

        void ReleaseAll()
        {
            SafeRelease(&m_pRenderTarget);
            SafeRelease(&m_pLightSlateGrayBrush);
            SafeRelease(&m_pCornflowerBlueBrush);
        }

        HRESULT OnRender()
        {
            HRESULT hr = S_OK;

            hr = CreateDeviceResources();
            if (SUCCEEDED(hr))
            {
                m_pRenderTarget->BeginDraw();
                m_pRenderTarget->SetTransform(D2D1::Matrix3x2F::Identity());
                m_pRenderTarget->Clear(D2D1::ColorF(D2D1::ColorF::White));
                D2D1_SIZE_F rtSize = m_pRenderTarget->GetSize();

                int width = static_cast<int>(rtSize.width);
                int height = static_cast<int>(rtSize.height);

                D2D1_RECT_F rectangle1 = D2D1::RectF(
                    rtSize.width / 2 - 50.0f,
                    rtSize.height / 2 - 50.0f,
                    rtSize.width / 2 + 50.0f,
                    rtSize.height / 2 + 50.0f
                );

                D2D1_RECT_F rectangle2 = D2D1::RectF(
                    rtSize.width / 2 - 100.0f,
                    rtSize.height / 2 - 100.0f,
                    rtSize.width / 2 + 100.0f,
                    rtSize.height / 2 + 100.0f
                );

                m_pRenderTarget->FillRectangle(&rectangle1, m_pLightSlateGrayBrush);

                m_pRenderTarget->DrawRectangle(&rectangle2, m_pCornflowerBlueBrush);

                hr = m_pRenderTarget->EndDraw();
            }
            if (hr == D2DERR_RECREATE_TARGET)
            {
                hr = S_OK;
                ReleaseAll();
            }
            return hr;
        }

        void OnResize(UINT width, UINT height)
        {
            if (m_pRenderTarget)
            {
                m_pRenderTarget->Resize(D2D1::SizeU(width, height));
            }
        }

        static LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
        {
            LRESULT result = 0;

            if (message == WM_CREATE)
            {
                LPCREATESTRUCT pcs = (LPCREATESTRUCT)lParam;
                Window* pDemoApp = (Window*)pcs->lpCreateParams;

                ::SetWindowLongPtrW(
                    hwnd,
                    GWLP_USERDATA,
                    reinterpret_cast<LONG_PTR>(pDemoApp)
                );

                result = 1;
            }
            else
            {
                Window* pDemoApp = reinterpret_cast<Window*>(static_cast<LONG_PTR>(
                    ::GetWindowLongPtrW(
                        hwnd,
                        GWLP_USERDATA
                    )));

                bool wasHandled = false;

                if (pDemoApp)
                {
                    switch (message)
                    {
                    case WM_SIZE:
                    {
                        UINT width = LOWORD(lParam);
                        UINT height = HIWORD(lParam);
                        pDemoApp->OnResize(width, height);
                    }
                    result = 0;
                    wasHandled = true;
                    break;

                    case WM_DISPLAYCHANGE:
                    {
                        InvalidateRect(hwnd, NULL, FALSE);
                    }
                    result = 0;
                    wasHandled = true;
                    break;

                    case WM_PAINT:
                    {
                        pDemoApp->OnRender();
                        ValidateRect(hwnd, NULL);
                    }
                    result = 0;
                    wasHandled = true;
                    break;

                    case WM_DESTROY:
                    {
                        PostQuitMessage(0);
                    }
                    result = 1;
                    wasHandled = true;
                    break;
                    }
                }

                if (!wasHandled)
                {
                    result = DefWindowProc(hwnd, message, wParam, lParam);
                }
            }

            return result;
        }

        template<class Interface>
        inline void SafeRelease(
            Interface** ppInterfaceToRelease)
        {
            if (*ppInterfaceToRelease != NULL)
            {
                (*ppInterfaceToRelease)->Release();
                (*ppInterfaceToRelease) = NULL;
            }
        }
    };
}
