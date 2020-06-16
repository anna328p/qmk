#pragma once

#include "quantum.h"

#define LAYOUT( \
	kA1, kA2, kA3, kA4, \
	kB1, kB2, kB3, kB4, \
	kC1, kC2, kC3, kC4, \
	kD1, kD2, kD3,     \
	kE1, kE2, kE3, kE4, \
	kF1,      kF2      \
) { \
    { kA1,  kA2,   kA3,  kA4 }, \
    { kB1,  kB2,   kB3,  kB4 }, \
    { kC1,  kC2,   kC3,  kC4 }, \
    { kD1,  kD2,   kD3       }, \
    { kE1,  kE2,   kE3,  kE4 }, \
    { kF1,  KC_NO, kF2        } \
}
