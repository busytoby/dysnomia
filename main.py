#!/usr/bin/env python
# encoding: utf-8

from conjecture import Conjecture
from efl.evas import Text, EVAS_HINT_EXPAND, EVAS_HINT_FILL, EXPAND_BOTH, FILL_BOTH, \
   EXPAND_HORIZ, FILL_HORIZ, EVAS_TEXT_STYLE_SOFT_OUTLINE, EXPAND_VERT
from efl import elementary
from efl import ecore
from efl import ecore_input
from efl.elementary.window import StandardWindow, DialogWindow
from efl.elementary.box import Box
from efl.elementary.button import Button
from efl.elementary.label import Label
from efl.elementary.frame import Frame
from efl.elementary.separator import Separator
from efl.elementary.entry import Entry
from efl.elementary.grid import Grid, grid_pack_get, grid_pack_set
from efl.elementary.table import Table
from efl.elementary.check import Check
from efl.elementary.scroller import Scroller, ELM_SCROLLER_POLICY_OFF
import sys, traceback

def clicked_mouse(event):
    print(event)
    print()
    if(event.buttons == 3):
        dia = StandardWindow("window-dia", "DialogWindow",
                             size=(400,40), autodel=True)

        lb = Label(dia, text="This is a DialogWindow",
                   size_hint_weight=EXPAND_BOTH)
        dia.resize_object_add(lb)
        lb.show()
#       dia.borderless_set(1)
        dia.show()
    return ecore.ECORE_CALLBACK_PASS_ON

def window_dialog_clicked(obj):
    win = StandardWindow("window-states", "This is a StandardWindow",
                         autodel=True, size=(732, 800))
    if obj is None:
        win.callback_delete_request_add(lambda o: elementary.exit())

    ecore_input.on_mouse_button_down_add(clicked_mouse)

    windowGrid = Grid(win, size=(100, 100), size_hint_weight=EXPAND_BOTH)
    win.resize_object_add(windowGrid)
    windowGrid.show()

    starterBase = 0
    conjectureA = Conjecture(windowGrid, "Calibi")
    conjectureB = Conjecture(windowGrid, "Yau")

    while True:
        try:
            conjectureA.seed()
            conjectureB.seed()
            conjectureA.tune()
            conjectureB.tune()

            while(starterBase < conjectureA.ENTROPY_CUTOFF):
                starterBase = conjectureA.rand()
            aChallenge = conjectureA.getChallenge(starterBase)
            bChallenge = conjectureB.getChallenge(starterBase)
            conjectureA.setBase(bChallenge)
            conjectureB.setBase(aChallenge)

            conjectureA.generate()
            conjectureB.generate()

            aCarrier = conjectureA.getCarrier(conjectureB.pole)
            bCarrier = conjectureB.getCarrier(conjectureA.pole)

            conjectureB.establishListener()
            conjectureA.establishElement(conjectureB.foundation, conjectureB.channel)
            conjectureB.establishElement(conjectureA.foundation, conjectureA.channel)

            conjectureA.syncDynamo()
            conjectureB.syncDynamo()
            conjectureA.getManifold(conjectureB.dynamo)
            conjectureB.getManifold(conjectureA.dynamo)

            conjectureA.openManifold(aCarrier)
            conjectureB.openManifold(bCarrier)
            if conjectureA.validateManifold() and conjectureB.validateManifold():
                break
        except:
            continue

    conjectureA.updateGUIFields()
    conjectureB.updateGUIFields()

    configureStringHashA = conjectureA.hashString("Configuration") 
    configureStringHashB = conjectureB.hashString("Configuration") 
    print(configureStringHashA == configureStringHashB)
    print(configureStringHashB)
#    win.borderless_set(1)
    win.show()


if __name__ == "__main__":

    window_dialog_clicked(None)

    elementary.run()

