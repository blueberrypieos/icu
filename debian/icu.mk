# SPDX-License-Identifier: BSD-2-Clause
# Copyright (c) 2026 The Blueberry Pie OS Authors
vietnamesecal.o: $(PIE_SRC)/vietnamesecal.cpp
	$(COMPILE.cc) $(DYNAMICCPPFLAGS) $(DYNAMICCXXFLAGS) -o $@ $<
ualoc.o: $(PIE_SRC)/ualoc.cpp
	$(COMPILE.cc) $(DYNAMICCPPFLAGS) $(DYNAMICCXXFLAGS) -o $@ $<
vietnamesecal.d:
	: > $@
