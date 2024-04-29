# Copyright 2019 Manna Harbour
# https://github.com/manna-harbour/miryoku

# This file intentionally left blank
# MCU name
MCU = atmega32u4

# Bootloader selection

# Build options
# change to yes to no to disable
#
BOOTMAGIC_ENABLE = yes
CONSOLE_ENABLE = no
COMMAND_ENABLE = yes
NKRO_ENABLE = no
BACKLIGHT_ENABLE = no
AUDIO_ENABLE = no
MIDI_ENABLE = no
BLUETOOTH_ENABLE = no
SPLIT_KEYBOARD = yes
MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = yes
AUTO_SHIFT_ENABLE = yes
TAP_DANCE_ENABLE = yes
CAPS_WORD_ENABLE = yes
KEY_OVERRIDE_ENABLE = yes

INTROSPECTION_KEYMAP_C = manna-harbour_miryoku.c # keymaps

include users/manna-harbour_miryoku/custom_rules.mk

include users/manna-harbour_miryoku/post_rules.mk
