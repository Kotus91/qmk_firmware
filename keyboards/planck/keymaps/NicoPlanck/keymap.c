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
#include "keymap_french.h"

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
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Azerty
* ,-----------------------------------------------------------------------------------.
* | Esc  |   A  |   Z  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
* |------+------+------+------+------+-------------+------+------+------+------+------|
* | Tab  |   Q  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   M  | Del  |
* |------+------+------+------+------+------|------+------+------+------+------+------|
* | Shift|   W  |   X  |   C  |   V  |   B  |   N  |   ,  |   .  |   :  |   !  | Enter|
* |------+------+------+------+------+------+------+------+------+------+------+------|
* | Ctrl | Menu | Alt  | GUI  |Lower |    Space    |Raise | Left |  Up  | Down | Right|
* `-----------------------------------------------------------------------------------'
*/
[_AZERTY] = {
  {KC_ESC,  FR_A,    FR_W,    FR_E,    FR_R,    FR_T,    FR_Y,    FR_U,    FR_I,    FR_O,    FR_P,    KC_BSPC},
  {KC_TAB,  FR_Q,    FR_S,    FR_D,    FR_F,    FR_G,    FR_H,    FR_J,    FR_K,    FR_L,    FR_M,    KC_DEL},
  {KC_LSFT, FR_W,    FR_X,    FR_C,    FR_V,    FR_B,    FR_N,    FR_COMM, FR_DOT,  FR_COLN, FR_EXLM, KC_ENT},
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

[_BEPO] = {
  {KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC},
  {KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT},
  {KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    S(KC_COMM), KC_DOT,  KC_SLSH, KC_DEL},
  {KC_LCTL, KC_APP,  KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT}
  },
*/

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |  F1  |  F2  |  F3  |  F4  |      |      |   7  |   8  |   9  |   +  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Tab  |  F5  |  F6  |  F7  |  F8  |      |      |   4  |   5  |   6  |   -  |   %  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|  F9  |  F10 |  F11 |  F12 |      |      |   1  |   2  |  3   |   *  | Ent  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |      |      |      |      |             |      |   0  |   .  | ISO /|  =   |
 * `-----------------------------------------------------------------------------------'r
 */

[_LOWER] = {
  {KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   _______, _______, FR_7,     FR_8,  FR_9,     KC_PPLS,  KC_BSPC},
  {KC_TAB,  KC_F5,   KC_F6,   KC_F7,   KC_F8,   _______, _______, FR_4,     FR_5,  FR_6,     KC_PMNS,  FR_PERC},
  {KC_LSFT, KC_F9,  KC_F10,   KC_F11, KC_F12,   _______, _______, FR_1,     FR_2,  FR_3,     KC_PAST,  KC_ENT},
  {KC_LCTL, _______, _______, _______, _______, _______, _______, _______,  FR_0,  FR_DOT,   FR_SLSH,  KC_EQL}
},


/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |  Esc |   à  |   é  |   è  |   '  |   (  |  )   |   "  |   -  |   _  |   @  |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |  Tab |   ù  |   €  |   ç  |  ^   |   [  |  ]   |   <  |   >  | Home | End  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   #  |   &  |      |   |  |   {  |  }   |      |   \  | PgUp | PgDn | Mute |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 *
 */

[_RAISE] = {
  {KC_ESC,  FR_AGRV, 	FR_EACU, 	FR_EGRV, 	FR_APOS,  FR_LPRN,   FR_RPRN,  FR_UMLT,   FR_MINS,  FR_UNDS, 	FR_AT, 	  _______},
  {KC_TAB,  FR_UGRV,  FR_EURO,  FR_CCED,  FR_CIRC,  FR_LBRC,   FR_RBRC,  FR_LESS,   FR_MORE,  KC_HOME,  KC_END,   _______},
  {KC_LSFT, FR_HASH,  FR_AMP, 	_______,  FR_PIPE,  FR_LCBR,   FR_RCBR,  _______, 	FR_BSLS, 	KC_PGUP,  KC_PGDN,  KC_MUTE},
  {KC_LCTL, _______, 	_______, 	_______, 	_______, 	_______, 	_______,   _______,   KC_MNXT,	KC_VOLD, 	KC_VOLU,  KC_MPLY}
},


/* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * |      | Reset|      |      |      |      |      |      |      |      |      |  Del |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |Aud on|Audoff|AGnorm|AGswap|Azerty|      |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |Voice-|Voice+|Mus on|Musoff|MIDIon|MIDIof|      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = {
  {_______, RESET,   DEBUG,   RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD,  RGB_VAI, RGB_VAD, KC_DEL },
  {_______, _______, MU_MOD,  AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, AZERTY,  _______, _______,    _______, _______},
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
/*
    case BEPO:
      if (record->event.pressed) {
        print("mode just switched to bepo and this is a huge string\n");
        set_single_persistent_default_layer(_BEPO);
      }
      return false;
      break;
  */
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
