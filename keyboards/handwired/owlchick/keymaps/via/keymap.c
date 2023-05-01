#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_owlchick_25keys(
		KC_1, KC_2, KC_3, KC_4, KC_5, 
		KC_6, KC_7, KC_8, KC_9, KC_0, 
		KC_Q, KC_W, KC_E, KC_R, KC_T, 
		KC_A, KC_S, KC_D, KC_F, KC_G, 
		KC_Z, KC_X, KC_C, KC_V, KC_B),
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code_delay(KC_VOLU, 10);
        } else {
            tap_code_delay(KC_VOLD, 10);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code_delay(KC_VOLU, 10);;
        } else {
            tap_code_delay(KC_VOLD, 10);
        }
    }
	else if (index == 2) { /* Second encoder */
        if (clockwise) {
            tap_code_delay(KC_VOLU, 10);;
        } else {
            tap_code_delay(KC_VOLD, 10);
        }
    }
	else if (index == 3) { /* Second encoder */
        if (clockwise) {
            tap_code_delay(KC_VOLU, 10);;
        } else {
            tap_code_delay(KC_VOLD, 10);
        }
    }
    return false;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

