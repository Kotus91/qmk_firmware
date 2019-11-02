// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H
#include "action_layer.h"
#include "keymap_french.h"


enum atreus62_layers {
  _AZERTY,
  _LOWER,
  _RAISE,
  _ADJUST
};



// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _AZERTY
#define LOWER MO(LOWER)
#define RAISE MO(RAISE)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Azerty
* ,------------------------------------------             ------------------------------------------.
* | Esc  |   à  |   é  |   è  |   '  |   ^  |             |   ç  |   -  |   _  |   "  |   @  | Bksp |
* ,------------------------------------------             ------------------------------------------.
* | Tab  |   A  |   Z  |   E  |   R  |   T  |             |  Y   |   U  |   I  |   O  |   P  |  Del |
* |------+------+------+------+------+-------             -------+------+------+------+------+------|
* |      |   Q  |   S  |   D  |   F  |   G  |             |  H   |   J  |   K  |   L  |   M  |      |
* |Shift +------+------+------+------+-------             -------+------+------+------+------+ Enter|
* |      |   W  |   X  |   C  |   V  |   B  |             |  N   | , ?  |   .  |   :  |   !  |      |
* |------+------+------+------+------+------+--------------------+------+------+------+------+------|
* | Ctrl | Menu | Alt  | GUI  |Lower | Bksp | Del  | Enter| Spc  |Raise |  Up  | Left | Down | Right|
* `-------------------------------------------------------------------------------------------------'
*/
[_AZERTY] = LAYOUT (
  KC_ESC,  FR_AGRV,    FR_EACU,    FR_EGRV,    FR_APOS, FR_CIRC,              FR_CCED    FR_MINS,   FR_UNDS,  FR_QUOT, FR_AT,   KC_BSPC,
  KC_TAB,  FR_A,       FR_Z,       FR_E,       FR_R,    FR_T,                 FR_Y,      FR_U,      FR_I,     FR_O,    FR_P,    KC_DEL,
  KC_LSFT, FR_Q,       FR_S,       FR_D,       FR_F,    FR_G,                 FR_H,      FR_J,      FR_K,     FR_L,    FR_M,    KC_ENT,
  KC_NO,   FR_W,       FR_X,       FR_C,       FR_V,    FR_B,        KC_ENT   FR_N,      FR_COMM,   FR_DOT,   FR_COLN, FR_EXLM,        ,
  KC_LCTL, KC_APP,     KC_LALT,    KC_LGUI,    LOWER,   KC_BSPC,     KC_DEL,  KC_SPC,    RAISE,     KC_LEFT,  KC_UP,   KC_DOWN, KC_RGHT
  ),


/* Lower
* ,------------------------------------------             ------------------------------------------.
* | Reset|      |      |      |      |   (  |             |   )  |      |      |   ^  |   /  | Bksp |
* ,------------------------------------------             ------------------------------------------.
* |      |      |      |      |      |   [  |             |   ]  |   7  |   8  |   9  |   *  |   =  |
* |------+------+------+------+------+-------             -------+------+------+------+------+------|
* |      |      | Mute | Vol- | Vol+ |   {  |             |   }  |   4  |   5  |   6  |   +  |      |
* |Shift +------+------+------+------+-------             -------+------+------+------+------+ Enter|
* |      |      |      |      |      |      |             |      |   1  |   2  |   3  |   -  |      |
* |------+------+------+------+------+------+--------------------+------+------+------+------+------|
* | Ctrl | Menu | Alt  | GUI  |Lower | Bksp | Del  | Enter| Spc  | Raise|   0  |  .   |      |      |
* `-------------------------------------------------------------------------------------------------'
*/
[_LOWER] = LAYOUT (
  RESET,   KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_LPRN,           KC_RPRN,   KC_NO,   KC_NO,  FR_QUOT, KC_SLSH,   KC_BSPC,
  KC_NO,   KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_LBRC,           KC_RBRC,   KC_7,    KC_8,   KC_9,    KC_ASTR,   KC_EQL ,
  KC_LSFT, KC_NO,  MU_OFF,   MUV_DE,   MUV_IN,   KC_LCBR,           KC_LCBR,   KC_4,    KC_5,   KC_6,    KC_PLUS,   KC_ENT ,
  KC_NO,   KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_ENT   KC_NO,     KC_1,    KC_2,   KC_3,    KC_MINS,          ,
  KC_LCTL, KC_APP, KC_LALT,  KC_LGUI,  LOWER,    KC_BSPC,  KC_DEL,  KC_SPC,    RAISE,   KC_0,   KC_DOT,  KC_NO,     KC_NO
  ),



/* Raise
* ,------------------------------------------             ------------------------------------------.
* |      |      |      |      |      |      |             | Home |      |      |      |      |      |
* ,------------------------------------------             ------------------------------------------.
* |      |      |   ¨  |   €  |   oe |   #  |             | PgUp |  F9  |  F10 |  F11 |  F12 |      |
* |------+------+------+------+------+-------             -------+------+------+------+------+------|
* |      |   <  |      |   $  |   ù  |   \  |             | PgDn |  F5  |  F6  |  F7  |  F8  |      |
* |Shift +------+------+------+------+-------             -------+------+------+------+------+ Enter|
* |      |   >  |      |      |   µ  |   |  |             |  End |  F1  |  F2  |  F3  |  F4  |      |
* |------+------+------+------+------+------+--------------------+------+------+------+------+------|
* | Ctrl | Menu | Alt  | GUI  |Lower | Bksp | Del  | Enter| Spc  |Raise |  Up  | Left | Down | Right|
* `-------------------------------------------------------------------------------------------------'
*/
[_RAISE] = LAYOUT (
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,             KC_HOME,   KC_NO,   KC_NO,   KC_NO,  KC_NO,   KC_NO,
  KC_NO,    KC_NO,    KC_NO,    FR_EURO,  KC_NO,    KC_NUHS,           KC_PGUP,   KC_F9,   KC_F10,  KC_F11, KC_F12,  KC_NO,
  KC_LSFT,  KC_LABK,  MU_OFF,   MUV_DE,   MUV_IN,   KC_LCBR,           KC_PGDOWN, KC_F5,   KC_F6,   KC_F7,  KC_F8,   KC_ENT,
  KC_NO,    KC_RABK,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_ENT   KC_END,    KC_F1,   KC_F2,   KC_F3,  KC_F4,          ,
  KC_LCTL,  KC_APP,   KC_LALT,  KC_LGUI,  LOWER,    KC_BSPC,  KC_DEL,  KC_SPC,    RAISE,   KC_LEFT, KC_UP,  KC_DOWN, KC_RGHT 

  KC_NO
  ),


/*
        KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS ,
        KC_BSLS,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_RBRC ,
        KC_TAB,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT ,
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_LBRC ,
        KC_LCTL,  KC_LGUI, KC_LALT, KC_GRV,  MO(_NAV),KC_BSPC, KC_DELT,  KC_ENT,   KC_SPC,  KC_EQL,  KC_MINS, KC_QUOT, KC_ENT,  KC_RGUI
      ),

      [_NAV] = LAYOUT(
        TO(_DEFAULT),  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11  ,
        KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_F12,  KC_TRNS, KC_UP,   KC_TRNS, KC_TRNS, KC_TRNS ,
        KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS ,
        TO(_RESET),    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ,
        KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
      ),

      [_RESET] = LAYOUT(
        TO(_DEFAULT),  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                     KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO   ,
        KC_NO  ,       KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                     KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO   ,
        KC_NO  ,       KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                     KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO   ,
        KC_NO  ,       KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                     KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO   ,
        KC_NO  ,       KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,  KC_NO  ,  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , RESET
      )

      /*
      [_TRNS] = LAYOUT(
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ,
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ,
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ,
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ,
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
      ),
      };
*/


const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  // MACRODOWN only works in this function
  switch (id) {
  case 0:
    if (record->event.pressed) {
      register_code(KC_RSFT);
    }
    else {
      unregister_code(KC_RSFT);
    }
    break;
  }
  return MACRO_NONE;
};