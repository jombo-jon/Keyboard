#include "combos.h"
#include "action_tapping.h" // necessary for action_tapping_process

uint8_t mod_state;

enum combo_events {
    JK,
    JL,
    FJ,
    KL,
    NM,
    MCOMMA,
    COMMADOT,
    FD,
    DS,
    CV,
    XC,
    DOTSLSH,
    COMBO_LENGTH
};

uint16_t COMBO_LEN = COMBO_LENGTH;

//new combo
//Back in Browser folder
const uint16_t PROGMEM J_K_COMBO[] = {HOME_J, HOME_K, COMBO_END};
const uint16_t PROGMEM J_L_COMBO[] = {HOME_J, HOME_L, COMBO_END};
const uint16_t PROGMEM F_J_COMBO[] = {HOME_F, HOME_J, COMBO_END};
const uint16_t PROGMEM K_L_COMBO[] = {HOME_K, HOME_L, COMBO_END};
const uint16_t PROGMEM N_M_COMBO[] = {KC_N, KC_M, COMBO_END};
const uint16_t PROGMEM M_COMMA_COMBO[] = {KC_M, KC_COMMA, COMBO_END};
const uint16_t PROGMEM COMMA_DOT_COMBO[] = {KC_COMMA, KC_DOT, COMBO_END};
const uint16_t PROGMEM F_D_COMBO[] = {HOME_F, HOME_D, COMBO_END};
const uint16_t PROGMEM D_S_COMBO[] = {HOME_D, HOME_S, COMBO_END};
const uint16_t PROGMEM C_V_COMBO[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM X_C_COMBO[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM DOT_SLASH_COMBO[] = {KC_DOT, KC_SLASH, COMBO_END};



combo_t key_combos[] = {
    [JK] = COMBO_ACTION(J_K_COMBO),
    [JL] = COMBO_ACTION(J_L_COMBO),
    [FJ] = COMBO_ACTION(F_J_COMBO),
    [KL] = COMBO_ACTION(K_L_COMBO),
    [NM] = COMBO_ACTION(N_M_COMBO),
    [MCOMMA] = COMBO_ACTION(M_COMMA_COMBO),
    [COMMADOT] = COMBO_ACTION(COMMA_DOT_COMBO),
    [FD] = COMBO_ACTION(F_D_COMBO),
    [DS] = COMBO_ACTION(D_S_COMBO),
    [CV] = COMBO_ACTION(C_V_COMBO),
    [XC] = COMBO_ACTION(X_C_COMBO),
    [DOTSLSH] = COMBO_ACTION(DOT_SLASH_COMBO),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
    // Process mod-taps before the combo is fired,
    // this helps making modifier-aware combos, 
    // like UY_PRN or F21N_NOT, more fluid
    // when I use them with home row mods.
    action_tapping_process((keyrecord_t){});
    mod_state = get_mods();

    switch(combo_index) {
        case FJ:
            if (pressed) {
                tap_code16(KC_CAPS);
            }
        break;
        case JK:
            if (pressed) {
                tap_code16(KC_BSPC);
            }
        break;
        case JL:
            if (pressed) {
                tap_code16(KC_DEL);
            }
        break;
        case KL:
            if (pressed) {
                tap_code16(KC_ENT);
            }
        break;
        case NM:
            if (pressed) {
                tap_code16(KC_GRAVE);
            }
        break;
        case MCOMMA:
            if (pressed) {
                tap_code16(KC_QUOT);
            }
        break;

        case COMMADOT:
            if (pressed) {
                tap_code16(KC_MINS);
            }
        break;

        case FD:
            if (pressed) {
                tap_code16(KC_TAB);
            }
        break;

        case DS:
            if (pressed) {
                tap_code16(KC_ESC);
            }
        break;

        case CV:
            if (pressed) {
                tap_code16(KC_AMPR);
            }
        break;
        case XC:
            if (pressed) {
                tap_code16(KC_TILD);
            }
        break;
        case DOTSLSH:
            if (pressed) {
                tap_code16(KC_BSLS);
            }
        break;

    }
};
