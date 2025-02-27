
#define AO LBKT
#define SE_AE SQT
#define SE_OE SEMI 


#define MIRYOKU_ALTERNATIVES_BASE_QWERTY \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LSHFT, A),     U_MT(RALT, S),     U_MT(LALT, D),    U_MT(RCTRL, F),    &kp G,             &kp H,             U_MT(RCTRL, J),    U_MT(LALT, K),    U_MT(RALT, L),     U_MT(LSHFT, APOS),   \
U_LT(U_MEDIA, Z), U_MT(LGUI, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(LGUI, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, ESC),  U_LT(U_NUM, TAB),U_LT(U_SYM, RET),  &kp SPC, U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_VI \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         U_RGB_TOG,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        U_EP_TOG,          \
U_NA,              &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp TILDE,          &kp RBRC,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       &kp AO,            \
&kp COLON,         &kp DLLR,          &kp PRCT,          &kp CRRT,          &kp UNDER,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp SE_OE,         &kp SE_AE,          \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp LPAR,          &kp RPAR,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_VI \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LSHFT,          &kp RALT,          &kp LALT,         &kp RCTRL,         U_NA,              &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      \
U_NA,              &kp LGUI,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp RC(BSPC),      &kp BSPC,         &kp PG_UP,         &kp END,           &kp INS,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp LCTRL,          &kp DEL,           U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_NUM \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,    &u_to_U_BASE,       U_NA,              &kp LBKT,          &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp RBKT,          \
&kp LGUI,          &kp LALT,          &kp LCTRL,        &kp LSHFT,          U_NA,              &kp EQL,           &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         &kp SEMI,          \
U_NA,              &kp_RALT,          &u_to_U_NAV,      &u_to_U_NUM,        U_NA,              &kp BSLH,          &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp GRAVE,         \
U_NP,              U_NP,              U_NA,             U_NA,               U_NA,              &kp MINUS,         &kp NUM_0,         &kp DOT,           U_NP,              U_NP               \
