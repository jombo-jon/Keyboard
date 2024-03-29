#pragma once
#include "jombojon.h"


// clang-format off
#define LAYOUT_atreus_wrapper(...) LAYOUT_atreus(__VA_ARGS__)
#define LAYOUT_atreus44_wrapper(...) LAYOUT(__VA_ARGS__)
#define LAYOUT_kyria_wrapper(...) LAYOUT_kyria(__VA_ARGS__)

// V2

// Qwerty Layout
#define _________________QWERTY_L1_________________     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _________________QWERTY_L2_________________     HOME_A,  HOME_S,  HOME_D,  HOME_F,    HOME_G
#define _________________QWERTY_L3_________________     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________QWERTY_R1_________________     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________QWERTY_R2_________________     HOME_H,    HOME_J,    HOME_K,    HOME_L,    HOME_SCLN
#define _________________QWERTY_R3_________________     KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLASH

// ACCENT
#define _________________ACCENT_L1_________________     _______, _______, E_ACUTE, E_GRAVE, _______
#define _________________ACCENT_L2_________________     A_GRAVE, A_CIRCU, E_CIRCU, _______, _______ 
#define _________________ACCENT_L3_________________     _______, _______, C_CDILA, _______, _______

#define _________________ACCENT_R1_________________     DED_UML, U_GRAVE, I_CIRCU, O_CIRCU, _______
#define _________________ACCENT_R2_________________     DED_CIR, U_UMLAU, I_UMLAU, O_UMLAU, _______ 
#define _________________ACCENT_R3_________________     DEGR,    _______, _______, _______, _______ 
//Nav Layer
#define ________________NAV_L1_____________________ _______, _______, _______, _______, _______ 
#define ________________NAV_L2_____________________ KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______ 
#define ________________NAV_L3_____________________ _______, _______, _______, _______, _______ 

#define ________________NAV_R1_____________________ _______, _______, _______, _______, _______ 
#define ________________NAV_R2_____________________ KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______ 
#define ________________NAV_R3_____________________ KC_HOME, KC_PGDN, KC_PGUP, KC_END , _______ 

//Media
#define _________________MEDIA_L1_________________     _______, _______, _______, _______, _______
#define _________________MEDIA_L2_________________     KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_MUTE
#define _________________MEDIA_L3_________________     _______, _______, _______, _______, _______

#define _________________MEDIA_R1_________________     _______, _______, _______, _______, _______
#define _________________MEDIA_R2_________________     KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_MUTE
#define _________________MEDIA_R3_________________     _______, _______, _______, _______, _______
//Option - Function
#define _________________OPTION_L1_________________     UNIWL, _______, _______, _______, RESET
#define _________________OPTION_L2_________________     _______, _______, _______, _______, _______
#define _________________OPTION_L3_________________     _______, _______, _______, _______, _______

#define _________________OPTION_R1_________________     _______,     KC_F7,   KC_F8,   KC_F9, _______
#define _________________OPTION_R2_________________     _______,     KC_F4,   KC_F5,   KC_F6, _______ 
#define _________________OPTION_R3_________________     _______,     KC_F1,   KC_F2,   KC_F3, _______ 
// Number Layout
#define _________________NUMBER_L1_________________     _______, _______, _______,KC_PMNS, KC_PSLS
#define _________________NUMBER_L2_________________     KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______ 
#define _________________NUMBER_L3_________________     _______, _______, _______, KC_PPLS, KC_PAST

#define _________________NUMBER_R1_________________     _______,     KC_7,   KC_8,   KC_9, _______
#define _________________NUMBER_R2_________________     _______,    KC_4,   KC_5,   KC_6, KC_DOT 
#define _________________NUMBER_R3_________________     KC_0,     KC_1,   KC_2,   KC_3, KC_COMM 
//THUMB equal sign

// Number Layout
#define _________________SYMBOL_L1_________________     KC_EXLM, _______, xCBR, KC_RCBR, _______
#define _________________SYMBOL_L2_________________     KC_AT, KC_DLR,  xPRN, KC_RPRN, KC_GRV
#define _________________SYMBOL_L3_________________     KC_PERC, KC_CIRC, xBRC, KC_RBRC, _______

#define _________________SYMBOL_R1_________________     _______, _______, _______, _______, KC_PIPE 
#define _________________SYMBOL_R2_________________     KC_HASH, KC_GRAVE, _______, _______, _______ 
#define _________________SYMBOL_R3_________________     _______, _______, _______, _______, KC_BSLS  

// Suckless
/* #define _________________SUCKLESS_L1_______________     _______, _______, _______, _______, _______ */

/* // V1 */
/* // Qwerty Layout */
/* #define _________________QWERTY_L1_________________     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T */
/* #define _________________QWERTY_L2_________________     HOME_A,  HOME_S,  HOME_D,  HOME_F,    KC_G */
/* #define _________________QWERTY_L3_________________     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B */

/* #define _________________QWERTY_R1_________________     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P */
/* #define _________________QWERTY_R2_________________     KC_H,    HOME_J,    HOME_K,    HOME_L,    KC_SCLN */
/* #define _________________QWERTY_R3_________________     KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLASH */


/* // Number Layout */
/* /1* #define _________________NUMBER_L1_________________     KC_1,    KC_2,     KC_3,   KC_4,   KC_5 *1/ */
/* #define _________________NUMBER_L1_________________     _______, _______, _______, _______, _______ */
/* #define _________________NUMBER_L2_________________     _______, _______, _______,KC_PMNS, KC_PSLS */
/* #define _________________NUMBER_L3_________________     _______, _______, _______, KC_PPLS, KC_PAST */

/* #define _________________NUMBER_R1_________________     _______,     KC_7,   KC_8,   KC_9, _______ */
/* #define _________________NUMBER_R2_________________     _______,    KC_4,   KC_5,   KC_6, KC_DOT */ 
/* #define _________________NUMBER_R3_________________     KC_0,     KC_1,   KC_2,   KC_3, KC_COMM */ 
/* //THUMB equal sign */

/* // Number Layout */
/* #define _________________SYMBOL_L1_________________     KC_EXLM, _______, xCBR, KC_RCBR, _______ */
/* #define _________________SYMBOL_L2_________________     KC_AT, KC_DLR,  xPRN, KC_RPRN, KC_GRV */
/* #define _________________SYMBOL_L3_________________     KC_PERC, KC_CIRC, xBRC, KC_RBRC, _______ */

/* #define _________________SYMBOL_R1_________________     _______, _______, _______, _______, KC_PIPE */ 
/* #define _________________SYMBOL_R2_________________     KC_HASH, KC_GRAVE, _______, _______, _______ */ 
/* #define _________________SYMBOL_R3_________________     _______, _______, _______, _______, KC_BSLS */  
    
/* // Greek */
/* #define ________________GREEK_L1___________________        _______,   _______,   EPSLN,   RHO,     TAU */
/* #define ________________GREEK_L2___________________        ALPHA,   SIGMA,   DELTA,   LSFT_T(PHI),     GAMMA */
/* #define ________________GREEK_L3___________________        _______,    _______,      _______,     PHI,     BETA */

/* #define ________________GREEK_R1___________________        _______,   _______,   PHI,    OMEGA,   PI */
/* #define ________________GREEK_R2___________________        THETA,     _______,     _______,   LAMBD,   _______ */
/* #define ________________GREEK_R3___________________        _______,      GMU,     _______, _______, _______ */

/* //NAV */
/* #define ________________NAV_L1_____________________ KC_F1,   KC_F2,   KC_F3,   KC_F4, KC_F5 */
/* #define ________________NAV_L2_____________________ _______, _______, _______, _______, _______ */ 
/* #define ________________NAV_L3_____________________ _______, _______, _______, _______, _______ */ 

/* #define ________________NAV_R1_____________________     KC_F6,   KC_F7,   KC_F8,   KC_F9, KC_F10 */
/* #define ________________NAV_R2_____________________ KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,  _______ */ 
/* #define ________________NAV_R3_____________________ G(C(KC_LEFT)),G(C(KC_DOWN)),G(C(KC_UP)),G(C(KC_RGHT)),_______ */

/* // Accent Layout */
/* #define _________________ACCENT_L1_________________     _______, _______, E_ACUTE, E_GRAVE, _______ */
/* #define _________________ACCENT_L2_________________     A_GRAVE, A_CIRCU, E_CIRCU, _______, _______ */ 
/* #define _________________ACCENT_L3_________________     _______, _______, C_CDILA, _______, _______ */

/* #define _________________ACCENT_R1_________________     DED_UML, U_GRAVE, I_CIRCU, O_CIRCU, _______ */
/* #define _________________ACCENT_R2_________________     DED_CIR, _______, _______, _______, _______ */ 
/* #define _________________ACCENT_R3_________________     DEGR,    _______, _______, _______, _______ */ 
