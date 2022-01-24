#include <stdint.h>
#pragma once
#define VIDEO_ADDRESS 0xA0000
#define MAX_ROWS 320
#define MAX_COLS 200
#define WHITE_ON_BLACK 0x0f
#define BackgroundColor 0
/* Screen i/o ports */
#define REG_SCREEN_CTRL 0x3d4
#define REG_SCREEN_DATA 0x3d5
/* Public kernel API */
void print_string(char *string);

void print_nl();

void clear_screen();

int scroll_ln(int offset);

void print_backspace();

void putpixel(int pos_x, int pos_y, unsigned char VGA_COLOR);

void fillrect(int pos_x, int pos_y, int w, int h, unsigned char VGA_COLOR);

int scroll_ln_vert(int offset);