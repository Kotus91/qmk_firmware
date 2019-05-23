/* Copyright 2015-2017 Jack Humbert
 *P
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

#include "planck.h"
#include "action_layer.h"

//#include "keymap_french.h"

extern keymap_config_t keymap_config;

enum planck_layers {
  _AZERTY,
  _BEPO,
  _RAISE,
  _LOWER,
  _ADJUST
};

enum planck_keycodes {
  AZERTY = SAFE_RANGE,
  BEPO
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Azerty
* ,-----------------------------------------------------------------------------------.
* | Esc  |   A  |   Z  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
* |------+------+------+------+------+-------------+------+------+------+------+------|
* | Tab  |   Q  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   M  |Enter |
* |------+------+------+------+------+------|------+------+------+------+------+------|
* | Shift|   W  |   X  |   C  |   V  |   B  |   N  |   ,  |   .  |   :  |   !  | Del  |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* | Ctrl | Menu | Alt  | GUI  |Lower |    Space    |Raise | Left |  Up  | Down |Right |
* `-----------------------------------------------------------------------------------'
*/
[_AZERTY] = {
  {KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC},
  {KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT},
  {KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    S(KC_COMM), KC_DOT,  KC_SLSH, KC_DEL},
  {KC_LCTL, KC_APP,  KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT}
  },

/* Bepo
* ,-----------------------------------------------------------------------------------.
* | Esc  |   A  |   Z  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
* |------+------+------+------+------+-------------+------+------+------+------+------|
* | Tab  |   Q  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   M  |Enter |
* |------+------+------+------+------+------|------+------+------+------+------+------|
* | Shift|   W  |   X  |   C  |   V  |   B  |   N  |   ,  |   .  |   :  |   !  | Del  |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* | Ctrl | Menu | Alt  | GUI  |Lower |    Space    |Raise | Left |  Up  | Down |Right |
* `-----------------------------------------------------------------------------------'
*/
[_BEPO] = {
  {KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC},
  {KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT},
  {KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    S(KC_COMM), KC_DOT,  KC_SLSH, KC_DEL},
  {KC_LCTL, KC_APP,  KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT}
  },

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   7  |   8  |   9  |   +  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Tab  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |   4  |   5  |   6  |   -  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   °  |      |      |      |      |  %   |   1  |   2  |  3   |   *  | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |      |      |      |      |             |      |   0  |   .  | ISO /|  =   |
 * `-----------------------------------------------------------------------------------'r
 */
[_RAISE] = {
  {KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6, S(KC_7),    S(KC_8),  S(KC_9),   KC_PLUS, KC_BSPC},
  {KC_TAB,  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,     S(KC_4),    S(KC_5),  S(KC_6),   KC_6, KC_ENT},
  {KC_LSFT, KC_UNDS, _______, _______, _______, _______, S(KC_QUOT),    S(KC_1),    S(KC_2),  S(KC_3),   KC_BSLS, KC_DEL},
  {KC_LCTL, _______, _______, _______, _______, _______, _______, _______,      S(KC_0) , S(KC_COMM),    S(KC_DOT), KC_EQL}
},


/* Lower
 * ,---------------------------------------------------------------------------- ----.
 * |  Esc |  &   |   é  |   "  |  '   |   (  |  )   |  -   |  è   |   _  |  ç   |  à   |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |  Tab |   #  |   €  |   ^  |   [  |   ]  |   <  |   >  | Home |PG Up |Pg Dn | End  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   µ  |   ù  |   @  |   {  |   }  | ISO ||      |   \  |   ¨  |      | Mute |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 _ \ ¨ ~
 */
[_LOWER] = {
  {KC_ESC,  KC_1, 		KC_2, 		KC_3, 		KC_4, 		KC_5, 			KC_MINUS, KC_6,    KC_7, 		KC_8, 		KC_9, 		KC_0},
  {KC_TAB,  RALT(KC_3), RALT(KC_E), KC_LBRC, RALT(KC_5), RALT(KC_MINUS), 	KC_NUBS, S(KC_NUBS), 	KC_HOME, 	KC_PGUP,    KC_PGDN, KC_END},
  {KC_LSFT, KC_PIPE,    KC_QUOT, 	RALT(KC_0), RALT(KC_4), RALT(KC_EQL), 	RALT(KC_6), _______, 	RALT(KC_8), 	S(KC_LBRC), _______, KC_PGDN},
  {KC_LCTL, _______, 	_______, 	_______, 	_______, 	_______, 	_______, _______, 	KC_MNXT,	KC_VOLD, 	KC_VOLU, KC_MPLY}
},


/* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * |      | Reset|      |      |      |      |      |      |      |      |      |  Del |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |Aud on|Audoff|AGnorm|AGswap|Azerty| Bepo |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |Voice-|Voice+|Mus on|Musoff|MIDIon|MIDIof|      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = {
  {_______, RESET,   DEBUG,   RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD,  RGB_VAI, RGB_VAD, KC_DEL },
  {_______, _______, MU_MOD,  AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, AZERTY,  BEPO, _______,    _______, _______},
  {_______, MUV_DE,  MUV_IN,  MU_ON,   MU_OFF,  MI_ON,   MI_OFF,  TERM_ON, TERM_OFF, _______, _______, _______},
  {_______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______}
}


};
/*
  *  #ifdef AUDIO_ENABLE
  *   float plover_song[][2]     = SONG(PLOVER_SOUND);
  *   float plover_gb_song[][2]  = SONG(PLOVER_GOODBYE_SOUND);
  *  #endif
*/

uint32_t layer_state_set_user(uint32_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case AZERTY:
      if (record->event.pressed) {
        print("mode just switched to azerty and this is a huge string\n");
        set_single_persistent_default_layer(_AZERTY);
      }
      return false;
      break;

    case BEPO:
      if (record->event.pressed) {
        print("mode just switched to bepo and this is a huge string\n");
        set_single_persistent_default_layer(_BEPO);
      }
      return false;
      break;
  }
  return true;
}

bool music_mask_user(uint16_t keycode) {
  switch (keycode) {
    case RAISE:
    case LOWER:
      return false;
    default:
      return true;
  }
}
