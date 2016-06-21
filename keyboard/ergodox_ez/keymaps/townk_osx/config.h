#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

/* #define NO_DEBUG */
/* #define CONSOLE_ENABLE = yes */

#undef MOUSEKEY_TIME_TO_MAX
#undef MOUSEKEY_MAX_SPEED

#define MOUSEKEY_TIME_TO_MAX 1
#define MOUSEKEY_MAX_SPEED 2

#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY 0

#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY 0

#define ONESHOT_TAP_TOGGLE 2
#define ONESHOT_TIMEOUT 3000

#endif
