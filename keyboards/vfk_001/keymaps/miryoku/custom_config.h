// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

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

  /* define the handedness of the keyboard. this keyboard will be connected with a cable from left half of t  he keyboard*/
  #define MASTER_LEFT

  #define MATRIX_COL_PINS { C6, D4, D0, D1, D7}
  #define MATRIX_ROW_PINS { B6, E6, B4, B5}

  #define MATRIX_COL_PINS_RIGHT { D7, D1, D0, D4, C6 }
  #define MATRIX_ROW_PINS_RIGHT { B6, E6, B4, B5 }

  #define DIODE_DIRECTION COL2ROW
  #define SOFT_SERIAL_PIN D2
  #define DEBOUNCE 5

#if defined (KEYBOARD_vfk_001)

#define MIRYOKU_MAPPING( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x5_3( \
         K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,      \
         K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,     \
         K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29,     \
         N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
)

#endif
