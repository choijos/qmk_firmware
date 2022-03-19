/* Copyright 2020 Jay Greco
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
#include QMK_KEYBOARD_H
// #include "bitc_led.h"
#include "big_led.h"

// Use Bit-C LED to show CAPS LOCK status
bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if (res) {
        // set_bitc_LED(led_state.caps_lock ? LED_DIM : LED_OFF);
        if (!led_state.caps_lock) {
            set_big_LED_rgb(LED_OFF, LED_OFF, LED_OFF);

        } else {
            set_big_LED_rgb(LED_ON, LED_ON, LED_ON);

        }

    }
    return res;
}
