#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_TAB, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SEMICOLON,  KC_QUOTE,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMMA, KC_DOT, KC_SLASH, KC_ENTER,
        KC_CTL, KC_LGUI, KC_LALT, KC_SPC,  TG(1),   KC_BSPC, KC_RALT, MO(2), KC_LCTL
    ),
    [1] = LAYOUT(
        KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,  KC_F11,  KC_F12,
        KC_NO,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_ESC,
        KC_LSFT,  KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC,  KC_MINS,  KC_EQL,  KC_LBRC,  KC_RBRC,  KC_BSLS,
        KC_NO,  KC_ESC,  KC_ESC,  KC_COPY,  TG(0), KC_PASTE,  KC_ESC,  KC_ESC,  KC_ESC
    ),
    [2] = LAYOUT(
        KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,  KC_F11,  KC_F12,
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_UP,    KC_8,    KC_9,    KC_0,
        KC_LSFT,  KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC,  KC_LEFT,  KC_DOWN,  KC_RIGHT,  KC_ESC,  KC_ESC,
        KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC,  _______, KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC
    ),
};

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (clockwise) { 
    tap_code(KC_UP);
  } else { 
    tap_code(KC_DOWN);
  }
  return true;
}
