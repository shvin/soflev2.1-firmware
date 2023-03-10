#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

#pragma once

#define MASTER_LEFT
#define OLED_TIMEOUT 90000

/* #ifdef RGBLIGHT_ENABLE
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_SPLIT
    // Disabling some of these is a good way to save flash space.
//  #define RGBLIGHT_EFFECT_ALTERNATING
//  #define RGBLIGHT_EFFECT_RGB_TEST
//  #define RGBLIGHT_EFFECT_RAINBOW_MOOD
//  #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//  #define RGBLIGHT_EFFECT_BREATHING
//  #define RGBLIGHT_EFFECT_KNIGHT
//  #define RGBLIGHT_EFFECT_SNAKE
//  #define RGBLIGHT_EFFECT_CHRISTMAS
//  #define RGBLIGHT_EFFECT_TWINKLE

    // Set default lighting option
    #define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_SWIRL+2
    #define RGBLIGHT_LAYERS

    // Allow compiling to work on sofle/rev1
    #if defined(KEYBOARD_sofle_rev1)
	    #define RGBLED_NUM 70
	    #define RGB_DI_PIN D3
    #endif
#endif */