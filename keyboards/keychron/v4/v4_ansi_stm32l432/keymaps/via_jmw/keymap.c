/* Copyright 2022 @ Keychron (https://www.keychron.com)
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

// clang-format off

enum layers {
    MAC_BASE,
    WIN_BASE,
    _FN1,
    _FN2,
    _FN3
};

#define KC_SPACEFN LT(_FN1, KC_SPC)
#define KC_LCESC LCTL_T(KC_ESC)

/*
    (
        KC_ESC,  KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
        KC_TAB,  KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
        KC_CAPS, KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,           KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,            KC_RSFT,
        KC_LCTL, KC_LWIN,  KC_LALT,                            KC_SPC,                             KC_RALT,  MO(_FN1), MO(_FN2), KC_RCTL),
    (
        _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______,  _______,
        _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______,  _______,
        _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,            _______,
        _______,           _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,            _______,
        _______, _______,  _______,                            _______,                            _______,  _______,  _______,  _______),
*/
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_ansi_61( // game
        KC_ESC,  KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
        KC_TAB,  KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
        KC_CAPS, KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,           KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,            KC_RSFT,
        KC_LCTL, KC_LWIN,  KC_LALT,                            KC_SPC,                             KC_RALT,  MO(_FN1), MO(_FN2), KC_RCTL),

    [WIN_BASE] = LAYOUT_ansi_61( // spacefn
        KC_GRV,  KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
        KC_TAB,  KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
        KC_LCESC,KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,           KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,            KC_RSFT,
        KC_LCTL, KC_LWIN,  KC_LALT,                            KC_SPACEFN,                         KC_RALT,  MO(_FN1), MO(_FN2), KC_RCTL),

    [_FN1] = LAYOUT_ansi_61(
        _______, KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   _______,
        RGB_TOG, RGB_MOD,  _______, _______, _______, _______, KC_PGUP, KC_HOME, KC_INS,  KC_END,  KC_PGDN,  _______,  _______,  _______,
        _______, KC_CAPS,  _______, _______, MO(_FN3),_______, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,KC_BSPC,  KC_DEL,             _______,
        _______,           _______, _______, _______, KC_MPRV, _______, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU,  KC_MPLY,            _______,
        _______, _______,  _______,                            _______,                            _______,  _______,  MO(_FN3),  _______),

    [_FN2] = LAYOUT_ansi_61(
        _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______,  _______,
        _______, _______,  _______, _______, _______, _______, KC_WH_U, KC_BTN1, KC_BTN3, KC_BTN2, KC_WH_D,  _______,  _______,  _______,
        _______, _______,  _______, _______, _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______,  _______,            _______,
        _______,           _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,            _______,
        _______, _______,  _______,                            _______,                            _______,  MO(_FN3),  _______,  _______),

    [_FN3] = LAYOUT_ansi_61(
        _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  EE_CLR,   QK_BOOT,
        _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______,  _______,
        _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,            _______,
        _______,           _______, _______, CM_TOGG, _______, _______, NK_TOGG, _______, _______, _______,  _______,            _______,
        _______, _______,  _______,                            _______,                            _______,  _______,  _______,  _______)
};

enum combo_events {
  EM_EMAIL,
  COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH; // remove the COMBO_COUNT define and use this instead!

const uint16_t PROGMEM email_combo[] = {KC_E, KC_M, COMBO_END};

combo_t key_combos[] = {
  [EM_EMAIL] = COMBO_ACTION(email_combo),
};
/* COMBO_ACTION(x) is same as COMBO(x, KC_NO) */

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case EM_EMAIL:
      if (pressed) {
        SEND_STRING("john.doe@example.com");
      }
      break;
  }
}