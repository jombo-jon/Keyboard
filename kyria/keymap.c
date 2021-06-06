#include "jombojon.h"

#define LAYOUT_kyria( \
    L00, L01, L02, L03, L04, L05,                     R06, R07, R08, R09, R10, R11, \
    L12, L13, L14, L15, L16, L17,                     R18, R19, R20, R21, R22, R23, \
    L24, L25, L26, L27, L28, L29, L30, L31, R32, R33, R34, R35, R36, R37, R38, R39, \
                   L40, L41, L42, L43, L44, R45, R46, R47, R48, R49 \
) \
{ \
    { KC_NO, KC_NO, L05,   L04,   L03,   L02,   L01,   L00   }, \
    { KC_NO, KC_NO, L17,   L16,   L15,   L14,   L13,   L12   }, \
    { L31,   L30,   L29,   L28,   L27,   L26,   L25,   L24   }, \
    { L44,   L43,   L42,   L41,   L40,   KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, R06,   R07,   R08,   R09,   R10,   R11   }, \
    { KC_NO, KC_NO, R18,   R19,   R20,   R21,   R22,   R23   }, \
    { R32,   R33,   R34,   R35,   R36,   R37,   R38,   R39   }, \
    { R45,   R46,   R47,   R48,   R49,   KC_NO, KC_NO, KC_NO }, \
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_kyria_wrapper(
    _______, _________________QWERTY_L1_________________,                               _________________QWERTY_R1_________________,_______, 
    _______, _________________QWERTY_L2_________________,                               _________________QWERTY_R2_________________,_______, 
    _______, _________________QWERTY_L3_________________,_______, _______, _______, KC_CAPS,    _________________QWERTY_R3_________________,_______, 
                    KC_MPLY, KC_DEL,MO(_SYMBOLS), LT(_ACCENTS,CCCV), CCCV,_______,MO(_OPTIONS), MO(_GREEK) , LT(_NUMBERS,KC_SPC),KC_BSPC
  ),
    [_NUMBERS] = LAYOUT_kyria_wrapper( 
     _______,_________________NUMBER_L1_________________,                            _________________NUMBER_R1_________________, _______,
     _______,_________________NUMBER_L2_________________,                            _________________NUMBER_R2_________________, _______,
     _______,_________________NUMBER_L3_________________, _______, _______, _______,KC_CAPS, _________________NUMBER_R3_________________, _______,
                       _______, KC_DEL, LT(_NAV,KC_EQL), KC_EQL,   _______, _______, _______, KC_BSPC, KC_0, KC_EQL 
  ),
  [_SYMBOLS] = LAYOUT_kyria_wrapper(
     _______,_________________SYMBOL_L1_________________,                               _________________SYMBOL_R1_________________, _______,
     _______,_________________SYMBOL_L2_________________,                               _________________SYMBOL_R2_________________, _______,
     _______,_________________SYMBOL_L3_________________, _______, _______, _______, _______,   _________________SYMBOL_R3_________________, _______,
                       _______,_______ , _______, _______, _______, _______,_______,  MO(_NAV),  _______, _______
    ),
  [_NAV] = LAYOUT_kyria_wrapper( 
     _______,________________NAV_L1_____________________,                               ________________NAV_R1_____________________, _______,
     _______,________________NAV_L2_____________________,                               ________________NAV_R2_____________________, _______,
     _______,________________NAV_L3_____________________, _______, _______, _______, _______,   ________________NAV_R3_____________________, _______,
                    _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______
    ),
[_GREEK] = LAYOUT_kyria_wrapper(
     _______,________________GREEK_L1___________________,                               ________________GREEK_R1___________________, _______,
     _______,________________GREEK_L2___________________,                               ________________GREEK_R2___________________, _______,
     _______,________________GREEK_L3___________________, _______, _______, _______, _______,   ________________GREEK_R3___________________, _______,
                    _______, _______, _______, MO(_EMOJIS), _______, _______, _______, _______, _______, _______
    ),
[_ACCENTS] = LAYOUT_kyria_wrapper( 
    _______, _________________ACCENT_L1_________________,                               _________________ACCENT_R1_________________, _______,
    _______, _________________ACCENT_L2_________________,                               _________________ACCENT_R2_________________, _______,
    _______, _________________ACCENT_L3_________________, _______, _______, _______, _______,   _________________ACCENT_R3_________________, _______,
                    _______, _______, _______, _______, _______, _______, MO(_EMOJIS), _______, _______, _______
   ),
[_EMOJIS] = LAYOUT_kyria_wrapper( 
    _______, _________________EMOJI_L1_________________,                            _________________EMOJI_R1_________________, _______,
    _______, _________________EMOJI_L2_________________,                            _________________EMOJI_R2_________________, _______,
    _______, _________________EMOJI_L3_________________, _______, _______, _______, _______,    _________________EMOJI_R3_________________, _______,
                    _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______
   ),
[_OPTIONS] = LAYOUT( 
    UNIWL,   _______, _______, _______, _______, RESET,                                     _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                               _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
   )
};

/* layer_state_t layer_state_set_user(layer_state_t state) { */
/*     return update_tri_layer_state(state, _SYMBOLS, _NUMBERS, _NAV); */
/* } */

__attribute__ ((weak))
void matrix_init_keymap(void) {}
void matrix_init_user(void) {
    
// Kyria is more often on the Windows Computer
  set_unicode_input_mode(UC_WINC);
   
  matrix_init_keymap();
}

#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_180;
}


static void render_qmk_logo(void) {
  static const char PROGMEM qmk_logo[] = {
    0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
    0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
    0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0};

  oled_write_P(qmk_logo, false);
}

static void render_status(void) {
    // QMK Logo and version information
    render_qmk_logo();
    oled_write_P(PSTR("Kyria rev1.0\n\n"), false);

    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("Default\n"), false);
            break;
    case _ACCENTS:
        oled_write_P(PSTR("accents\n"), false);
        break;

        case _SYMBOLS:
            oled_write_P(PSTR("Symbols\n"), false);
            break;
        case _NUMBERS:
            oled_write_P(PSTR("Numbers\n"), false);
            break;
        case _NAV:
            oled_write_P(PSTR("Naviguation\n"), false);
            break;
        case _GREEK:
            oled_write_P(PSTR("Greek\n"), false);
            break;
        case _EMOJIS:
            oled_write_P(PSTR("Emojis ;)\n"), false);
            break;
        case _OPTIONS:
            oled_write_P(PSTR("Options\n"), false);
            break;
        default:
            oled_write_P(PSTR("Undefined\n"), false);
    }

    // Host Keyboard LED Status
    uint8_t led_usb_state = host_keyboard_leds();
    oled_write_P(IS_LED_ON(led_usb_state, USB_LED_NUM_LOCK) ? PSTR("numlck ") : PSTR("       "), false);
    oled_write_P(IS_LED_ON(led_usb_state, USB_LED_CAPS_LOCK) ? PSTR("caplck ") : PSTR("       "), false);
    oled_write_P(IS_LED_ON(led_usb_state, USB_LED_SCROLL_LOCK) ? PSTR("scrllck ") : PSTR("       "), false);
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        render_status(); // Renders the current keyboard state (layer, lock, caps, scroll, etc)
    } else {
                oled_set_cursor(0,6);
    }
}
#endif

#ifdef ENCODER_ENABLE
uint8_t selected_layer = 0;
void encoder_update_user(uint8_t index, bool clockwise) {
   if (index == 0) {
        // Volume control
        if (clockwise) {
            tap_code(KC_VOLU);
                        //tap_code(KC_VOLD);
        } 
        else {
            tap_code(KC_VOLD);
                        //tap_code(KC_VOLU);
        }
    }
   else if (index == 1) {
    if (!clockwise && selected_layer  < 2) {
        selected_layer ++;
    } else if (clockwise && selected_layer  > 0){
        selected_layer --;
    }
    layer_clear();
    layer_on(selected_layer);
    }
}
#endif
