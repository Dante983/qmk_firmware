# Build Options
#   change to "no" to disable the options, or define them in the Makefile in
#   the appropriate keymap folder that will get included automatically
#
RGBLIGHT_ENABLE = no         # Disable WS2812 RGB underlight (using RGB matrix instead)
RGB_MATRIX_ENABLE = yes      # Enable RGB matrix
RGB_MATRIX_CUSTOM_USER = yes # Enable custom RGB matrix effects

# Bootloader selection
#BOOTLOADER = atmel-dfu

OLED_ENABLE = yes
# OLED_DRIVER = SSD1306

ENCODER_ENABLE = no
#EXTRAKEY_ENABLE = yes # enable for left, disable for right?

# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no    # Breathing sleep LED during USB suspend
LTO_ENABLE = yes
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no
MAGIC_ENABLE = no

# Disable features to save space
NO_ACTION_MACRO = yes
NO_ACTION_FUNCTION = yes
CONSOLE_ENABLE = no
VERBOSE = no

# If you want to change the display of OLED, you need to change here
# Removed animation files (burst.c, ring.c) to save space for RGB matrix effect
SRC +=  ./lib/rgb_state_reader.c \
        ./navi_logo.c \
        ./gui_state.c \
        ./fast_random.c \
        ./layer_frame.c \
        ./boot.c \
        ./draw_helper.c
