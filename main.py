#!/usr/bin/env python
# encoding: utf-8

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
import json
import time
from random import randrange

PRIME = 257

class ConjectureGUI(object):
    def __init__(self, windowGrid, name):
        offset = 0
        if(name == 'Yau'):
            offset = 50;
            
        self.BaseBox = Box(windowGrid, size_hint_weight=(EVAS_HINT_EXPAND, EVAS_HINT_EXPAND),
                       size_hint_align=(EVAS_HINT_FILL, EVAS_HINT_FILL))
        windowGrid.pack(self.BaseBox, offset, 0, 50, 100)
        self.BaseBox.show()

        self.frame = Frame(self.BaseBox, size_hint_weight=(EVAS_HINT_EXPAND, EVAS_HINT_EXPAND),
                           size_hint_align=(EVAS_HINT_FILL, EVAS_HINT_FILL), text=name)
        self.BaseBox.pack_end(self.frame)
        self.frame.show()

        self.FrameBox = Box(self.BaseBox, size_hint_weight=(EVAS_HINT_EXPAND, EVAS_HINT_EXPAND),
                            size_hint_align=(EVAS_HINT_FILL, EVAS_HINT_FILL))
        self.frame.content_set(self.FrameBox)
        self.FrameBox.show()

        self.FrameCheck = Check(self.BaseBox, size_hint_weight=(EVAS_HINT_EXPAND, 0.0),
                          size_hint_align=(EVAS_HINT_FILL, 0.5), text="{0} Frame Check".format(name))
        self.FrameBox.pack_end(self.FrameCheck)
        self.FrameCheck.show()

        self.FrameSeparator = Separator(self.BaseBox, horizontal=True, size_hint_weight=(EVAS_HINT_EXPAND, 0.0),
                                        size_hint_align=(EVAS_HINT_FILL, 0.5))
        self.FrameBox.pack_end(self.FrameSeparator)
        self.FrameSeparator.show()

        self.FrameScroller = Scroller(self.BaseBox, content_min_limit=(True, False),
                                      size_hint_weight=(EVAS_HINT_EXPAND, EVAS_HINT_EXPAND),
                                      size_hint_align=(EVAS_HINT_FILL, EVAS_HINT_FILL),
                                      scrollbar_policy=(ELM_SCROLLER_POLICY_OFF, ELM_SCROLLER_POLICY_OFF))
        self.FrameBox.pack_end(self.FrameScroller)
        self.FrameScroller.show()

        self.FrameTable = Table(self.BaseBox, size_hint_weight=(EVAS_HINT_EXPAND, 0.0),
                                size_hint_align=(EVAS_HINT_FILL, 0.0))
        self.FrameScroller.content_set(self.FrameTable)
        self.FrameTable.show()

        self.BaseLabel = Label(self.FrameTable, size_hint_weight=(0.0, 0.0),
                               size_hint_align=(0.0, 0.5), text="Base:")
        self.FrameTable.pack(self.BaseLabel, 0, 0, 1, 1)
        self.BaseLabel.show()

        self.BaseEntry = Entry(self.FrameTable, size_hint_weight=(EVAS_HINT_EXPAND, 0.0),
                               size_hint_align=(EVAS_HINT_FILL, 0.5), single_line=True,
                               scrollable=True,
                               text="")
        self.FrameTable.pack(self.BaseEntry, 1, 0, 1, 1)
        self.BaseEntry.show()

        self.SecretLabel = Label(self.FrameTable, size_hint_weight=(0.0, 0.0),
                                 size_hint_align=(0.0, 0.5), text="Secret:")
        self.FrameTable.pack(self.SecretLabel, 2, 0, 1, 1)
        self.SecretLabel.show()

        self.SecretEntry = Entry(self.FrameTable, size_hint_weight=(EVAS_HINT_EXPAND, 0.0),
                                 size_hint_align=(EVAS_HINT_FILL, 0.5), single_line=True,
                                 scrollable=True,
                                 text="")
        self.FrameTable.pack(self.SecretEntry, 3, 0, 1, 1)
        self.SecretEntry.show()

        self.SignalLabel = Label(self.FrameTable, size_hint_weight=(0.0, 0.0),
                                 size_hint_align=(0.0, 0.5), text="Signal:")
        self.FrameTable.pack(self.SignalLabel, 4, 0, 1, 1)
        self.SignalLabel.show()

        self.SignalEntry = Entry(self.FrameTable, size_hint_weight=(EVAS_HINT_EXPAND, 0.0),
                                 size_hint_align=(EVAS_HINT_FILL, 0.5), single_line=True,
                                 scrollable=True,
                                 text="")
        self.FrameTable.pack(self.SignalEntry, 5, 0, 1, 1)
        self.SignalEntry.show()

        self.ChannelLabel = Label(self.FrameTable, size_hint_weight=(0.0, 0.0),
                                  size_hint_align=(0.0, 0.5), text="Channel:")
        self.FrameTable.pack(self.ChannelLabel, 0, 1, 1, 1)
        self.ChannelLabel.show()

        self.ChannelEntry = Entry(self.FrameTable, size_hint_weight=(EVAS_HINT_EXPAND, 0.0),
                                  size_hint_align=(EVAS_HINT_FILL, 0.5), single_line=True,
                                  scrollable=True,
                                  text="")
        self.FrameTable.pack(self.ChannelEntry, 1, 1, 1, 1)
        self.ChannelEntry.show()

        self.PoleLabel = Label(self.FrameTable, size_hint_weight=(0.0, 0.0),
                               size_hint_align=(0.0, 0.5), text="Pole:")
        self.FrameTable.pack(self.PoleLabel, 2, 1, 1, 1)
        self.PoleLabel.show()

        self.PoleEntry = Entry(self.FrameTable, size_hint_weight=(EVAS_HINT_EXPAND, 0.0),
                               size_hint_align=(EVAS_HINT_FILL, 0.5), single_line=True,
                               scrollable=True,
                               text="")
        self.FrameTable.pack(self.PoleEntry, 3, 1, 1, 1)
        self.PoleEntry.show()

        self.IdentityLabel = Label(self.FrameTable, size_hint_weight=(0.0, 0.0),
                                   size_hint_align=(0.0, 0.5), text="Identity:")
        self.FrameTable.pack(self.IdentityLabel, 4, 1, 1, 1)
        self.IdentityLabel.show()

        self.IdentityEntry = Entry(self.FrameTable, size_hint_weight=(EVAS_HINT_EXPAND, 0.0),
                                   size_hint_align=(EVAS_HINT_FILL, 0.5), single_line=True,
                                   scrollable=True,
                                   text="")
        self.FrameTable.pack(self.IdentityEntry, 5, 1, 1, 1)
        self.IdentityEntry.show()
  
        self.FoundationLabel = Label(self.FrameTable, size_hint_weight=(0.0, 0.0),
                                     size_hint_align=(0.0, 0.5), text="Foundation:")
        self.FrameTable.pack(self.FoundationLabel, 0, 2, 1, 1)
        self.FoundationLabel.show()

        self.FoundationEntry = Entry(self.FrameTable, size_hint_weight=(EVAS_HINT_EXPAND, 0.0),
                                     size_hint_align=(EVAS_HINT_FILL, 0.5), single_line=True,
                                     scrollable=True,
                                     text="")
        self.FrameTable.pack(self.FoundationEntry, 1, 2, 1, 1)
        self.FoundationEntry.show()

        self.TxTxElementLabel = Label(self.FrameTable, size_hint_weight=(0.0, 0.0),
                                      size_hint_align=(0.0, 0.5), text="TxTx:")
        self.FrameTable.pack(self.TxTxElementLabel, 2, 2, 1, 1)
        self.TxTxElementLabel.show()

        self.TxTxElementEntry = Entry(self.FrameTable, size_hint_weight=(EVAS_HINT_EXPAND, 0.0),
                                      size_hint_align=(EVAS_HINT_FILL, 0.5), single_line=True,
                                      scrollable=True,
                                      text="")
        self.FrameTable.pack(self.TxTxElementEntry, 3, 2, 1, 1)
        self.TxTxElementEntry.show()

        self.DynamoLabel = Label(self.FrameTable, size_hint_weight=(0.0, 0.0),
                                 size_hint_align=(0.0, 0.5), text="Dynamo:")
        self.FrameTable.pack(self.DynamoLabel, 4, 2, 1, 1)
        self.DynamoLabel.show()

        self.DynamoEntry = Entry(self.FrameTable, size_hint_weight=(EVAS_HINT_EXPAND, 0.0),
                                 size_hint_align=(EVAS_HINT_FILL, 0.5), single_line=True,
                                 scrollable=True,
                                 text="")
        self.FrameTable.pack(self.DynamoEntry, 5, 2, 1, 1)
        self.DynamoEntry.show()

        self.ManifoldLabel = Label(self.FrameTable, size_hint_weight=(0.0, 0.0),
                                   size_hint_align=(0.0, 0.5), text="Manifold:")
        self.FrameTable.pack(self.ManifoldLabel, 0, 3, 1, 1)
        self.ManifoldLabel.show()

        self.ManifoldEntry = Entry(self.FrameTable, size_hint_weight=(EVAS_HINT_EXPAND, 0.0),
                                   size_hint_align=(EVAS_HINT_FILL, 0.5), single_line=True,
                                   scrollable=True,
                                   text="")
        self.FrameTable.pack(self.ManifoldEntry, 1, 3, 1, 1)
        self.ManifoldEntry.show()

        self.RingLabel = Label(self.FrameTable, size_hint_weight=(0.0, 0.0),
                               size_hint_align=(0.0, 0.5), text="Ring:")
        self.FrameTable.pack(self.RingLabel, 2, 3, 1, 1)
        self.RingLabel.show()

        self.RingEntry = Entry(self.FrameTable, size_hint_weight=(EVAS_HINT_EXPAND, 0.0),
                               size_hint_align=(EVAS_HINT_FILL, 0.5), single_line=True,
                               scrollable=True,
                               text="")
        self.FrameTable.pack(self.RingEntry, 3, 3, 1, 1)
        self.RingEntry.show()

        self.BarnLabel = Label(self.FrameTable, size_hint_weight=(0.0, 0.0),
                               size_hint_align=(0.0, 0.5), text="Barn:")
        self.FrameTable.pack(self.BarnLabel, 4, 3, 1, 1)
        self.BarnLabel.show()

        self.BarnEntry = Entry(self.FrameTable, size_hint_weight=(EVAS_HINT_EXPAND, 0.0),
                               size_hint_align=(EVAS_HINT_FILL, 0.5), single_line=True,
                               scrollable=True,
                               text="")
        self.FrameTable.pack(self.BarnEntry, 5, 3, 1, 1)
        self.BarnEntry.show()

class Conjecture(object):
    def __init__(self, windowGrid, name):
        self.isListener = False
        self.base = 0
        self.secret = 0
        self.signal = 0
        self.channel = 0
        self.pole = 0
        self.identity = 0
        self.foundation = 0
        self.txTxElement = 0
        self.dynamo = 0
        self.manifold = 0
        self.ring = 0
        self.barn = 0

        self.GUI = ConjectureGUI(windowGrid, name)

    def seed(self):
        while(self.base < 3 or self.secret < 3 or self.signal < 3):
            self.base = randrange(PRIME)
            self.secret = randrange(PRIME)
            self.signal = randrange(PRIME)

    def updateGUIFields(self):
        self.GUI.BaseEntry.entry_set("{0}".format(self.base))
        self.GUI.SecretEntry.entry_set("{0}".format(self.secret))
        self.GUI.SignalEntry.entry_set("{0}".format(self.signal))
        self.GUI.ChannelEntry.entry_set("{0}".format(self.channel))
        self.GUI.PoleEntry.entry_set("{0}".format(self.pole))
        self.GUI.IdentityEntry.entry_set("{0}".format(self.identity))
        self.GUI.FoundationEntry.entry_set("{0}".format(self.foundation))
        self.GUI.TxTxElementEntry.entry_set("{0}".format(self.txTxElement))
        self.GUI.DynamoEntry.entry_set("{0}".format(self.dynamo))
        self.GUI.ManifoldEntry.entry_set("{0}".format(self.manifold))
        self.GUI.RingEntry.entry_set("{0}".format(self.ring))
        self.GUI.BarnEntry.entry_set("{0}".format(self.barn))

    def tune(self):
        self.channel = pow(self.base, self.signal, PRIME)

    def getChallenge(self, starterBase):
        return pow(starterBase, self.secret, PRIME)

    def setBase(self, challenge):
        self.base = pow(challenge, self.secret, PRIME)
        self.tune()

    def generate(self):
        self.pole = pow(self.base, self.secret, PRIME)

    def getCarrier(self, peerPole):
        return pow(peerPole, self.secret, PRIME)

    def establishListener(self):
        self.identity = randrange(PRIME)
        self.foundation = pow(self.base, self.identity, PRIME)
        self.isListener = True
        self.GUI.frame.text_set(self.GUI.frame.text + " (Listener)")

    def establishTxTxElement(self, peerFoundation, peerChannel):
        if not self.isListener:
            self.identity = randrange(PRIME)
            self.foundation = pow(self.base, self.identity, PRIME)

        convergence = pow(peerFoundation, self.identity, PRIME)
        moment = pow(peerChannel, self.identity, PRIME)
        authentication = pow(peerFoundation, self.signal, PRIME)
        peerMoment = pow(peerChannel, self.signal, PRIME)

        accord = moment + authentication
        element = convergence + accord
        discardMoment = element + peerMoment

        self.txTxElement = element

    def syncDynamo(self, element):
        self.dynamo = pow(self.base, self.signal, element)

    def getManifold(self, peerDynamo, element):
        self.manifold = pow(peerDynamo, self.signal, element)

    def openManifold(self, carrier, element):
        self.ring = pow(carrier, self.manifold, element)
        self.barn = pow(self.ring, self.manifold, element)

    def validateManifold(self):
        validateList = [ self.base, self.secret, self.signal, self.channel, self.pole,
                         self.identity, self.foundation, self.txTxElement, self.dynamo,
                         self.manifold, self.ring, self.barn ]
        return all(i >= 17 for i in validateList)


RIGHT_ALIGN = 1.0, 0.0
LEFT_ALIGN = 0.0, 0.0
FILL_AND_ALIGN_TOP = EVAS_HINT_FILL, 0.0

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

    conjectureA = Conjecture(windowGrid, "Calibi")
    conjectureB = Conjecture(windowGrid, "Yau")

    while True:
        try:
            conjectureA.seed()
            conjectureB.seed()
            conjectureA.tune()
            conjectureB.tune()

            starterBase = randrange(PRIME)
            aChallenge = conjectureA.getChallenge(starterBase)
            bChallenge = conjectureB.getChallenge(starterBase)
            conjectureA.setBase(bChallenge)
            conjectureB.setBase(aChallenge)

            conjectureA.generate()
            conjectureB.generate()

            aCarrier = conjectureA.getCarrier(conjectureB.pole)
            bCarrier = conjectureB.getCarrier(conjectureA.pole)

            conjectureB.establishListener()
            conjectureA.establishTxTxElement(conjectureB.foundation, conjectureB.channel)
            conjectureB.establishTxTxElement(conjectureA.foundation, conjectureA.channel)

            conjectureA.syncDynamo(conjectureA.txTxElement)
            conjectureB.syncDynamo(conjectureB.txTxElement)
            conjectureA.getManifold(conjectureB.dynamo, conjectureA.txTxElement)
            conjectureB.getManifold(conjectureA.dynamo, conjectureB.txTxElement)

            conjectureA.openManifold(aCarrier, conjectureA.txTxElement)
            conjectureB.openManifold(bCarrier, conjectureB.txTxElement)
            if conjectureA.validateManifold() and conjectureB.validateManifold():
                break
        except:
            print("err")
            continue

    conjectureA.updateGUIFields()
    conjectureB.updateGUIFields()
#    win.borderless_set(1)
    win.show()


if __name__ == "__main__":

    window_dialog_clicked(None)

    elementary.run()

