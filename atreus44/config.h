#pragma once

#define MATRIX_ROW_PINS { F4, F5, F6, F7 }
#define MATRIX_COL_PINS { B1, B3, B2, B6, B5, B4, E6, D7, C6, D4, D0, D1 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
/*
 *  * Rotary Encoder Support
*/

#define DIODE_DIRECTION COL2ROW

/* #define UNICODE_SELECTED_MODES UC_LNX */
#define UNICODE_SELECTED_MODES  UC_WINC, UC_LNX
