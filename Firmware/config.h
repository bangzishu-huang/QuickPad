#define ENCODER_A_PINS {GP7}
#define ENCODER_B_PINS {GP0}

#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT
#    define RGBLIGHT_DEFAULT_HUE 230    // Pink Hue
#    define RGBLIGHT_DEFAULT_SAT 255    // Full Saturation
#    define RGBLIGHT_DEFAULT_VAL 255    // Full Brightness

#endif


#define WS2812_DI_PIN GP1
#define RGBLIGHT_LED_COUNT 5