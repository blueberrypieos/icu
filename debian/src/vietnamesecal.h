// SPDX-License-Identifier: BSD-2-Clause
// Copyright (c) 2026 The Blueberry Pie OS Authors
#ifndef PIE_VIETNAMESECAL_H
#define PIE_VIETNAMESECAL_H
#include "unicode/gregocal.h"
U_NAMESPACE_BEGIN
class VietnameseCalendar : public GregorianCalendar {
public:
	VietnameseCalendar(const Locale& locale, UErrorCode& status);
};
U_NAMESPACE_END
#endif
