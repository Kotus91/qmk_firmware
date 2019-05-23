/* Copyright 2015-2016 Jack Humbert
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
#ifndef KEYMAP_FRENCH_H
#define KEYMAP_FRENCH_H

#include "keymap.h"

// Alt gr
#ifndef ALGR
#define ALGR(kc) RALT(kc)
#endif
#define NO_ALGR KC_RALT

// AZERTY

	// 1 ligne

#define FR_SUP2	KC_GRV
#define FR_AMP	KC_1
#define FR_EACU	KC_2
#define FR_QUOT	KC_3
#define FR_APOS	KC_4
#define FR_LPRN	KC_5
#define FR_MINS	KC_6
#define FR_EGRV	KC_7
#define FR_UNDS	KC_8
#define FR_CCED	KC_9
#define FR_AGRV	KC_0
#define FR_RPRN	KC_MINS
#define FR_EQL	KC_EQL


	// 2 ligne

#define FR_A KC_A
#define FR_Z KC_S
#define FR_E KC_E
#define FR_R KC_R
#define FR_T KC_T
#define FR_Y KC_Y
#define FR_U KC_U
#define FR_I KC_I
#define FR_O KC_O
#define FR_P KC_P
#define	FR_CIRC	KC_LBRC
#define FR_DLR	KC_RBRC


	// 3 ligne

#define FR_Q KC_A
#define FR_S KC_S
#define FR_D KC_D
#define FR_F KC_F
#define FR_G KC_G
#define FR_H KC_H
#define FR_J KC_J
#define FR_K KC_K
#define FR_L KC_L
#define FR_M KC_SCLN
#define FR_UGRV	KC_QUOT
#define FR_ASTR	KC_NUHS

	// 4 ligne

#define FR_LESS	KC_NUBS
#define FR_W KC_Z
#define FR_X KC_X
#define FR_C KC_C
#define FR_V KC_V
#define FR_B KC_B
#define FR_N KC_N
#define FR_COMM	KC_M
#define FR_SCLN	KC_COMM
#define FR_COLN	KC_DOT
#define FR_EXLM	KC_SLSH


// Shifted characters
#define FR_1 	LSFT(KC_1)
#define FR_2 	LSFT(KC_2)
#define FR_3 	LSFT(KC_3)
#define FR_4 	LSFT(KC_4)
#define FR_5 	LSFT(KC_5)
#define FR_6 	LSFT(KC_6)
#define FR_7 	LSFT(KC_7)
#define FR_8 	LSFT(KC_8)
#define FR_9 	LSFT(KC_9)
#define FR_0 	LSFT(KC_0)
#define FR_OVRR	LSFT(FR_RPRN)
#define FR_PLUS LSFT(FR_EQL)
#define FR_MORE	LSFT(KC_NUBS)
#define FR_UMLT	LSFT(FR_CIRC)
#define FR_PND	LSFT(FR_DLR)
#define	FR_PERC	LSFT(FR_UGRV)
#define FR_MU 	LSFT(FR_ASTR)

#define FR_GRTR	LSFT(FR_LESS)
#define FR_QUES	LSFT(FR_COMM)
#define FR_DOT	LSFT(FR_SCLN)
#define FR_SLSH	LSFT(FR_COLN)
#define FR_SECT	LSFT(FR_EXLM)

// Alt Gr-ed characters
#define FR_TILD	ALGR(KC_2)
#define FR_HASH	ALGR(KC_3)
#define FR_LCBR ALGR(KC_4)
#define FR_LBRC	ALGR(KC_5)
#define FR_PIPE ALGR(KC_6)
#define FR_GRV 	ALGR(KC_7)
#define FR_BSLS	ALGR(KC_8)
#define FR_CCIRC	ALGR(KC_9)
#define FR_AT 	ALGR(KC_0)
#define FR_RBRC	ALGR(FR_RPRN)
#define FR_RCBR ALGR(FR_EQL)

#define FR_EURO	ALGR(KC_E)
#define FR_BULT	ALGR(FR_DLR)

#endif



/*
[_LOWER] = {
  {KC_ESC,  FR_AGRV, FR_EACU, FR_EGRV, _______, _______, _______, _______, _______, _______, _______, KC_0},
  {KC_TAB,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
  {KC_LSFT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
  {KC_LCTL, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
},