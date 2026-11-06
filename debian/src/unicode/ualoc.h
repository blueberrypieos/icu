// SPDX-License-Identifier: BSD-2-Clause
// Copyright (c) 2026 The Blueberry Pie OS Authors
#ifndef PIE_UALOC_H
#define PIE_UALOC_H
#include "unicode/utypes.h"
U_CAPI int32_t U_EXPORT2
ualoc_getAppleParent(const char* localeID, char* parent, int32_t parentCapacity, UErrorCode* err);
#endif
