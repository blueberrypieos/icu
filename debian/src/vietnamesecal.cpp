// SPDX-License-Identifier: BSD-2-Clause
// Copyright (c) 2026 The Blueberry Pie OS Authors
#include "vietnamesecal.h"
U_NAMESPACE_BEGIN
VietnameseCalendar::VietnameseCalendar(const Locale& locale, UErrorCode& status)
	: GregorianCalendar(locale, status) {}
U_NAMESPACE_END
