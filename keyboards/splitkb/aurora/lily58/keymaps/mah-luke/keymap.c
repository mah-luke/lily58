#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#include "keymap.h"
#endif

enum layer_name {
    _BASE
};

#define KC_AE RALT(KC_Q)
#define KC_SS RALT(KC_S)
#define KC_UE RALT(KC_Y)
#define KC_OE RALT(KC_P)
#define KC_EUR RALT(KC_5)



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
    [0] = LAYOUT(
            KC_BSLS, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS,
            KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                   KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC,
            QK_GESC, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                   KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
            KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_MUTE, KC_LCTL, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
                                       KC_BSPC, KC_LGUI, MO(1)  , KC_SPC , KC_ENT , MO(2)  , KC_LCTL , KC_LALT
            ),

    [1] = LAYOUT(
            KC_F11 , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                   KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F12 ,
            _______, _______, _______, _______, _______, _______,                   _______, _______, KC_EQL , KC_LBRC, KC_RBRC, KC_PIPE,
            KC_BSLS, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
            KC_LSFT, _______, _______, _______, _______, _______, MS_BTN1, MS_BTN2, KC_LT  , KC_GT  , KC_PLUS, KC_LCBR, KC_RCBR, KC_RSFT,
                                       KC_BSPC, KC_LGUI, _______, _______, MO(4)  , MO(3)  , KC_LCTL, KC_LALT
            ),

    [2] = LAYOUT(
            _______, _______, _______, KC_EUR , _______, _______,                   _______, _______, _______, _______, _______, _______,
            _______, KC_AE  , _______, KC_UP  , _______, _______,                   KC_UE  , _______, _______, _______, KC_OE  , _______,
            _______, KC_SS  , KC_LEFT, KC_DOWN, KC_RGHT, _______,                   KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______, _______,
            _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                                       KC_DEL , KC_LGUI, MO(3)  , MO(5)  , _______, _______, KC_LCTL, KC_LALT
            ),

    [3] = LAYOUT(
            _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
            _______, _______, KC_7   , KC_8   , KC_9   , _______,                   _______, _______, _______, _______, _______, _______,
            _______, KC_0   , KC_4   , KC_5   , KC_6   , _______,                   _______, _______, RM_TOGG, RM_HUEU, RM_SATU, RM_VALU,
            _______, _______, KC_1   , KC_2   , KC_3   , _______, _______, _______, _______, _______, RM_NEXT, RM_HUED, RM_SATD, RM_VALD,
                                       _______, _______, _______, _______, _______, _______, _______, _______
            ),

    [4] = LAYOUT(
            _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                                       _______, _______, _______, _______, _______, _______, _______, _______
            ),

    [5] = LAYOUT(
            _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                                       _______, _______, _______, _______, _______, _______, _______, _______
            )

    // clang-format on
};

#ifdef OTHER_KEYMAP_C
#include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = {ENCODER_CCW_CW(KC_1, KC_2), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] = {ENCODER_CCW_CW(UG_HUED, UG_HUEU), ENCODER_CCW_CW(UG_SATD, UG_SATU)},
    [2] = {ENCODER_CCW_CW(UG_VALD, UG_VALU), ENCODER_CCW_CW(UG_SPDD, UG_SPDU)},
    [3] = {ENCODER_CCW_CW(KC_1, KC_2), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [4] = {ENCODER_CCW_CW(KC_1, KC_2), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [5] = {ENCODER_CCW_CW(KC_1, KC_2), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
};
#endif
