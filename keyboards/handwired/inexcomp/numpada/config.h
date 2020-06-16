#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4943 // "IC"
#define PRODUCT_ID      0x4e41 // "NA"
#define DEVICE_VER      0x0050 // version 0.5
#define MANUFACTURER    Inexpensive Computers
#define PRODUCT         NumpadA
#define DESCRIPTION     Fully programmable numpad

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 4

/* key matrix pins */
#define MATRIX_ROW_PINS { B9, B11, B10, B2, B1, B0 }
#define MATRIX_COL_PINS { B13, B12, A3, A2 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#endif
