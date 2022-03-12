// KEYCODES
enum custom_user_keycodes {
    RGB_NITE = SAFE_RANGE,
     // Turns off all rgb but allow rgb indicators to work
};


#ifdef RGB_MATRIX_ENABLE
    void toggle_rgb_nightmode(bool);
    bool rgb_nightmode_status(void);
#endif
