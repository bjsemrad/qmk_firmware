// KEYCODES
enum custom_user_keycodes {
    RGB_NITE = SAFE_RANGE,
    RGB_GAME,
    RGB_RESET,
    RGB_DIABLO
};


#ifdef RGB_MATRIX_ENABLE
    void toggle_rgb_nightmode(bool);
    bool rgb_nightmode_status(void);
#endif
