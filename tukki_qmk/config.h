#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

#define ENCODERS_PAD_A { D2 }
#define ENCODERS_PAD_B { D3 }

#define MATRIX_ROW_PINS \
    { F4, B6, B5, B4}
#define MATRIX_COL_PINS \
    { F5, F6, F7, B1, B3, B2, E6, D7, C6, D4, D0, D1 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
