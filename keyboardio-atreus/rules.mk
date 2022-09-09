
ENCODER_ENABLE = no       # Enable the use of one or more encoders
TAP_DANCE_ENABLE = yes     # Activate tap dance

COMBO_ENABLE = yes 				 # Enable combos
NKRO_ENABLE = yes 				 # Enable NKRO: any number of key-presses at once
LTO_ENABLE = yes  				 # Enable Link Time Optimization

EXTRFLAGS += -flto

WPM_ENABLE = no     	     # Disable WPM measurement
MOUSEKEY_ENABLE = no       # Disable mouse keys

DEFAULT_FOLDER = atreus44/default
MCU = atmega32u4
BOOTLOADER = atmel-dfu
BOTLOADER = atmel-dfu     # Disable keyboard backlight (not RGB)
SRC += features/achordion.c
