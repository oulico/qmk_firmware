#include "custom_config.h"

// Function to handle the custom keycode action
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case DOUBLE_ESC:
            if (record->event.pressed) {
                // Handle double tap and hold action for Esc key
                // For example, send Command + Space
                if (timer_elapsed(record->tap.last) < TAPPING_TERM) {
                    // Double tap detected, send Command + Space
                    SEND_STRING(SS_LGUI(" ") SS_DELAY(50));
                } else {
                    // Hold action detected, do nothing or handle as needed
                }
            }
            break;
        // Add more custom keycode cases if needed
    }
    return true;
}

// Function to define the tapping term for the custom keycode
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case DOUBLE_ESC:
            return 150; // Adjust tapping term for double tap detection
        // Add more custom keycode cases if needed
        default:
            return TAPPING_TERM;
    }
}
