// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)}
};
#endif

enum layer_names {
    _BASE,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬
     * │ 7 │ 8 │ 
     * ├───┼───┼───┼
     * │ 4 │ 5 │ 6 │
     * └───┴───┴───┴
     */
    [0] = LAYOUT(
        KC_COPY, KC_PASTE,
        KC_UNDO, KC_WREF, KC_CUT
    )
};
