// Copyright 2023 worthlessowl (@worthlessowl)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT_owlchick_25keys( \
	K00, K01, K02, K03, K04, \
	K10, K11, K12, K13, K14, \
	K20, K21, K22, K23, K24, \
	K30, K31, K32, K33, K34, \
	K40, K41, K42, K43, K44  \
) { \
	{ K04,   K14,   K24,   K34,   K44 }, \
	{ K03,   K13,   K23,   K33,   K43 }, \
	{ K02,   K12,   K22,   K32,   K42 }, \
	{ K01,   K11,   K21,   K31,   K41 }, \
	{ K00,   K10,   K20,   K30,   K40 }  \
}
