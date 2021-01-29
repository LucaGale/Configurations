/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#define CONFIG_EXAMPLES_DIR "Formbot/T_Rex_2+"

/**
 * Custom Bitmap for splashscreen
 *
 * You may use one of the following tools to generate the C++ bitmap array from
 * a black and white image:
 *
 *  - http://www.marlinfw.org/tools/u8glib/converter.html
 *  - http://www.digole.com/tools/PicturetoC_Hex_converter.php
 */
#include <avr/pgmspace.h>

#define CUSTOM_BOOTSCREEN_BMPWIDTH  128

const unsigned char custom_start_bmp[] PROGMEM = {
  B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11111111,B11111111,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11111111,B11111111,B11111111,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11100000,B00011111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11100000,B00111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11100000,B00111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11100000,B00111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11100000,B00111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11100000,B00111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11100000,B00111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11100000,B00111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11100000,B00111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11100000,B00111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11100000,B00111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11100000,B00111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11100000,B00111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11100000,B00111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11100000,B00011111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11100000,B00111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B11100000,B00111111,B11111111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11100000,B00111111,B11111111,B11111111,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B11100000,B00111111,B11111111,B11111111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11100000,B00111111,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100000,B00111111,B11111111,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111111,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B11111111,B11111111,B00000000,B01111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11100000,B00000000,B00000000,
  B00000000,B11111111,B11111111,B00000000,B01111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11110000,B00000000,B00000000,
  B00000000,B10000011,B11000001,B00000000,B01110000,B00111100,B00000000,B00111000,B00000011,B11000000,B01111000,B00000000,B00000111,B00111000,B00000000,B00000000,
  B00000000,B00000011,B11000000,B00000000,B01110000,B00011110,B00000001,B11111110,B00000000,B11000000,B01100000,B00000000,B00001110,B00011100,B00000110,B00000000,
  B00000000,B00000011,B11000000,B00000000,B01110000,B00111100,B00000011,B11000111,B00000000,B01100000,B11000000,B00000000,B00001100,B00001100,B00000110,B00000000,
  B00000000,B00000011,B11000000,B00000000,B01111110,B01111000,B00000110,B00000001,B10000000,B00110001,B10000000,B00000000,B00000000,B00001100,B00000110,B00000000,
  B00000000,B00000011,B11000000,B11111111,B01111111,B11100000,B00000110,B00000001,B11000000,B00011011,B00000000,B00000000,B00000000,B00011100,B00111111,B11000000,
  B00000000,B00000011,B11000000,B11111111,B01110000,B11100000,B00001111,B11111111,B11000000,B00001111,B00000000,B00000000,B00000000,B00111000,B00111111,B11000000,
  B00000000,B00000011,B11000000,B00000000,B01110000,B01111000,B00001100,B00000000,B00000000,B00001111,B00000000,B00000000,B00000000,B01110000,B00000110,B00000000,
  B00000000,B00000011,B11000000,B00000000,B01110000,B00111100,B00000110,B00000000,B00000000,B00011001,B10000000,B00000000,B00000000,B01100000,B00000110,B00000000,
  B00000000,B00000011,B11000000,B00000000,B01110000,B00011110,B00000110,B00000000,B11000000,B00110000,B11000000,B00000000,B00000001,B11000000,B00000110,B00000000,
  B10000000,B00000011,B11000000,B00000000,B01110000,B00011110,B00000011,B10000001,B10000000,B01100000,B01100000,B00000000,B00000011,B10000000,B00000000,B00000001,
  B10000000,B00000011,B11000000,B00000000,B01110000,B00001110,B10000001,B11111111,B10000000,B11000000,B00110000,B00000000,B00001111,B11111100,B00000000,B00000001,
  B10000000,B00000011,B11000000,B00000000,B01110000,B00000111,B00000000,B01111100,B00000011,B10000000,B00011100,B00000000,B00011111,B11111100,B00000000,B00000001,
  B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111
};
