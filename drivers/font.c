#include "display.h"

void print_char_font_a(int pos_x, int pos_y, int ch, int c)
{
	if (ch == 0) {
		fillrect(pos_x, pos_y-2, 2, 18, c);
		fillrect(pos_x-12, pos_y-2, 2, 18, c);
		fillrect(pos_x-12, pos_y-2, 12, 2, c);
		fillrect(pos_x-12, pos_y+14, 14, 2, c);
		fillrect(pos_x-10, pos_y+2, 2, 2, c);
		fillrect(pos_x-8, pos_y+4, 2, 2, c);
		fillrect(pos_x-6, pos_y+6, 2, 2, c);
		fillrect(pos_x-4, pos_y+8, 2, 2, c);
		fillrect(pos_x-2, pos_y+10, 2, 2, c);
	}
	if (ch == 1) {
		fillrect(pos_x, pos_y-2, 2, 18, c);
		fillrect(pos_x, pos_y+14, 4, 2, c);
		fillrect(pos_x-2, pos_y+14, 2, 2, c);
		fillrect(pos_x-2, pos_y+2, 2, 2, c);
	}
	else if (ch == 2) {
		fillrect(pos_x, pos_y, 2, 2, c);
		fillrect(pos_x+2, pos_y-2, 6, 2, c);
		fillrect(pos_x+8, pos_y, 2, 2, c);
		fillrect(pos_x+10, pos_y+2, 2, 4, c);
		fillrect(pos_x+8, pos_y+6, 2, 2, c);
		fillrect(pos_x+6, pos_y+8, 2, 2, c);
		fillrect(pos_x+4, pos_y+10, 2, 2, c);
		fillrect(pos_x+2, pos_y+12, 2, 2, c);
		fillrect(pos_x, pos_y+14, 12, 2, c);
	}
	else if (ch == 3) {
		fillrect(pos_x, pos_y-2, 2, 18, c);
		fillrect(pos_x-6, pos_y-2, 6, 2, c);
		fillrect(pos_x-6, pos_y+14, 6, 2, c);
		fillrect(pos_x-6, pos_y+6, 6, 2, c);		
	
	}




}