// Copyright 2024 Junghyun Lee (@JH)
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

#define MATRIX_COL_PINS { D7, D1, D0, D4, C6 }
#define MATRIX_ROW_PINS { B6, E6, B4, B5  }
#define DIODE_DIRECTION COL2ROW

#define SOFT_SERIAL_PIN D2
/* define the handedness of the keyboard. this keyboard will be connected with a cable from left half of the keyboard*/
#define MASTER_LEFT

#define DEBOUNCE 5

#define SPLITS_KEYBOARD yes

