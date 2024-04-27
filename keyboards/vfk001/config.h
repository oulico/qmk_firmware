// Copyright 2024 Junghyun Lee (@oulico)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* to use split keyboard */
#define SPLIT_USB_DETECT 

/* define the handedness of the keyboard. this keyboard will be connected with a cable from left half of the keyboard*/
#define MASTER_LEFT

#define MATRIX_COL_PINS {C6, D4, D0, D1, D7}
#define MATRIX_ROW_PINS {B5,B4, E6, B6 }

#define MATRIX_COL_PINS_RIGHT { D7, D1, D0, D4, C6 }
#define MATRIX_ROW_PINS_RIGHT { B6, E6, B4, B5 }

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5
