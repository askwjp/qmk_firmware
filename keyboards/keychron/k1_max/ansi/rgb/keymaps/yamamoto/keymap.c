// Copyright 2021 JZ-Skyloong (@JZ-Skyloong)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_japanese.h"


// 全レイヤーで Key Overrides を有効化
// Ctrl, Win, Altキーを押していたら Key Overrides を発動しない
const key_override_t JP_GRV_key_override = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, JP_GRV, S(KC_EQL), ~0, MOD_MASK_CAG);
const key_override_t JP_SCLN_key_override = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, JP_SCLN, KC_QUOT, ~0, MOD_MASK_CAG);
const key_override_t JP_QUOT_key_override = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, JP_QUOT, S(KC_2), ~0, MOD_MASK_CAG);
const key_override_t JP_2_key_override = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, JP_2, KC_LBRC, ~0, MOD_MASK_CAG);
const key_override_t JP_6_key_override = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, JP_6, KC_EQL, ~0, MOD_MASK_CAG);
const key_override_t JP_7_key_override = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, JP_7, S(KC_6), ~0, MOD_MASK_CAG);
const key_override_t JP_8_key_override = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, JP_8, S(KC_QUOT), ~0, MOD_MASK_CAG);
const key_override_t JP_9_key_override = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, JP_9, S(KC_8), ~0, MOD_MASK_CAG);
const key_override_t JP_0_key_override = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, JP_0, S(KC_9), ~0, MOD_MASK_CAG);
const key_override_t JP_BSLS_key_override = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, JP_BSLS, S(KC_INT3), ~0, MOD_MASK_CAG);
const key_override_t JP_MINS_key_override = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, JP_MINS, S(KC_INT1), ~0, MOD_MASK_CAG);
const key_override_t JP_EQL_key_override = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, JP_EQL, S(KC_SCLN), ~0, MOD_MASK_CAG);
const key_override_t JP_LBRC_key_override = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, JP_LBRC, S(KC_RBRC), ~0, MOD_MASK_CAG);
const key_override_t JP_RBRC_key_override = ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, JP_RBRC, S(KC_NUHS), ~0, MOD_MASK_CAG);

const key_override_t **key_overrides = (const key_override_t *[]){
    &JP_GRV_key_override,
    &JP_SCLN_key_override,
    &JP_QUOT_key_override,
    &JP_2_key_override,
    &JP_6_key_override,
    &JP_7_key_override,
    &JP_8_key_override,
    &JP_9_key_override,
    &JP_0_key_override,
    &JP_BSLS_key_override,
    &JP_MINS_key_override,
    &JP_EQL_key_override,
    &JP_LBRC_key_override,
    &JP_RBRC_key_override,
    NULL // Null terminate the array of overrides!
};
// key override setting end


// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//     /*
//      * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
//      * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │Bsp│
//      * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
//      * │Tab│ Q │ W │ E | R │ T │ Y │ U │ I │ O │ P │ [ │ ] │ \ │
//      * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
//      * │Cap│ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │   |Ent│
//      * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
//      * │Sft│ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │   |Sft|   │
//      * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
//      * │Ctl│GUI│Alt│   │Spc│Mut│   │   |Spc|Alt│App│Ctl│   │Mo1|
//      * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
//      */
//     [0] = LAYOUT_all(
//         KC_ESC,     KC_1,     JP_2,     KC_3,     KC_4,     KC_5,        JP_6,     JP_7,       JP_8,     JP_9,       JP_0,       JP_MINS,   JP_EQL,    KC_BSPC,
//         KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,        KC_Y,     KC_U,       KC_I,     KC_O,       KC_P,       JP_LBRC,   JP_RBRC,   JP_BSLS,
//         KC_LCTL,    KC_A,     KC_S,     KC_D,     KC_F,     KC_G,        KC_H,     KC_J,       KC_K,     KC_L,       JP_SCLN,    JP_QUOT,              KC_ENT,
//         KC_LSFT,    KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,        KC_N,     KC_M,       KC_COMM,  KC_DOT,     KC_SLSH,               KC_RSFT,
//         MO(1),      KC_LGUI,  ALT_MHEN,           KC_SPC,   KC_SPC,      KC_MUTE,              KC_SPC,   ALT_HENK,   KC_APP,     KC_RCTL,              MO(3)

//     ),
//     [1] = LAYOUT_all(
//         JP_GRV,   _______,  _______,  _______,  _______,  _______,       _______,  _______,    _______,  _______,    _______,    _______,   _______,  KC_DEL,
//         _______,  _______,  _______,  KC_UP,    _______,  _______,       _______,  JP_7,       JP_8,     JP_9,       _______,    _______,   _______,  _______,
//         MO(2),    _______,  KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_HOME,       KC_PGUP,  JP_4,       JP_5,     JP_6,       _______,    _______,             _______,
//         _______,  _______,  _______,  _______,  _______,  KC_END,        KC_PGDN,  JP_1,       JP_2,     JP_3,       _______,               _______,
//         _______,  _______,  _______,            JP_0,     JP_0,          _______,              JP_0,     _______,    _______,    _______,             _______
//     ),
//     [2] = LAYOUT_all(
//         _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,         KC_F6,    KC_F7,      KC_F8,    KC_F9,      KC_F10,     KC_F11,    KC_F12,   _______,
//         _______,  _______,  _______,  _______,  _______,  _______,       _______,  KC_F7,      KC_F8,    KC_F9,      _______,    _______,   _______,  _______,
//         _______,  _______,  _______,  _______,  _______,  _______,       _______,  KC_F4,      KC_F5,    KC_F6,      _______,    _______,             _______,
//         _______,  _______,  _______,  _______,  _______,  _______,       _______,  KC_F1,      KC_F2,    KC_F3,      _______,               _______,
//         _______,  _______,  _______,            KC_F10,   KC_F10,        _______,              KC_F10,   _______,    _______,    _______,             _______
//     ),
//     [3] = LAYOUT_all(
//         _______,  _______,  _______,  _______,  _______,  _______,       _______,  _______,    _______,  _______,    _______,    _______,   _______,  _______,
//         _______,  _______,  _______,  _______,  _______,  _______,       _______,  _______,    _______,  _______,    RGB_M_P,    RGB_RMOD,  RGB_RMOD, RGB_TOG,
//         _______,  _______,  KC_VOLD,  KC_MUTE,  KC_VOLU,  _______,       _______,  _______,    _______,  _______,    RGB_SPD,    RGB_SPI,             _______,
//         _______,  _______,  _______,  _______,  _______,  _______,       _______,  _______,    RGB_VAD,  RGB_VAI,    KC_UP,                 _______,
//         _______,  _______,  _______,            _______,  _______,       _______,              _______,  KC_LEFT,    KC_DOWN,    KC_RIGHT,            _______
//     )
// };


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │Bsp│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Tab│ Q │ W │ E | R │ T │ Y │ U │ I │ O │ P │ [ │ ] │ \ │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Cap│ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │   |Ent│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Sft│ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │   |Sft|   │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Ctl│GUI│Alt│   │Spc│Mut│   │   |Spc|Alt│App│Ctl│   │Mo1|
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_all(
        KC_ESC,     KC_1,     JP_2,     KC_3,     KC_4,     KC_5,        JP_6,     JP_7,       JP_8,     JP_9,       JP_0,       JP_MINS,   JP_EQL,    KC_BSPC,
        KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,        KC_Y,     KC_U,       KC_I,     KC_O,       KC_P,       JP_LBRC,   JP_RBRC,   JP_BSLS,
        KC_LCTL,    KC_A,     KC_S,     KC_D,     KC_F,     KC_G,        KC_H,     KC_J,       KC_K,     KC_L,       JP_SCLN,    JP_QUOT,              KC_ENT,
        KC_LSFT,    KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,        KC_N,     KC_M,       KC_COMM,  KC_DOT,     KC_SLSH,               KC_RSFT,
        MO(2),      KC_LGUI,  ALT_MHEN,           KC_SPC,   KC_SPC,      KC_MUTE,              KC_SPC,   ALT_HENK,   KC_APP,     KC_RCTL,              MO(4)

    ),
    [1] = LAYOUT_all(
        KC_ESC,     KC_1,     JP_2,     KC_3,     KC_4,     KC_5,        JP_6,     JP_7,       JP_8,     JP_9,       JP_0,       JP_MINS,   JP_EQL,    KC_BSPC,
        KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,        KC_Y,     KC_U,       KC_I,     KC_O,       KC_P,       JP_LBRC,   JP_RBRC,   JP_BSLS,
        KC_LGUI,    KC_A,     KC_S,     KC_D,     KC_F,     KC_G,        KC_H,     KC_J,       KC_K,     KC_L,       JP_SCLN,    JP_QUOT,              KC_ENT,
        KC_LSFT,    KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,        KC_N,     KC_M,       KC_COMM,  KC_DOT,     KC_SLSH,               KC_RSFT,
        MO(2),      KC_LCTL,  ALT_MEISU,          KC_SPC,   KC_SPC,      KC_MUTE,              KC_SPC,   ALT_MKANA,  KC_APP,     KC_RCTL,              MO(4)

    ),    
    [2] = LAYOUT_all(
        _______,  _______,  _______,  _______,  _______,  _______,       _______,  _______,    _______,  _______,    _______,    _______,   _______,  _______,
        _______,  _______,  _______,  KC_UP,    _______,  _______,       _______,  JP_7,       JP_8,     JP_9,       _______,    _______,   _______,  _______,
        MO(3),    JP_GRV,   KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_HOME,       KC_PGUP,  JP_4,       JP_5,     JP_6,       _______,    _______,             _______,
        _______,  _______,  _______,  _______,  _______,  KC_END,        KC_PGDN,  JP_1,       JP_2,     JP_3,       _______,               _______,
        _______,  _______,  _______,            JP_0,     JP_0,          _______,              JP_0,     _______,    _______,    _______,             _______
    ),
    [3] = LAYOUT_all(
        _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,         KC_F6,    KC_F7,      KC_F8,    KC_F9,      KC_F10,     KC_F11,    KC_F12,   KC_DEL,
        _______,  _______,  _______,  _______,  _______,  _______,       _______,  KC_F7,      KC_F8,    KC_F9,      _______,    _______,   _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,       _______,  KC_F4,      KC_F5,    KC_F6,      _______,    _______,             _______,
        _______,  _______,  _______,  _______,  _______,  _______,       _______,  KC_F1,      KC_F2,    KC_F3,      _______,               _______,
        _______,  _______,  _______,            KC_F10,   KC_F10,        _______,              KC_F10,   _______,    _______,    _______,             _______
    ),
    [4] = LAYOUT_all(
        _______,  _______,  _______,  _______,  _______,  _______,       _______,  _______,    _______,  _______,    _______,    _______,   _______,  _______,
        _______,  _______,  TO(1),    TO(0),    _______,  _______,       _______,  _______,    _______,  _______,    RGB_M_P,    RGB_RMOD,  RGB_RMOD, RGB_TOG,
        _______,  _______,  KC_VOLD,  KC_MUTE,  KC_VOLU,  _______,       _______,  _______,    _______,  _______,    RGB_SPD,    RGB_SPI,             _______,
        _______,  _______,  _______,  _______,  _______,  _______,       _______,  _______,    RGB_VAD,  RGB_VAI,    KC_UP,                 _______,
        _______,  _______,  _______,            _______,  _______,       _______,              _______,  KC_LEFT,    KC_DOWN,    KC_RIGHT,            _______
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [4] = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI) }
};
#endif

