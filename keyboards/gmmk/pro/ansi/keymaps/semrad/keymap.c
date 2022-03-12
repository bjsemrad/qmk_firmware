/* Copyright 2021 Glorious, LLC <salman@pcgamingrace.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "rgb_matrix_map.h"
#include "semrad.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
                KC_ESC,      KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,       KC_F8,       KC_F9,      KC_F10,      KC_F11,      KC_F12,      KC_DEL,      KC_MUTE,
                KC_GRV,      KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,        KC_8,        KC_9,       KC_0,        KC_MINS,     KC_EQL,      KC_BSPC,     KC_HOME,
                KC_TAB,      KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_Y,       KC_U,        KC_I,        KC_O,       KC_P,        KC_LBRC,     KC_RBRC,     KC_BSLS,     KC_PGUP,
                KC_CAPS,     KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_H,       KC_J,        KC_K,        KC_L,       KC_SCLN,     KC_QUOT,     KC_ENT,      KC_PGDN,
                KC_LSFT,     KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_N,       KC_M,        KC_COMM,     KC_DOT,     KC_SLSH,     KC_RSFT,     KC_UP,       KC_END,
                KC_LCTL,     KC_LGUI,    KC_LALT,    KC_SPC,     KC_RALT,    MO(2),      KC_RCTL,    KC_LEFT,     KC_DOWN,     KC_RGHT),

    [1] = LAYOUT(
                KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,
                KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,
                KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,
                KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,
                KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,
                KC_TRNS,     KC_LALT,    KC_LGUI,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS),

    [2] = LAYOUT(
                KC_TRNS,     KC_MYCM,    KC_WHOM,    KC_CALC,    KC_MSEL,    KC_MPRV,    KC_MNXT,    KC_MPLY,     KC_MSTP,     KC_MUTE,    KC_VOLD,     KC_VOLU,     KC_TRNS,     KC_PSCR,     KC_TRNS,
                TG(1),       RGB_TOG,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,
                KC_TRNS,     RGB_SAI,    RGB_VAI,    RGB_HUI,    RGB_M_P,    RGB_M_B,    RGB_M_R,    RGB_M_SW,    RGB_M_SN,    RGB_M_K,    RGB_M_X,     RGB_M_G,     KC_TRNS,     RESET,       KC_TRNS,
                KC_TRNS,     RGB_SAD,    RGB_VAD,    RGB_HUD,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,
                KC_TRNS,     RGB_NITE,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    NK_TOGG,    KC_TRNS,     KC_TRNS,     KC_TRNS,    KC_TRNS,     KC_TRNS,     RGB_MOD,     KC_TRNS,
                KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    RGB_SPD,     RGB_RMOD,    RGB_SPI),

    [3] = LAYOUT(
                KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,
                KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,
                KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,
                KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,
                KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,
                KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,     KC_TRNS)};



bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(   KC_VOLU);
    } else {
        tap_code(KC_VOLD);
    }
    return true;
}

void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    #ifdef RGB_MATRIX_ENABLE
    if (rgb_nightmode){
        for (uint8_t i = 0; i < sizeof(LED_SET_MINUS_SIDE) / sizeof(LED_SIDE_LEFT[0]); i++) {
            rgb_matrix_set_color(LED_SET_MINUS_SIDE[i], RGB_OFF);
        }
    }
    #endif
    // rgb_matrix_set_color_all(RGB_OFF);
    if (IS_HOST_LED_ON(USB_LED_CAPS_LOCK)) {
        if (!caps_active) {
            caps_active   = true;
            caps_flash_on = true;
            caps_flasher  = timer_read();
        }
        if (timer_elapsed(caps_flasher) > 500) {
            caps_flasher  = timer_read();
            caps_flash_on = !caps_flash_on;
        }

        // rgb_matrix_set_color(LED_CAPS, RGB_RED);
        if (caps_flash_on) {
            for (uint8_t i = 0; i < sizeof(LED_SIDE_LEFT) / sizeof(LED_SIDE_LEFT[0]); i++) {
                rgb_matrix_set_color(LED_CAPS, RGB_RED);
                rgb_matrix_set_color(LED_SIDE_LEFT[i], RGB_RED);
                rgb_matrix_set_color(LED_SIDE_RIGHT[i], RGB_RED);
            }
        } else {
            for (uint8_t i = 0; i < sizeof(LED_SIDE_LEFT) / sizeof(LED_SIDE_LEFT[0]); i++) {
                rgb_matrix_set_color(LED_CAPS, 0, 0, 0);
                rgb_matrix_set_color(LED_SIDE_LEFT[i], 0, 0, 0);
                rgb_matrix_set_color(LED_SIDE_RIGHT[i], 0, 0, 0);
            }
        }
    } else {
        caps_active = false;
    }
}

#ifdef RGB_MATRIX_ENABLE
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_NITE:
      if (record->event.pressed) {
          rgb_nightmode = !rgb_nightmode;
      }else {
          return false;
      }
      break;
    default:
      return true; // Process all other keycodes normally
  }
  return true;
}
#endif // RGB_MATRIX_ENABLE
