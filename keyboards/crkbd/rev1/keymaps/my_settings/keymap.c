/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,------------------------------------------------------------.                    ,------------------------------------------------------.
              KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,   KC_MINS,
  //|---------------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+---------|
      LCTL_T(KC_ESC),    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_QUOT,
  //|---------------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+---------|
             KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, LT(4, KC_EQL),
  //|---------------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+---------|
                                 KC_LALT,  LT(2, KC_SPC),  LT(5, KC_F15),        LT(3, KC_F16),  LSFT_T(KC_ENT), XXXXXXX
                              //`-----------------------------------------'  `-------------------------------------------'

  ),

    [1] = LAYOUT_split_3x6_3( // Mac用のデフォルトキーレイアウト。基本はWindowsと同じで、装飾キー周りをいじる。
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, KC_LGUI, _______,   _______, KC_RGUI, _______
                                       //`-------------------------'  `-------------------------'
  ),

    [2] = LAYOUT_split_3x6_3( // 数値・記号がメインのレイヤー
  //,------------------.-----------------------------------                    ,-----------------------------------------------------.
       KC_GRV,  KC_BSLS,   KC_7,    KC_8,    KC_9, XXXXXXX,                      XXXXXXX, XXXXXXX, KC_LPRN, KC_RPRN,  KC_EQL,   KC_F2,
  //|--------+---------|-------+--------+--------+--------+                    |--------+--------+--------+--------+--------+--------|
      _______,   KC_EQL,   KC_4,    KC_5,    KC_6, XXXXXXX,                      XXXXXXX, XXXXXXX, KC_LBRC, KC_RBRC, KC_SCLN, XXXXXXX,
  //|--------+---------|-------+--------+--------+--------+                    |--------+--------+--------+--------+--------+--------|
      _______,     KC_0,   KC_1,    KC_2,    KC_3, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX,  KC_DOT, XXXXXXX, XXXXXXX,
  //|--------+---------+-------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3( // カーソルの移動系のレイヤー
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX,  KC_END, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, KC_BSPC,  KC_DEL, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_HOME, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         XXXXXXX, XXXXXXX,  XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

    [4] = LAYOUT_split_3x6_3( // DF = デフォルトレイヤー
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      DF(1), DF(2), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LGUI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, _______,  XXXXXXX,     XXXXXXX, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

    [5] = LAYOUT_split_3x6_3( // 親指でショートカットキーを使えるようにする。
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      LALT(KC_TAB), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, LCTL(KC_A), LCTL(KC_S), XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, XXXXXXX,  XXXXXXX,     XXXXXXX, LSFT_T(LALT(KC_ENT)), _______
                                      //`--------------------------'  `--------------------------'
  )

};
