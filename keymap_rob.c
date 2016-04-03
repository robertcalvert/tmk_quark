/*
Copyright 2015 Robert Calvert <robert.calvert.io>

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
#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = KEYMAP(
// Default
    ESC,  Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,    BSPC, \
    CAPS, A,    S,    D,    F,    G,    H,    J,    K,    L,          ENT, \
    LSFT, NUBS, Z,    X,    C,    V,    B,    N,    M,    COMM, DOT,  SLSH, \
    LCTL, LGUI, LALT, FN1,              SPC,        FN2,  FN3,  FN4,  FN5),
[1] = KEYMAP(
// Lower
    GRV,  1,    2,    3,    4,    5,    6,    7,    8,    9,    0,    DEL, \
    TAB,  NO,   NO,   NO,   NO,   NO,   NO,   NO,   MINS, EQL,        NO, \
    LSFT, NO,   NO,   NO,   NO,   NO,   NO,   NO,   LBRC, RBRC, PGUP, RSFT, \
    NO,   NO,   NO,   FN1,              NO,         RALT, HOME, PGDN, END),
[2] = KEYMAP(
// Upper
    FN25, FN11, FN12, FN13, FN14, FN15, FN16, FN17, FN18, FN19, FN20, DEL, \
    TAB,  NO,   NO,   NO,   NO,   NO,   NO,   NO,   FN21, FN22,        NO, \
    LSFT, NO,   NO,   NO,   NO,   NO,   NO,   NO,   FN23, FN24, NO,   RSFT, \
    PAUS, NO,   LALT, NO,               NO,         FN2,  NO,   NO,   NO),
[3] = KEYMAP(
// Arrows
    ESC,  NO,   UP,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   PSCR, DEL, \
    NO,   LEFT, DOWN, RGHT, NO,   NO,   NO,   NO,   NO,   NO,         NO, \
    NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO, \
    NO,   NO,   NO,   NO,               SPC,        NO,   FN3,  FN4,  NO),
[4] = KEYMAP(
// Function keys
    F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  F11,  F12, \
    NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,         NO, \
    LSFT, NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   NO,   RSFT, \
    NO,   NO,   NO,   NO,               NO,         NO,   NO,   NO,   FN5),
};

const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_MOMENTARY(1),
    [2] = ACTION_LAYER_MOMENTARY(2),
    [3] = ACTION_LAYER_TAP_KEY(3, KC_SCLN), 
    [4] = ACTION_LAYER_TAP_KEY(3, KC_QUOT),
    [5] = ACTION_LAYER_TAP_KEY(4, KC_NUHS),
    
    [11] = ACTION_MODS_KEY(MOD_LSFT, KC_1),
    [12] = ACTION_MODS_KEY(MOD_LSFT, KC_2),
    [13] = ACTION_MODS_KEY(MOD_LSFT, KC_3),
    [14] = ACTION_MODS_KEY(MOD_LSFT, KC_4),
    [15] = ACTION_MODS_KEY(MOD_LSFT, KC_5),
    [16] = ACTION_MODS_KEY(MOD_LSFT, KC_6),
    [17] = ACTION_MODS_KEY(MOD_LSFT, KC_7),
    [18] = ACTION_MODS_KEY(MOD_LSFT, KC_8),
    [19] = ACTION_MODS_KEY(MOD_LSFT, KC_9),
    [20] = ACTION_MODS_KEY(MOD_LSFT, KC_0),
    [21] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS),
    [22] = ACTION_MODS_KEY(MOD_LSFT, KC_EQL),
    [23] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),
    [24] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),
    [25] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),
};
