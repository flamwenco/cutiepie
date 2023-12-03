/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
	       KC_Q,    KC_W,    KC_E,         KC_R,         KC_T,          KC_Y,          KC_U,         KC_I,         KC_O,    KC_P,
	       KC_A,    KC_S,    LCTL_T(KC_D), LSFT_T(KC_F), KC_G,          KC_H,          LSFT_T(KC_J), LCTL_T(KC_K), KC_L,    KC_SCLN,
	       KC_Z,    KC_X,    KC_C,         KC_V,         KC_B,          KC_N,          KC_M,         KC_COMM,      KC_UP,   KC_SLSH,
	       KC_LCTL, KC_LALT, KC_LGUI,                    LT(1, KC_SPC), LT(1, KC_SPC),               KC_LEFT,      KC_DOWN, KC_RIGHT
	       ),

  [1] = LAYOUT(
	       KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
	       KC_TRNS, KC_TRNS, KC_TRNS, KC_F,    KC_G,    KC_TRNS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC,
	       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_QUOT, KC_BSLS, KC_TRNS, KC_GRV,
	       KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS
	       ),

    
  [2] = LAYOUT(
	       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	       KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS
	       ),

    
  [3] = LAYOUT(
	       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	       KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS
	       ),
};

enum combos {
  QW_ESC,
  WE_TAB,
  IO_DEL,
  OP_BSPC,
  F1_F1,
  F2_F2,
  F3_F3,
  F4_F4,
  F5_F5,
  F6_F6,
  F7_F7,
  F8_F8,
  F9_F9,
  G0_F10,
  G1_F11,
  G2_F12,
  JX_CUT,
  JC_COPY,
  JV_PASTE,
  COMBO_LENGTH
};

uint16_t COMBO_LEN = COMBO_LENGTH; // remove the COMBO_COUNT define and use this instead!


const uint16_t PROGMEM qw_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM we_combo[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM io_combo[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM op_combo[] = {KC_O, KC_P, COMBO_END};

const uint16_t PROGMEM f1_combo[] = {KC_F, KC_1, COMBO_END};
const uint16_t PROGMEM f2_combo[] = {KC_F, KC_2, COMBO_END};
const uint16_t PROGMEM f3_combo[] = {KC_F, KC_3, COMBO_END};
const uint16_t PROGMEM f4_combo[] = {KC_F, KC_4, COMBO_END};
const uint16_t PROGMEM f5_combo[] = {KC_F, KC_5, COMBO_END};
const uint16_t PROGMEM f6_combo[] = {KC_F, KC_6, COMBO_END};
const uint16_t PROGMEM f7_combo[] = {KC_F, KC_7, COMBO_END};
const uint16_t PROGMEM f8_combo[] = {KC_F, KC_8, COMBO_END};
const uint16_t PROGMEM f9_combo[] = {KC_F, KC_9, COMBO_END};
const uint16_t PROGMEM g0_combo[] = {KC_G, KC_0, COMBO_END};
const uint16_t PROGMEM g1_combo[] = {KC_G, KC_1, COMBO_END};
const uint16_t PROGMEM g2_combo[] = {KC_G, KC_2, COMBO_END};

const uint16_t PROGMEM jx_combo[] = {LSFT_T(KC_J), KC_X, COMBO_END};
const uint16_t PROGMEM jc_combo[] = {LSFT_T(KC_J), KC_C, COMBO_END};
const uint16_t PROGMEM jv_combo[] = {LSFT_T(KC_J), KC_V, COMBO_END};

combo_t key_combos[] = {
  [QW_ESC] = COMBO(qw_combo, KC_ESC),
  [WE_TAB] = COMBO(we_combo, KC_TAB),
  [IO_DEL] = COMBO(io_combo, KC_DEL),
  [OP_BSPC] = COMBO(op_combo, KC_BSPC),
  [F1_F1] = COMBO(f1_combo, KC_F1),
  [F2_F2] = COMBO(f2_combo, KC_F2),
  [F3_F3] = COMBO(f3_combo, KC_F3),
  [F4_F4] = COMBO(f4_combo, KC_F4),
  [F5_F5] = COMBO(f5_combo, KC_F5),
  [F6_F6] = COMBO(f6_combo, KC_F6),
  [F7_F7] = COMBO(f7_combo, KC_F7),
  [F8_F8] = COMBO(f8_combo, KC_F8),
  [F9_F9] = COMBO(f9_combo, KC_F9),
  [G0_F10] = COMBO(g0_combo, KC_F10),
  [G1_F11] = COMBO(g1_combo, KC_F11),
  [G2_F12] = COMBO(g2_combo, KC_F12),
  [JX_CUT] = COMBO(jx_combo, LGUI(KC_X)),
  [JC_COPY] = COMBO(jc_combo, LGUI(KC_C)),
  [JV_PASTE] = COMBO(jv_combo, LGUI(KC_V))
};
