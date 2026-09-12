/* Copyright 2021 ~ 2025 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "keychron_common.h"

enum layers {
    MAC_BASE,
    MAC_FN,
    WIN_BASE,
    WIN_FN,
};

#define FN_MAC MO(MAC_FN)
#define FN_WIN MO(WIN_FN)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_tkl_iso(
        KC_ESC,   KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  UG_VALD,  UG_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,             KC_SNAP,  KC_SIRI,  UG_NEXT,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,   KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,             KC_DEL,   KC_END,   KC_PGDN,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS,  KC_ENT,
        KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,             KC_UP,
        KC_LCTL,  KC_LOPTN, KC_LCMMD,                               KC_SPC,                                 KC_RCMMD, KC_ROPTN, FN_MAC,   KC_RCTL,   KC_LEFT,  KC_DOWN,  KC_RGHT),

    [MAC_FN] = LAYOUT_tkl_iso(
        _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,              _______,  _______,  UG_TOGG,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,
        UG_TOGG,  UG_NEXT,  UG_VALU,  UG_HUEU,  UG_SATU,  UG_SPDU,  _______,  _______,  _______,  _______,  _______,  _______,  _______,             _______,  _______,  _______,
        _______,  UG_PREV,  UG_VALD,  UG_HUED,  UG_SATD,  UG_SPDD,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  BAT_LVL,  _______,  _______,  _______,  _______,  _______,            _______,             _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,   _______,  _______,  _______),

    [WIN_BASE] = LAYOUT_tkl_iso(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,              KC_PSCR,  KC_CTANA, UG_NEXT,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,   KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,             KC_DEL,   KC_END,   KC_PGDN,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS,  KC_ENT,
        KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,             KC_UP,
        KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT,  KC_RGUI,  FN_WIN,   KC_RCTL,   KC_LEFT,  KC_DOWN,  KC_RGHT),

    [WIN_FN] = LAYOUT_tkl_iso(
        _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  UG_VALD,  UG_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,             _______,  _______,  UG_TOGG,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,
        UG_TOGG,  UG_NEXT,  UG_VALU,  UG_HUEU,  UG_SATU,  UG_SPDU,  _______,  _______,  _______,  _______,  _______,  _______,  _______,             _______,  _______,  _______,
        _______,  UG_PREV,  UG_VALD,  UG_HUED,  UG_SATD,  UG_SPDD,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  BAT_LVL,  _______,  _______,  _______,  _______,  _______,            _______,             _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,   _______,  _______,  _______)
};

// Layout UK: KC_QUOT = tasto "'" (grave), KC_NUHS = tasto "#" (acuto),
// KC_LBRC = tasto "[" (circonflesso), KC_RBRC = tasto "]" (dieresi).
typedef enum {
    ACCENT_GRAVE,
    ACCENT_ACUTE,
    ACCENT_CIRCUMFLEX,
    ACCENT_DIAERESIS,
} accent_type_t;

// Maiuscolo se: Shift tenuto premuto XOR Caps Lock attivo (come per le lettere normali).
static bool accent_shift_active(void) {
    bool shift = (get_mods() & MOD_MASK_SHIFT) != 0;
    bool caps  = host_keyboard_led_state().caps_lock;
    return shift != caps;
}

static const char *accented_vowel(uint16_t vowel, accent_type_t accent, bool uppercase) {
    switch (vowel) {
        case KC_A:
            switch (accent) {
                case ACCENT_ACUTE:      return uppercase ? "Á" : "á";
                case ACCENT_CIRCUMFLEX: return uppercase ? "Â" : "â";
                case ACCENT_DIAERESIS:  return uppercase ? "Ä" : "ä";
                default:                return uppercase ? "À" : "à";
            }
        case KC_E:
            switch (accent) {
                case ACCENT_ACUTE:      return uppercase ? "É" : "é";
                case ACCENT_CIRCUMFLEX: return uppercase ? "Ê" : "ê";
                case ACCENT_DIAERESIS:  return uppercase ? "Ë" : "ë";
                default:                return uppercase ? "È" : "è";
            }
        case KC_I:
            switch (accent) {
                case ACCENT_ACUTE:      return uppercase ? "Í" : "í";
                case ACCENT_CIRCUMFLEX: return uppercase ? "Î" : "î";
                case ACCENT_DIAERESIS:  return uppercase ? "Ï" : "ï";
                default:                return uppercase ? "Ì" : "ì";
            }
        case KC_O:
            switch (accent) {
                case ACCENT_ACUTE:      return uppercase ? "Ó" : "ó";
                case ACCENT_CIRCUMFLEX: return uppercase ? "Ô" : "ô";
                case ACCENT_DIAERESIS:  return uppercase ? "Ö" : "ö";
                default:                return uppercase ? "Ò" : "ò";
            }
        case KC_U:
            switch (accent) {
                case ACCENT_ACUTE:      return uppercase ? "Ú" : "ú";
                case ACCENT_CIRCUMFLEX: return uppercase ? "Û" : "û";
                case ACCENT_DIAERESIS:  return uppercase ? "Ü" : "ü";
                default:                return uppercase ? "Ù" : "ù";
            }
        default:
            return NULL;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case BT_HST1:
            case BT_HST2:
                set_unicode_input_mode(UNICODE_MODE_LINUX);
                break;

            case BT_HST3:
                set_unicode_input_mode(UNICODE_MODE_WINCOMPOSE);
                break;

            case KC_O:
                if (get_mods() & MOD_BIT_RALT) {
                    send_unicode_string(accent_shift_active() ? "Œ" : "œ");
                    return false;
                }
                break;

            case KC_A:
                if (get_mods() & MOD_BIT_RALT) {
                    send_unicode_string(accent_shift_active() ? "Æ" : "æ");
                    return false;
                }
                break;
        }
    }

    return true;
}

// --- Combo: vocale + tasto accento, premuti insieme -----------------------
enum combo_events {
    CB_A_GRAVE, CB_A_ACUTE, CB_A_CIRC, CB_A_DIAER,
    CB_E_GRAVE, CB_E_ACUTE, CB_E_CIRC, CB_E_DIAER,
    CB_I_GRAVE, CB_I_ACUTE, CB_I_CIRC, CB_I_DIAER,
    CB_O_GRAVE, CB_O_ACUTE, CB_O_CIRC, CB_O_DIAER,
    CB_U_GRAVE, CB_U_ACUTE, CB_U_CIRC, CB_U_DIAER,
    CB_CEDILLA,
    CB_GUILLEMET,
};

// clang-format off
const uint16_t PROGMEM combo_a_grave[] = {KC_A, KC_QUOT, COMBO_END};
const uint16_t PROGMEM combo_a_acute[] = {KC_A, KC_NUHS, COMBO_END};
const uint16_t PROGMEM combo_a_circ[]  = {KC_A, KC_LBRC, COMBO_END};
const uint16_t PROGMEM combo_a_diaer[] = {KC_A, KC_RBRC, COMBO_END};

const uint16_t PROGMEM combo_e_grave[] = {KC_E, KC_QUOT, COMBO_END};
const uint16_t PROGMEM combo_e_acute[] = {KC_E, KC_NUHS, COMBO_END};
const uint16_t PROGMEM combo_e_circ[]  = {KC_E, KC_LBRC, COMBO_END};
const uint16_t PROGMEM combo_e_diaer[] = {KC_E, KC_RBRC, COMBO_END};

const uint16_t PROGMEM combo_i_grave[] = {KC_I, KC_QUOT, COMBO_END};
const uint16_t PROGMEM combo_i_acute[] = {KC_I, KC_NUHS, COMBO_END};
const uint16_t PROGMEM combo_i_circ[]  = {KC_I, KC_LBRC, COMBO_END};
const uint16_t PROGMEM combo_i_diaer[] = {KC_I, KC_RBRC, COMBO_END};

const uint16_t PROGMEM combo_o_grave[] = {KC_O, KC_QUOT, COMBO_END};
const uint16_t PROGMEM combo_o_acute[] = {KC_O, KC_NUHS, COMBO_END};
const uint16_t PROGMEM combo_o_circ[]  = {KC_O, KC_LBRC, COMBO_END};
const uint16_t PROGMEM combo_o_diaer[] = {KC_O, KC_RBRC, COMBO_END};

const uint16_t PROGMEM combo_u_grave[] = {KC_U, KC_QUOT, COMBO_END};
const uint16_t PROGMEM combo_u_acute[] = {KC_U, KC_NUHS, COMBO_END};
const uint16_t PROGMEM combo_u_circ[]  = {KC_U, KC_LBRC, COMBO_END};
const uint16_t PROGMEM combo_u_diaer[] = {KC_U, KC_RBRC, COMBO_END};

const uint16_t PROGMEM combo_cedilla[]   = {KC_C, KC_COMM, COMBO_END};
const uint16_t PROGMEM combo_guillemet[] = {KC_COMM, KC_DOT, COMBO_END};

combo_t key_combos[] = {
    [CB_A_GRAVE] = COMBO_ACTION(combo_a_grave),
    [CB_A_ACUTE] = COMBO_ACTION(combo_a_acute),
    [CB_A_CIRC]  = COMBO_ACTION(combo_a_circ),
    [CB_A_DIAER] = COMBO_ACTION(combo_a_diaer),

    [CB_E_GRAVE] = COMBO_ACTION(combo_e_grave),
    [CB_E_ACUTE] = COMBO_ACTION(combo_e_acute),
    [CB_E_CIRC]  = COMBO_ACTION(combo_e_circ),
    [CB_E_DIAER] = COMBO_ACTION(combo_e_diaer),

    [CB_I_GRAVE] = COMBO_ACTION(combo_i_grave),
    [CB_I_ACUTE] = COMBO_ACTION(combo_i_acute),
    [CB_I_CIRC]  = COMBO_ACTION(combo_i_circ),
    [CB_I_DIAER] = COMBO_ACTION(combo_i_diaer),

    [CB_O_GRAVE] = COMBO_ACTION(combo_o_grave),
    [CB_O_ACUTE] = COMBO_ACTION(combo_o_acute),
    [CB_O_CIRC]  = COMBO_ACTION(combo_o_circ),
    [CB_O_DIAER] = COMBO_ACTION(combo_o_diaer),

    [CB_U_GRAVE] = COMBO_ACTION(combo_u_grave),
    [CB_U_ACUTE] = COMBO_ACTION(combo_u_acute),
    [CB_U_CIRC]  = COMBO_ACTION(combo_u_circ),
    [CB_U_DIAER] = COMBO_ACTION(combo_u_diaer),

    [CB_CEDILLA]   = COMBO_ACTION(combo_cedilla),
    [CB_GUILLEMET] = COMBO_ACTION(combo_guillemet),
};
// clang-format on

void process_combo_event(uint16_t combo_index, bool pressed) {
    if (!pressed) return;

    static const struct {
        uint16_t      vowel;
        accent_type_t accent;
    } vowel_combo[] = {
        [CB_A_GRAVE] = {KC_A, ACCENT_GRAVE}, [CB_A_ACUTE] = {KC_A, ACCENT_ACUTE}, [CB_A_CIRC] = {KC_A, ACCENT_CIRCUMFLEX}, [CB_A_DIAER] = {KC_A, ACCENT_DIAERESIS},
        [CB_E_GRAVE] = {KC_E, ACCENT_GRAVE}, [CB_E_ACUTE] = {KC_E, ACCENT_ACUTE}, [CB_E_CIRC] = {KC_E, ACCENT_CIRCUMFLEX}, [CB_E_DIAER] = {KC_E, ACCENT_DIAERESIS},
        [CB_I_GRAVE] = {KC_I, ACCENT_GRAVE}, [CB_I_ACUTE] = {KC_I, ACCENT_ACUTE}, [CB_I_CIRC] = {KC_I, ACCENT_CIRCUMFLEX}, [CB_I_DIAER] = {KC_I, ACCENT_DIAERESIS},
        [CB_O_GRAVE] = {KC_O, ACCENT_GRAVE}, [CB_O_ACUTE] = {KC_O, ACCENT_ACUTE}, [CB_O_CIRC] = {KC_O, ACCENT_CIRCUMFLEX}, [CB_O_DIAER] = {KC_O, ACCENT_DIAERESIS},
        [CB_U_GRAVE] = {KC_U, ACCENT_GRAVE}, [CB_U_ACUTE] = {KC_U, ACCENT_ACUTE}, [CB_U_CIRC] = {KC_U, ACCENT_CIRCUMFLEX}, [CB_U_DIAER] = {KC_U, ACCENT_DIAERESIS},
    };

    switch (combo_index) {
        case CB_CEDILLA:
            send_unicode_string(accent_shift_active() ? "Ç" : "ç");
            break;

        case CB_GUILLEMET:
            send_unicode_string("«»");
            tap_code(KC_LEFT);
            break;

        default: {
            const char *ch = accented_vowel(vowel_combo[combo_index].vowel, vowel_combo[combo_index].accent, accent_shift_active());
            if (ch) send_unicode_string(ch);
            break;
        }
    }
}
