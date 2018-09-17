/* Copyright 2015-2017 Jack Humbert
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

#include "planck.h"
#include "action_layer.h"
#include "keymap_bepo.h"
#include "keymap_french.h"

extern keymap_config_t keymap_config;

enum planck_layers {
  _AZERTY,
  _QWERTY,
  _BEPO,
  _LOWER,
  _RAISE,
  _ADJUST
};

enum planck_keycodes {
  AZERTY = SAFE_RANGE,
  QWERTY,
  BEPO,
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
    {KC_ESC,  FR_A,    FR_Z,    FR_E,    FR_R,    FR_T,    FR_Y,    FR_U,    FR_I,    FR_O,    FR_P,    KC_BSPC},
    {KC_TAB,  FR_Q,    FR_S,    FR_D,    FR_F,    FR_G,    FR_H,    FR_J,    FR_K,    FR_L,    FR_M,    KC_ENT},
    {KC_LSFT, FR_W,    FR_X,    FR_C,    FR_V,    FR_B,    FR_N,    FR_COMM, FR_DOT,  FR_COLN, FR_EXLM, KC_DEL },
    {KC_LCTL, KC_APP,  KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT}
  },

/*
[_AZERTY] = {
    {KC_ESC,  KC_A,    KC_Z,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC},
    {KC_TAB,  S(KC_1),  S(KC_2),  S(KC_3),   S(KC_4),    S(KC_5),    S(KC_6),    S(KC_7),    S(KC_8),    S(KC_9),    S(KC_0),    KC_ENT},
    {KC_LSFT, KC_1, KC_2,   KC_3,   KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_DEL },
    {KC_LCTL, KC_APP,  KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT}
  },
  /*[_AZERTY] = {
      {KC_ESC,  KC_A,    KC_Z,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC},
      {KC_TAB,  KC_Q,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_M,    KC_ENT},
      {KC_LSFT, KC_W,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_COMM, KC_DOT,  KC_COLN, KC_EXLM, KC_DEL },
      {KC_LCTL, KC_APP,  KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT}
    },*/


/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Brite| Ctrl | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = {
  {KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC},
  {KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT},
  {KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT },
  {KC_LCTL, KC_APP,  KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT}
},

/* BEPO
 * ,-----------------------------------------------------------------------------------.
 * |   B  |   É  |   P  |   O  |   È  |   ^  |   V  |   D  |   L  |   J  |   Z  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   A  |   U  |   I  |   E  |   ,  |   C  |   T  |   S  |   R  |   N  |   M  |Enter |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Y  |   X  |   .  |   K  |   '  |   Q  |   G  |   H  |   F  |   W  |  Del |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | Menu | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_BEPO] = {
  {BP_B,    BP_E_ACUTE, BP_P,    BP_O,    BP_E_GRAVE , BP_DCRC , BP_V,    BP_D,  BP_L,    BP_J,  BP_Z,    KC_BSPC},
  {BP_A,    BP_U,       BP_I,    BP_E,    BP_COMMA,    BP_C,     BP_T,    BP_S,  BP_R,    BP_N,  BP_M,    KC_ENT},
  {KC_LSFT, BP_Y,       BP_X,    BP_DOT,  BP_K,        BP_APOS,  BP_Q,    BP_G,  BP_H,    BP_F,  BP_W,    KC_DEL },
  {KC_LCTL, KC_APP,     KC_LALT, KC_LGUI, LOWER,       KC_SPC,   KC_SPC,  RAISE, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT}
},

/* Lower
 * ,-----------------------------------------------------------------------------------.
* |  Esc  |   !  |   ?  |  :   |      |      |      |   7  |   8  |   9  |   +  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Tab  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   4  |   5  |   6  |   -  |Enter |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |   1  |   2  |  3   |   *  | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |      |      |      |      |             |      |   0  |   .  | ISO /|  =   |
 * `-----------------------------------------------------------------------------------'r
 */
[_LOWER] = {
  {KC_ESC,  BP_AGRV, BP_ECUT, BP_EGRV, _______, _______, _______, KC_7,    KC_8,  KC_9,   KC_PLUS, KC_BSPC},
  {KC_TAB,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_4,    KC_5,  KC_6,   KC_MINS, KC_ENT},
  {KC_LSFT, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_1,    KC_2,  KC_3,   KC_ASTR, KC_DEL},
  {KC_LCTL, _______, _______, _______, _______, _______, _______, _______, KC_0,  KC_DOT, KC_SLSH, KC_EQL}
},

/* Raise
 * ,----------------------------------------------------------------------------------.
 * |  Esc |  "   |   «  |   »  |   (  |   )  |  &   |   @  |  €   |ISO # |  %   | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |  Tab |  à   |  é   |  è   |   [  |   ]  |   <  |   >  | Home |PG Up |Pg Dn | End  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   œ  |   ù  |   ç  |   {  |   }  | ISO ||   _  |   \  |   ¨  |   ~  | Mute |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 _ \ ¨ ~
 */
[_RAISE] = {
  {KC_ESC,  BP_DQOT, BP_LGIL, BP_RGIL, BP_LPRN, BP_RPRN, BP_AMPR, KC_AT,   BP_EURO, KC_NUHS, BP_PERCENT, KC_BSPC},
  {KC_TAB,  BP_AGRV, BP_ECUT, BP_EGRV, KC_LBRC, KC_RBRC, BP_LESS, BP_GRTR, KC_HOME, KC_PGUP,    KC_PGDN, KC_END},
  {KC_LSFT, BP_OE,   BP_UGRV, BP_CCED, KC_LCBR, KC_RCBR, KC_PIPE, KC_UNDS, KC_BSLS, BP_DTRM, KC_TILD,    KC_PGDN},
  {KC_LCTL, _______, _______, _______, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU,    KC_MPLY}
},

/* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * |      | Reset|      |      |      |      |      |      |      |      |      |  Del |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |Aud on|Audoff|AGnorm|AGswap|Azerty|Qwerty|Bepo  |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |Voice-|Voice+|Mus on|Musoff|MIDIon|MIDIof|      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = {
  {_______, RESET,   DEBUG,   RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD,  RGB_VAI, RGB_VAD, KC_DEL },
  {_______, _______, MU_MOD,  AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, AZERTY,  QWERTY,   BEPO,    _______, _______},
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

    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;

    case BEPO:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_BEPO);
      }
      return false;
      break;
/*
    case BACKLIT:
      if (record->event.pressed) {
        register_code(KC_RSFT);
        #ifdef BACKLIGHT_ENABLE
          backlight_step();
        #endif
        PORTE &= ~(1<<6);
      } else {
        unregister_code(KC_RSFT);
        PORTE |= (1<<6);
      }
      return false;
      break;

    case PLOVER:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          stop_all_notes();
          PLAY_SONG(plover_song);
        #endif
        layer_off(_RAISE);
        layer_off(_LOWER);
        layer_off(_ADJUST);
        layer_on(_PLOVER);
        if (!eeconfig_is_enabled()) {
            eeconfig_init();
        }
        keymap_config.raw = eeconfig_read_keymap();
        keymap_config.nkro = 1;
        eeconfig_update_keymap(keymap_config.raw);
      }
      return false;
      break;

    case EXT_PLV:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(plover_gb_song);
        #endif
        layer_off(_PLOVER);
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
