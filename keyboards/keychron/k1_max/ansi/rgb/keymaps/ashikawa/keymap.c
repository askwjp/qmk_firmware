/* Copyright 2024 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "keychron_common.h"

enum layers {
    MAC_BASE,
    MAC_FN,
    WIN_BASE,
    WIN_FN,
    MAC_ADJ,
    WIN_ADJ,
    NUMPAD_LAYER
};

// US配列用のカスタムキーコード定義
enum custom_keycodes {
    US_GRV = SAFE_RANGE,// `と~
    US_2,               // 2と@
    US_3,               // 3と#
    US_4,               // 4と$
    US_5,               // 5と%
    US_6,               // 6と^
    US_7,               // 7と&
    US_8,               // 8と*
    US_9,               // 9と(
    US_0,               // 0と)
    US_MINS,            // -と_
    US_EQL,             // =と+
    US_LBRC,            // [と{
    US_RBRC,            // ]と}
    US_BSLS,            // \と|
    US_SCLN,            // ;と:
    US_QUOT             // 'と"
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_ansi_87(
        KC_ESC,             KC_BRID,  KC_BRIU,  KC_MCTRL, KC_LNPAD, RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_SNAP,  KC_SIRI,  RGB_MOD,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        LT(NUMPAD_LAYER, KC_CAPS),  KC_A, KC_S, KC_D, KC_F, KC_G,   KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,            KC_UP,
        KC_LCTL,  KC_LOPTN, KC_LCMMD,                               KC_SPC,                                 KC_RCMMD, KC_ROPTN, MO(MAC_FN), TG(MAC_ADJ), KC_LEFT,  KC_DOWN,  KC_RGHT),

    [MAC_FN] = LAYOUT_ansi_87(
        _______,            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,  _______,  RGB_TOG,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  P2P4G,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,            _______,  _______,  _______,  _______,  BAT_LVL,  NK_TOGG,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______),

    [WIN_BASE] = LAYOUT_ansi_87(
        KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_CTANA, RGB_MOD,
        US_GRV,   KC_1,     US_2,     US_3,     US_4,     US_5,     US_6,     US_7,     US_8,     US_9,     US_0,     US_MINS,  US_EQL,   KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     US_LBRC,  US_RBRC,  US_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        LT(NUMPAD_LAYER, KC_CAPS),  KC_A, KC_S, KC_D, KC_F, KC_G,   KC_H,     KC_J,     KC_K,     KC_L,     US_SCLN,  US_QUOT,            KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,            KC_UP,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  KC_RGUI, MO(WIN_FN), TG(WIN_ADJ), KC_LEFT,  KC_DOWN,  KC_RGHT),

    [WIN_FN] = LAYOUT_ansi_87(
        _______,            KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,  _______,  RGB_TOG,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  P2P4G,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,            _______,  _______,  _______,  _______,  BAT_LVL,  NK_TOGG,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______),

    [MAC_ADJ] = LAYOUT_ansi_87(
        RESET,              _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______),

    [WIN_ADJ] = LAYOUT_ansi_87(
        RESET,              _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______),

    [NUMPAD_LAYER] = LAYOUT_ansi_87(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_7,     KC_8,     KC_9,     _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_4,     KC_5,     KC_6,     _______,  _______,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  KC_1,     KC_2,     KC_3,     _______,            _______,            _______,
        _______,  _______,  _______,                                KC_0,                                   _______,  _______,  _______,  _______,  _______,  _______,  _______)
};

// clang-format on

// カスタムキーコードの処理 - Shift状態管理を修正版
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keychron_common(keycode, record)) {
        return false;
    }
    
    // 🔵 NEW: Shiftの状態を保存
    uint8_t saved_mods = get_mods();
    
    switch (keycode) {
        case US_GRV:
            if (record->event.pressed) {
                if (saved_mods & MOD_MASK_SHIFT) {
                    // Shift+`で~を出力 → 日本語配列でShift+^
                    clear_mods();
                    tap_code16(S(KC_EQL));  // Shift+^キー
                    set_mods(saved_mods);
                } else {
                    // `を出力 → 日本語配列で@キー（Shift+2）
                    tap_code16(S(KC_2));
                }
            }
            return false;
            
        case US_2:
            if (record->event.pressed) {
                if (saved_mods & MOD_MASK_SHIFT) {
                    // Shift+2で@を出力 → 日本語配列で@キー（通常の@）
                    clear_mods();
                    tap_code(KC_LBRC);  // @キー
                    set_mods(saved_mods);
                } else {
                    // 2を出力
                    tap_code(KC_2);
                }
            }
            return false;
            
        case US_3:
            if (record->event.pressed) {
                if (saved_mods & MOD_MASK_SHIFT) {
                    // Shift+3で#を出力 → 日本語配列でShift+3
                    clear_mods();
                    tap_code16(S(KC_3));
                    set_mods(saved_mods);
                } else {
                    tap_code(KC_3);
                }
            }
            return false;
            
        case US_4:
            if (record->event.pressed) {
                if (saved_mods & MOD_MASK_SHIFT) {
                    // Shift+4で$を出力 → 日本語配列でShift+4
                    clear_mods();
                    tap_code16(S(KC_4));
                    set_mods(saved_mods);
                } else {
                    tap_code(KC_4);
                }
            }
            return false;
            
        case US_5:
            if (record->event.pressed) {
                if (saved_mods & MOD_MASK_SHIFT) {
                    // Shift+5で%を出力 → 日本語配列でShift+5
                    clear_mods();
                    tap_code16(S(KC_5));
                    set_mods(saved_mods);
                } else {
                    tap_code(KC_5);
                }
            }
            return false;
            
        case US_6:
            if (record->event.pressed) {
                if (saved_mods & MOD_MASK_SHIFT) {
                    // Shift+6で^を出力 → 日本語配列で^キー
                    clear_mods();
                    tap_code(KC_EQL);  // ^キー
                    set_mods(saved_mods);
                } else {
                    tap_code(KC_6);
                }
            }
            return false;
            
        case US_7:
            if (record->event.pressed) {
                if (saved_mods & MOD_MASK_SHIFT) {
                    // Shift+7で&を出力 → 日本語配列でShift+6
                    clear_mods();
                    tap_code16(S(KC_6));
                    set_mods(saved_mods);
                } else {
                    tap_code(KC_7);
                }
            }
            return false;
            
        case US_8:
            if (record->event.pressed) {
                if (saved_mods & MOD_MASK_SHIFT) {
                    // Shift+8で*を出力 → 日本語配列でShift+:
                    clear_mods();
                    tap_code16(S(KC_SCLN));
                    set_mods(saved_mods);
                } else {
                    tap_code(KC_8);
                }
            }
            return false;
            
        case US_9:
            if (record->event.pressed) {
                if (saved_mods & MOD_MASK_SHIFT) {
                    // Shift+9で(を出力 → 日本語配列でShift+8
                    clear_mods();
                    tap_code16(S(KC_8));
                    set_mods(saved_mods);
                } else {
                    tap_code(KC_9);
                }
            }
            return false;
            
        case US_0:
            if (record->event.pressed) {
                if (saved_mods & MOD_MASK_SHIFT) {
                    // Shift+0で)を出力 → 日本語配列でShift+9
                    clear_mods();
                    tap_code16(S(KC_9));
                    set_mods(saved_mods);
                } else {
                    tap_code(KC_0);
                }
            }
            return false;
            
        case US_MINS:
            if (record->event.pressed) {
                if (saved_mods & MOD_MASK_SHIFT) {
                    // Shift+-で_を出力 → 日本語配列でShift+バクスラ
                    clear_mods();
                    tap_code16(S(KC_INT1));
                    set_mods(saved_mods);
                } else {
                    // -を出力 → 日本語配列で-キー
                    tap_code(KC_MINS);
                }
            }
            return false;
            
        case US_EQL:
            if (record->event.pressed) {
                if (saved_mods & MOD_MASK_SHIFT) {
                    // Shift+=で+を出力 → 日本語配列でShift+;
                    clear_mods();
                    tap_code16(S(KC_SCLN));
                    set_mods(saved_mods);
                } else {
                    // =を出力 → 日本語配列でShift+-
                    tap_code16(S(KC_MINS));
                }
            }
            return false;
            
        case US_LBRC:
            if (record->event.pressed) {
                if (saved_mods & MOD_MASK_SHIFT) {
                    // Shift+[で{を出力 → 日本語配列でShift+@
                    clear_mods();
                    tap_code16(S(KC_LBRC));
                    set_mods(saved_mods);
                } else {
                    // [を出力 → 日本語配列で@
                    tap_code(KC_LBRC);
                }
            }
            return false;
            
        case US_RBRC:
            if (record->event.pressed) {
                if (saved_mods & MOD_MASK_SHIFT) {
                    // Shift+]で}を出力 → 日本語配列でShift+[
                    clear_mods();
                    tap_code16(S(KC_RBRC));
                    set_mods(saved_mods);
                } else {
                    // ]を出力 → 日本語配列で[
                    tap_code(KC_RBRC);
                }
            }
            return false;
            
        case US_BSLS:
            if (record->event.pressed) {
                if (saved_mods & MOD_MASK_SHIFT) {
                    // Shift+\で|を出力 → 日本語配列でShift+バクスラ
                    clear_mods();
                    tap_code16(S(KC_INT3));
                    set_mods(saved_mods);
                } else {
                    // \を出力 → 日本語配列でバクスラ
                    tap_code(KC_INT3);
                }
            }
            return false;
            
        case US_SCLN:
            if (record->event.pressed) {
                if (saved_mods & MOD_MASK_SHIFT) {
                    // Shift+;で:を出力 → 日本語配列で:
                    clear_mods();
                    tap_code(KC_SCLN);
                    set_mods(saved_mods);
                } else {
                    // ;を出力 → 日本語配列で+
                    tap_code16(S(KC_SCLN));
                }
            }
            return false;
            
        case US_QUOT:
            if (record->event.pressed) {
                if (saved_mods & MOD_MASK_SHIFT) {
                    // Shift+'で"を出力 → 日本語配列でShift+2
                    clear_mods();
                    tap_code16(S(KC_2));
                    set_mods(saved_mods);
                } else {
                    // 'を出力 → 日本語配列で7
                    tap_code(KC_7);
                }
            }
            return false;
    }
    
    return true;
}