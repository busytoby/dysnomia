#!/usr/bin/env python
# encoding: utf-8

from efl.evas import EVAS_HINT_EXPAND, EVAS_HINT_FILL, EXPAND_BOTH, FILL_BOTH, \
   EXPAND_HORIZ, FILL_HORIZ, EVAS_TEXT_STYLE_SOFT_OUTLINE, EXPAND_VERT
from efl.elementary.window import StandardWindow, DialogWindow
from efl.elementary.box import Box
from efl.elementary.button import Button
from efl.elementary.label import Label
from efl.elementary.frame import Frame
from efl.elementary.separator import Separator
from efl.elementary.entry import Entry
from efl.elementary.table import Table
from efl.elementary.check import Check
from efl.elementary.scroller import Scroller, ELM_SCROLLER_POLICY_OFF

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

        self.ElementLabel = Label(self.FrameTable, size_hint_weight=(0.0, 0.0),
                                      size_hint_align=(0.0, 0.5), text="Element:")
        self.FrameTable.pack(self.ElementLabel, 2, 2, 1, 1)
        self.ElementLabel.show()

        self.ElementEntry = Entry(self.FrameTable, size_hint_weight=(EVAS_HINT_EXPAND, 0.0),
                                      size_hint_align=(EVAS_HINT_FILL, 0.5), single_line=True,
                                      scrollable=True,
                                      text="")
        self.FrameTable.pack(self.ElementEntry, 3, 2, 1, 1)
        self.ElementEntry.show()

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

        self.VoltpereLabel = Label(self.FrameTable, size_hint_weight=(0.0, 0.0),
                                   size_hint_align=(0.0, 0.5), text="Voltpere:")
        self.FrameTable.pack(self.VoltpereLabel, 0, 4, 1, 1)
        self.VoltpereLabel.show()

        self.VoltpereEntry = Entry(self.FrameTable, size_hint_weight=(EVAS_HINT_EXPAND, 0.0),
                                 size_hint_align=(EVAS_HINT_FILL, 0.5), single_line=True,
                                 scrollable=True,
                                 text="")
        self.FrameTable.pack(self.VoltpereEntry, 1, 4, 5, 1)
        self.VoltpereEntry.show()

        self.AmpereLabel = Label(self.FrameTable, size_hint_weight=(0.0, 0.0),
                                size_hint_align=(0.0, 0.5), text="Ampere:")
        self.FrameTable.pack(self.AmpereLabel, 0, 5, 1, 1)
        self.AmpereLabel.show()

        self.AmpereEntry = Entry(self.FrameTable, size_hint_weight=(EVAS_HINT_EXPAND, 0.0),
                                 size_hint_align=(EVAS_HINT_FILL, 0.5), single_line=True,
                                 scrollable=True,
                                 text="")
        self.FrameTable.pack(self.AmpereEntry, 1, 5, 2, 1)
        self.AmpereEntry.show()

