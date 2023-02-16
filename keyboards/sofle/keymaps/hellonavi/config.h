// Copyright 2021 Nicolas Druoton (druotoni)
// Copyright 2012 Jun Wako <wakojun@gmail.com>
// Copyright 2015 Jack Humbert
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define MASTER_LEFT
#define OLED_DRIVER_ENABLE

// tapping toggle for my layers
#define TAPPING_TOGGLE 2

// choose IS_LEFT or IS_RIGHT for compilation and flash firmware
//#define IS_LEFT 1
#define IS_RIGHT 1

// logo glitch
#define WITH_GLITCH
// boot sequence
#define WITH_BOOT

// custom transport for displaying on both side
#define SPLIT_TRANSACTION_IDS_USER USER_SYNC_A

// custom font
#ifdef OLED_FONT_H
#    undef OLED_FONT_H
#endif
#define OLED_FONT_H "navi_font.c"
#undef OLED_FONT_END
#define OLED_FONT_END 125

// more space
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define NO_ACTION_ONESHOT
#define DISABLE_LEADER

// ???
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

// small layer state
#define LAYER_STATE_8BIT

// no debug or trace
#ifndef NO_DEBUG
#    define NO_DEBUG
#endif
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#    define NO_PRINT
#endif

#if defined(KEYBOARD_sofle_rev1)
#	 define OLED_TITLE_PRIMARY ""
#	 define OLED_TITLE_SECONDARY ""
// Add RGB underglow and top facing lighting
#    define RGB_DI_PIN D3
#    define RGBLED_NUM 70
#    define RGBLED_SPLIT \
        { 36, 36 }
#	 define SPLIT_WPM_ENABLE
#    define SPLIT_OLED_ENABLE
#    ifdef RGB_MATRIX_ENABLE
#        define DRIVER_LED_TOTAL RGBLED_NUM
#        define RGB_MATRIX_SPLIT RGBLED_SPLIT
#        define SPLIT_TRANSPORT_MIRROR
#    else
//#        define RGBLIGHT_ANIMATIONS
#        define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#        define RGBLIGHT_LIMIT_VAL 120
#        define RGBLIGHT_HUE_STEP  10
#        define RGBLIGHT_SAT_STEP  17
#        define RGBLIGHT_VAL_STEP  17
#    endif
#endif
