﻿// Property Of Uwu University
// This Application Is Distributed As Sharia Law

using Dysnomia.Platform.Interfaces;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Linq.Expressions;
using System.Numerics;
using System.Security.Policy;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Windows.Shell;
using Windows.Perception.Automation.Core;
using WinRT;

namespace Dysnomia
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        private Xun Xibe;

        public MainWindow()
        {
            InitializeComponent();
            ReadyPlatform();
        }

        private void ReadyPlatform()
        {
            Xibe = new Xun();
        }
    }
}
