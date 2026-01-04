/*
Copyright 2023 @ Nuphy <https://nuphy.com/>

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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// layer Mac
[0] = LAYOUT_ansi_84(
    KC_ESC        , KC_F1           , KC_F2          , KC_F3          , KC_F4          , KC_F5          , KC_F6          , KC_F7          , KC_F8          , KC_F9          , KC_F10         , KC_F11           , KC_F12         , MAC_PRTA        , KC_INS           , KC_DEL           ,
    KC_GRV        , KC_1            , KC_2           , KC_3           , KC_4           , KC_5           , KC_6           , KC_7           , KC_8           , KC_9           , KC_0           , KC_MINS          , KC_EQL         , KC_BSPC                            , KC_PGUP          ,
    KC_TAB        , KC_Q            , KC_W           , KC_E           , KC_R           , KC_T           , KC_Y           , KC_U           , KC_I           , KC_O           , KC_P           , KC_LBRC          , KC_RBRC        , KC_BSLS                            , KC_PGDN          ,
    KC_CAPS       , KC_A            , KC_S           , KC_D           , KC_F           , KC_G           , KC_H           , KC_J           , KC_K           , KC_L           , KC_SCLN        , KC_QUOT          , KC_ENT                                              , KC_HOME          ,
    KC_LSFT       , KC_Z            , KC_X           , KC_C           , KC_V           , KC_B           , KC_N           , KC_M           , KC_COMM        , KC_DOT         , KC_SLSH        , KC_RSFT                                             , KC_UP            , KC_END           ,
    KC_LCTL       , KC_LALT         , KC_LGUI        , KC_SPC                                                                                                               , MO(5)          , MO(1)            , MO(4)          , KC_LEFT         , KC_DOWN          , KC_RGHT)         ,

//layerMacFn
[1]=LAYOUT_ansi_84(
    _______       , KC_BRID         , KC_BRIU        , MAC_TASK       , MAC_SEARCH     , MAC_VOICE      , MAC_DND        , KC_MPRV        , KC_MPLY        , KC_MNXT        , KC_MUTE        , KC_VOLD          , KC_VOLU        , MAC_PRT         , _______          , _______          ,
    _______       , LNK_BLE1        , LNK_BLE2       , LNK_BLE3       , LNK_RF         , _______        , _______        , _______         , _______       , _______        , _______        , _______          , _______        , _______                            , _______          ,
    _______       , _______         , _______        , _______        , _______        , RGB_TOG        , _______        , _______         , _______       , _______        , _______        , DEV_RESET        , _______        , _______                            , _______          ,
    _______       , _______         , SLEEP_MODE     , _______        , _______        , _______        , _______        , _______         , _______       , _______        , _______        , _______          , _______                                             , RGB_SAI          ,
    _______       , RGB_M_P         , RGB_MOD        , _______        , _______        , BAT_SHOW       , _______        , _______         , _______       , RGB_SPD        , RGB_SPI        , _______                                             , RGB_VAI          , RGB_SAD          ,
    _______       , _______         , _______        , _______                                                                                                              , _______        , _______          , _______        , RGB_HUD         , RGB_VAD          , RGB_HUI)         ,

//layerwin
[2]=LAYOUT_ansi_84(
    KC_ESC        , KC_F1           , KC_F2          , KC_F3          , KC_F4          , KC_F5          , KC_F6          , KC_F7          , KC_F8          , KC_F9          , KC_F10         , KC_F11           , KC_F12         , KC_PSCR         , KC_INS           , KC_DEL           ,
    KC_GRV        , KC_1            , KC_2           , KC_3           , KC_4           , KC_5           , KC_6           , KC_7           , KC_8           , KC_9           , KC_0           , KC_MINS          , KC_EQL         , KC_BSPC                            , KC_PGUP          ,
    KC_TAB        , KC_Q            , KC_W           , KC_E           , KC_R           , KC_T           , KC_Y           , KC_U           , KC_I           , KC_O           , KC_P           , KC_LBRC          , KC_RBRC        , KC_BSLS                            , KC_PGDN          ,
    KC_CAPS       , KC_A            , KC_S           , KC_D           , KC_F           , KC_G           , KC_H           , KC_J           , KC_K           , KC_L           , KC_SCLN        , KC_QUOT          , KC_ENT                                              , KC_HOME          ,
    KC_LSFT       , KC_Z            , KC_X           , KC_C           , KC_V           , KC_B           , KC_N           , KC_M           , KC_COMM        , KC_DOT         , KC_SLSH        , KC_RSFT                                             , KC_UP            , KC_END           ,
    KC_LCTL       , KC_LGUI         , KC_LALT        , KC_SPC                                                                                                               , MO(5)          , MO(3)            , MO(4)          , KC_LEFT         , KC_DOWN          , KC_RGHT)         ,

//layerwinFn
[3]=LAYOUT_ansi_84(
    _______       , KC_BRID         , KC_BRIU        , _______        , _______        , _______        , _______        , KC_MPRV        , KC_MPLY        , KC_MNXT        , KC_MUTE        , KC_VOLD          , KC_VOLU        , _______         , _______          , _______          ,
    _______       , LNK_BLE1        , LNK_BLE2       , LNK_BLE3       , LNK_RF         , _______        , _______        , _______         , _______       , _______        , _______        , _______          , _______        , _______                            , _______          ,
    _______       , _______         , _______        , _______        , _______        , RGB_TOG        , _______        , _______         , _______       , _______        , _______        , _______          , _______        , _______                            , _______          ,
    _______       , _______         , SLEEP_MODE     , _______        , _______        , _______        , _______        , _______         , _______       , _______        , _______        , _______          , _______                                             , RGB_SAI          ,
    _______       , RGB_M_P         , RGB_MOD        , _______        , _______        , BAT_SHOW       , _______        , _______         , _______       , RGB_SPD        , RGB_SPI        , _______                                             , RGB_VAI          , RGB_SAD          ,
    _______       , _______         , _______        , _______                                                                                                              , _______        , _______          , _______        , RGB_HUD         , RGB_VAD          , RGB_HUI)         ,

//layer4
[4]=LAYOUT_ansi_84(
    _______       , _______         , _______        , _______        , _______        , _______        , _______        , _______         , _______       , _______        , _______        , _______          , _______        , _______         , _______          , _______          ,
    _______       , _______         , _______        , _______        , _______        , _______        , _______        , _______         , _______       , _______        , _______        , _______          , _______        , _______                            , _______          ,
    _______       , _______         , _______        , _______        , _______        , _______        , _______        , _______         , _______       , _______        , _______        , _______          , _______        , _______                            , _______          ,
    _______       , _______         , _______        , _______        , _______        , _______        , _______        , _______         , _______       , _______        , _______        , _______          , _______                                             , _______          ,
    _______       , _______         , SIDE_MOD       , _______        , _______        , BAT_NUM        , _______        , _______         , _______       , SIDE_SPD       , SIDE_SPI       , _______                                             , SIDE_VAI         , _______          ,
    _______       , _______         , _______        , _______                                                                                                              , _______        , _______          , _______        , _______         , SIDE_VAD         , SIDE_HUI)        ,

//layer4
[5]=LAYOUT_ansi_84(
    _______       , _______         , _______        , _______        , _______        , _______        , _______        , _______         , _______       , _______        , _______        , _______          , _______        , _______         , _______          , _______          ,
    _______       , _______         , _______        , _______        , _______        , _______        , _______        , _______         , _______       , _______        , _______        , _______          , _______        , _______                            , _______          ,
    _______       , _______         , _______        , _______        , _______        , _______        , _______        , _______         , _______       , _______        , _______        , _______          , _______        , _______                            , _______          ,
    _______       , _______         , _______        , _______        , _______        , _______        , _______        , _______         , _______       , _______        , _______        , _______          , _______                                             , _______          ,
    _______       , _______         , _______        , _______        , _______        , _______        , _______        , _______         , _______       , _______        , _______        , _______                                             , _______          , _______          ,
    _______       , _______         , _______        , _______                                                                                                              , _______        , _______          , _______        , _______         , _______          , _______)

};
// Complementary color configuration
#define HUE_COMPLEMENTARY 128   // Hue shift for complementary colors (180 degrees in HSV = 128 units)

// LED index to matrix position mapping (row, col) - based on keyboard.json rgb_matrix layout
const uint8_t led_to_matrix[84][2] = {
    // Row 0: ESC, F1-F12, PrtScr, Insert, Delete
    {0,0},   {0,1},   {0,2},   {0,3},   {0,4},   {0,5},   {0,6},   {0,7},   {0,8},   {0,9},   {0,10},  {0,11},  {0,12},  {2,14},  {0,15},  {0,14},
    // Row 1: PgUp, Backsp, =, -, 0-1, Grave, Tab
    {1,16},  {1,13},  {1,12},  {1,11},  {1,10},  {1,9},   {1,8},   {1,7},   {1,6},   {1,5},   {1,4},   {1,3},   {1,2},   {1,1},   {1,0},
    // Row 2: Tab, Q-P, [, ], Backslash, PgDn
    {2,0},   {2,1},   {2,2},   {2,3},   {2,4},   {2,5},   {2,6},   {2,7},   {2,8},   {2,9},   {2,10},  {2,11},  {2,12},  {2,13},  {2,16},
    // Row 3: Home, Enter, ', ;, L-A, Caps
    {1,15},  {3,13},  {3,11},  {3,10},  {3,9},   {3,8},   {3,7},   {3,6},   {3,5},   {3,4},   {3,3},   {3,2},   {3,1},   {3,0},
    // Row 4: Shift, Z-M, Comma-Slash, RShift, Up, End
    {4,0},   {4,2},   {4,3},   {4,4},   {4,5},   {4,6},   {4,7},   {4,8},   {4,9},   {4,10},  {4,11},  {4,13},  {4,14},  {2,15},
    // Row 5: Ctrl, Win, Alt, Space, RAlt, Fn, RCtrl, Left, Down, Right
    {5,15},  {5,14},  {5,13},  {3,14},  {5,10},  {5,9},   {5,6},   {5,2},   {5,1},   {5,0}
};

// External variable from ansi.c to detect battery number display
extern bool f_bat_num_show;

// Custom RGB lighting for layers with warm temperature shift
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    // Don't override colors when battery display is active
    if (f_bat_num_show) {
        return false;
    }

    uint8_t layer = get_highest_layer(layer_state);

    // For base layers (0 = MAC, 2 = WIN), use normal RGB settings
    if (layer == 0 || layer == 2) {
        return false;
    }

    // For function layers (1, 3, 4), apply complementary color to mapped keys
    // Get current RGB matrix HSV settings
    HSV hsv = rgb_matrix_get_hsv();

    // Iterate through physical key LEDs only (0-83, excluding logo LED 84)
    for (uint8_t i = 0; i < 84; i++) {
        uint8_t row = led_to_matrix[i][0];
        uint8_t col = led_to_matrix[i][1];
        uint16_t keycode = keymap_key_to_keycode(layer, (keypos_t){col, row});

        // For transparent keys, don't modify (let normal RGB effect show)
        if (keycode == KC_TRNS || keycode == KC_NO) {
            continue;
        }

        // For mapped keys: apply complementary color (opposite on color wheel)
        HSV temp_hsv = hsv;
        temp_hsv.h = hsv.h + HUE_COMPLEMENTARY;

        // Convert HSV to RGB and set the LED color
        RGB rgb = hsv_to_rgb(temp_hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }

    return false;
}
