// Copyright 2023 worthlessowl (@worthlessowl)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT_owlchick_25keys(
        KC_1, KC_2, KC_3, KC_4, KC_5, 
        KC_6, KC_7, KC_8, KC_9, KC_0, 
        KC_Q, KC_W, KC_E, KC_R, KC_T, 
        KC_A, KC_S, KC_D, KC_F, KC_G, 
        KC_Z, KC_X, KC_C, KC_V, KC_B
    ),
    [_FN] = LAYOUT_owlchick_25keys(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};
