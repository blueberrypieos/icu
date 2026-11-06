// SPDX-License-Identifier: BSD-2-Clause
// Copyright (c) 2026 The Blueberry Pie OS Authors
#include "unicode/ualoc.h"
#include <string.h>
U_CAPI int32_t U_EXPORT2
ualoc_getAppleParent(const char*, char* parent, int32_t parentCapacity, UErrorCode* err)
{
	if (U_FAILURE(*err)) {
		return 0;
	}
	if (parentCapacity < 5) {
		*err = U_BUFFER_OVERFLOW_ERROR;
		return 4;
	}
	strcpy(parent, "root");
	return 4;
}
