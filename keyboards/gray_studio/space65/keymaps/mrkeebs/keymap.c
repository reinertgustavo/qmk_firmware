/* Copyright 2019 MrKeebs
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

// Layer shorthand
enum layers {
    _BASE = 0, // Base
    _WIN,      // Windows
    _CTRL      // Extras
};

#define KC_LEND LT(_CTRL, KC_END)
#define KC_TWIN TG(_WIN)
#define KC_CTCP MT(MOD_LCTL, KC_CAPS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT_ISO( \
        KC_GESC, KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV, KC_HOME, \
        KC_TAB,  KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,          KC_PGUP, \
        KC_CTCP, KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_ENT,           KC_PGDN, \
        KC_LSFT, KC_LSFT, KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,            KC_LEND, \
        KC_LCTL, KC_LALT, KC_LGUI,                KC_SPC, KC_SPC, KC_SPC,         KC_RGUI, KC_RGUI, KC_LEFT, KC_DOWN, KC_RGHT                    \
    ),
[_WIN] = LAYOUT_ISO( \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  \
        KC_LCTL, KC_LGUI, KC_LALT, _______, _______, _______, KC_RALT, KC_RALT, _______, _______, _______                    \
    ),
[_CTRL] = LAYOUT_ISO( \
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, _______, _______, KC_DEL, KC_DEL, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,   _______, _______, \
        KC_CAPS, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  \
        _______, _______, _______, _______, _______, _______, KC_TWIN, KC_TWIN, KC_TWIN, _______, _______                    \
    ),
};