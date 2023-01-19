#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        XXXXXXX, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    XXXXXXX,
        XXXXXXX, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_GRV,  XXXXXXX,
        XXXXXXX, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, KC_SPC,  TG(1),   KC_BSPC, XXXXXXX, XXXXXXX, XXXXXXX
    ),
    [1] = LAYOUT(
        KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC,
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_ESC,
        KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC,
        KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC,  _______, KC_ESC,  KC_ESC,  KC_ESC,  KC_ESC
    )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (clockwise) { 
    tap_code(KC_UP);
  } else { 
    tap_code(KC_DOWN);
  }
  return true;
}