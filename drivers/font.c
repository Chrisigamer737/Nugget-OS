#include "display.h"
#include <stddef.h>
void print_int_font_a(int pos_x, int pos_y, int ch, int c)
{
	if (ch == 0) {
		fillrect(pos_x, pos_y-2, 2, 18, c);
		fillrect(pos_x-12, pos_y-2, 2, 18, c);
		fillrect(pos_x-10, pos_y-2, 10, 2, c);
		fillrect(pos_x-10, pos_y+14, 12, 2, c);
		fillrect(pos_x-6, pos_y+6, 2, 2, c);
	}
	if (ch == 1) {
		fillrect(pos_x, pos_y-2, 2, 18, c);
		fillrect(pos_x, pos_y+14, 4, 2, c);
		fillrect(pos_x-2, pos_y+14, 2, 2, c);
		fillrect(pos_x-2, pos_y, 2, 2, c);
	}
	else if (ch == 2) {
		fillrect(pos_x-10, pos_y-2, 12, 2, c);
		fillrect(pos_x-10, pos_y+14, 12, 2, c);
		fillrect(pos_x-10, pos_y+6, 12, 2, c);
		fillrect(pos_x, pos_y-2, 2, 10, c);
		fillrect(pos_x-10, pos_y+6, 2, 10, c);
	}
	else if (ch == 3) {
		fillrect(pos_x, pos_y-2, 2, 18, c);
		fillrect(pos_x-8, pos_y-2, 10, 2, c);
		fillrect(pos_x-8, pos_y+14, 10, 2, c);
		fillrect(pos_x-8, pos_y+6, 10, 2, c);		
	
	}
	else if (ch == 4) {
		fillrect(pos_x, pos_y-2, 2, 18, c);	
		fillrect(pos_x-10, pos_y-2, 2, 8, c);
		fillrect(pos_x-10, pos_y+6, 10, 2, c);
	}
	else if (ch == 5) {
		fillrect(pos_x-10, pos_y-2, 12, 2, c);
		fillrect(pos_x-10, pos_y+14, 12, 2, c);
		fillrect(pos_x-10, pos_y+6, 12, 2, c);
		fillrect(pos_x-10, pos_y-2, 2, 10, c);
		fillrect(pos_x, pos_y+6, 2, 10, c);
	}
	else if (ch == 6) {
		fillrect(pos_x-10, pos_y-2, 12, 2, c);
		fillrect(pos_x-10, pos_y+14, 12, 2, c);
		fillrect(pos_x-10, pos_y+6, 12, 2, c);
		fillrect(pos_x-10, pos_y-2, 2, 10, c);
		fillrect(pos_x, pos_y+6, 2, 10, c);
		fillrect(pos_x-10, pos_y+6, 2, 10, c);
	}
	else if (ch == 7) {
		fillrect(pos_x, pos_y-2, 2, 18, c);
		fillrect(pos_x-8, pos_y-2, 8, 2, c);

	}
	else if (ch == 8) {
		fillrect(pos_x-10, pos_y-2, 12, 2, c);
		fillrect(pos_x-10, pos_y+14, 12, 2, c);
		fillrect(pos_x-10, pos_y+6, 12, 2, c);
		fillrect(pos_x-10, pos_y-2, 2, 10, c);
		fillrect(pos_x, pos_y+6, 2, 10, c);
		fillrect(pos_x-10, pos_y+6, 2, 10, c);
		fillrect(pos_x, pos_y-2, 2, 8, c);


	}
	else if (ch == 9) {
		fillrect(pos_x-10, pos_y-2, 12, 2, c);
		//fillrect(pos_x-10, pos_y+14, 12, 2, c);
		fillrect(pos_x-10, pos_y+6, 12, 2, c);
		fillrect(pos_x-10, pos_y-2, 2, 10, c);
		fillrect(pos_x, pos_y+6, 2, 10, c);
		//fillrect(pos_x-10, pos_y+6, 2, 10, c);
		fillrect(pos_x, pos_y-2, 2, 8, c);



	}
	else {
		fillrect(pos_x, pos_y, 2, 2, c);



	}
}
void print_char_font_a(int pos_x, int pos_y, char ch, int c) {
	if (ch == 'A') {
		fillrect(pos_x-10, pos_y-2, 12, 2, c);
		//fillrect(pos_x-10, pos_y+14, 12, 2, c);
		fillrect(pos_x-10, pos_y+6, 12, 2, c);
		fillrect(pos_x-10, pos_y-2, 2, 10, c);
		fillrect(pos_x, pos_y+6, 2, 10, c);
		fillrect(pos_x-10, pos_y+6, 2, 10, c);
		fillrect(pos_x, pos_y-2, 2, 8, c);

	}
	else if (ch == 'B') {
		fillrect(pos_x-10, pos_y-2, 12, 2, c);
		fillrect(pos_x-10, pos_y+14, 12, 2, c);
		//fillrect(pos_x-10, pos_y+6, 12, 2, c);
		fillrect(pos_x-10, pos_y-2, 2, 10, c);
		fillrect(pos_x, pos_y+6, 2, 10, c);
		fillrect(pos_x-10, pos_y+6, 2, 10, c);
		fillrect(pos_x, pos_y-2, 2, 8, c);
		fillrect(pos_x, pos_y+6, 2, 2, BackgroundColor);
		fillrect(pos_x-10, pos_y+5, 10, 2, c);
		fillrect(pos_x-10, pos_y+7, 10, 2, c);
	}
	else if (ch == 'C') {
		fillrect(pos_x-10, pos_y-2, 2, 18, c);
		fillrect(pos_x-10, pos_y-2, 10, 2, c);
		fillrect(pos_x-10, pos_y+14, 10, 2, c);

	}
	else if (ch == 'D') {
		fillrect(pos_x-10, pos_y-2, 2, 18, c);
		fillrect(pos_x, pos_y, 2, 14, c);
		fillrect(pos_x-10, pos_y-2, 10, 2, c);
		fillrect(pos_x-10, pos_y+14, 10, 2, c);
	}
	else if (ch == 'E') {
		fillrect(pos_x-10, pos_y-2, 2, 18, c);
		fillrect(pos_x-8, pos_y-2, 10, 2, c);
		fillrect(pos_x-8, pos_y+14, 10, 2, c);
		fillrect(pos_x-8, pos_y+6, 10, 2, c);	
	}
	else if (ch == 'F') {
		fillrect(pos_x-10, pos_y-2, 2, 18, c);
		fillrect(pos_x-8, pos_y-2, 10, 2, c);
		//fillrect(pos_x-8, pos_y+14, 10, 2, c);
		fillrect(pos_x-8, pos_y+6, 10, 2, c);	
	}
	else if (ch == 'G') {
		fillrect(pos_x-10, pos_y-2, 12, 2, c);
		fillrect(pos_x-10, pos_y+14, 12, 2, c);
		fillrect(pos_x-6, pos_y+6, 8, 2, c);
		fillrect(pos_x-10, pos_y-2, 2, 10, c);
		fillrect(pos_x, pos_y+6, 2, 10, c);
		fillrect(pos_x-10, pos_y+6, 2, 10, c);
	}
	else if (ch == 'H') {
		fillrect(pos_x-10, pos_y+6, 12, 2, c);
		fillrect(pos_x-10, pos_y-2, 2, 10, c);
		fillrect(pos_x, pos_y+6, 2, 10, c);
		fillrect(pos_x-10, pos_y+6, 2, 10, c);
		fillrect(pos_x, pos_y-2, 2, 8, c);		
	}
	else if (ch == 'I') {
		fillrect(pos_x-6, pos_y-2, 2, 18, c);
		fillrect(pos_x-6, pos_y+14, 4, 2, c);
		fillrect(pos_x-8, pos_y+14, 2, 2, c);
		fillrect(pos_x-8, pos_y-2, 6, 2, c);		
	}
	else if (ch == 'J') {
		fillrect(pos_x, pos_y-2, 2, 18, c);
		fillrect(pos_x-10, pos_y+14, 10, 2, c);
		fillrect(pos_x-10, pos_y+8, 2, 6, c);
		fillrect(pos_x-10, pos_y+14, 2, 2, BackgroundColor);
		fillrect(pos_x, pos_y+14, 2, 2, BackgroundColor);
	}
	else if (ch == 'K') {
		fillrect(pos_x-10, pos_y-2, 2, 18, c);
		fillrect(pos_x-8, pos_y+6, 2, 2, c);
		fillrect(pos_x-6, pos_y+4, 2, 2, c);
		fillrect(pos_x-4, pos_y+2, 2, 2, c);
		fillrect(pos_x-4, pos_y+2, 2, 2, c);
		fillrect(pos_x-2, pos_y, 2, 2, c);
		fillrect(pos_x, pos_y-2, 2, 2, c);
		fillrect(pos_x-6, pos_y+8, 2, 2, c);
		fillrect(pos_x-4, pos_y+10, 2, 2, c);
		fillrect(pos_x-2, pos_y+12, 2, 2, c);
		fillrect(pos_x, pos_y+14, 2, 2, c);
	}
	else if (ch == 'L') {
		fillrect(pos_x-10, pos_y-2, 2, 18, c);
		fillrect(pos_x-10, pos_y+14, 10, 2, c);
	}
	else if (ch == 'M') {
		fillrect(pos_x-12, pos_y-2, 2, 18, c);
		fillrect(pos_x, pos_y-2, 2, 18, c);
		fillrect(pos_x-12, pos_y-2, 12, 2, c);
		fillrect(pos_x-6, pos_y-2, 2, 10, c);
	}
	else if (ch == 'N') {
		fillrect(pos_x-10, pos_y-2, 2, 18, c);
		fillrect(pos_x, pos_y-2, 2, 18, c);
		fillrect(pos_x-8, pos_y, 2, 2, c);
		fillrect(pos_x-6, pos_y+2, 2, 2, c);
		fillrect(pos_x-4, pos_y+4, 2, 2, c);
		fillrect(pos_x-2, pos_y+6, 2, 2, c);
	}
	else if (ch == 'O') {
		fillrect(pos_x, pos_y-2, 2, 18, c);
		fillrect(pos_x-12, pos_y-2, 2, 18, c);
		fillrect(pos_x-10, pos_y-2, 10, 2, c);
		fillrect(pos_x-10, pos_y+14, 12, 2, c);
	}
	else if (ch == 'P') {
		fillrect(pos_x-10, pos_y-2, 12, 2, c);
		//fillrect(pos_x-10, pos_y+14, 12, 2, c);
		fillrect(pos_x-10, pos_y+6, 12, 2, c);
		fillrect(pos_x-10, pos_y-2, 2, 10, c);
		fillrect(pos_x-10, pos_y+6, 2, 10, c);
		//fillrect(pos_x-10, pos_y+6, 2, 10, c);
		fillrect(pos_x, pos_y-2, 2, 8, c);
	}
	else if (ch == 'Q') {
		fillrect(pos_x-2, pos_y-2, 2, 16, c);
		fillrect(pos_x-12, pos_y-2, 2, 16, c);
		fillrect(pos_x-10, pos_y-2, 10, 2, c);
		fillrect(pos_x-10, pos_y+12, 10, 2, c);	
		fillrect(pos_x, pos_y+14, 2, 2, c);
	}
	else if (ch == 'R') {
		fillrect(pos_x-10, pos_y-2, 10, 2, c);
		//fillrect(pos_x-10, pos_y+14, 12, 2, c);
		fillrect(pos_x-10, pos_y+6, 10, 2, c);
		fillrect(pos_x-10, pos_y-2, 2, 10, c);
		//fillrect(pos_x-2, pos_y+6, 2, 4, c);
		fillrect(pos_x-10, pos_y+6, 2, 10, c);
		fillrect(pos_x-2, pos_y-2, 2, 8, c);
		fillrect(pos_x, pos_y+8, 2, 8, c);
	}
	else if (ch == 'S') {
		fillrect(pos_x-10, pos_y-2, 12, 2, c);
		fillrect(pos_x-10, pos_y+14, 12, 2, c);
		fillrect(pos_x-10, pos_y+6, 12, 2, c);
		fillrect(pos_x-10, pos_y-2, 2, 10, c);
		fillrect(pos_x, pos_y+6, 2, 10, c);
		fillrect(pos_x-10, pos_y-2, 2, 2, BackgroundColor);
		fillrect(pos_x, pos_y+6, 2, 2, BackgroundColor);
	}
	else if (ch == 'T') {
		fillrect(pos_x-5, pos_y-2, 2, 18, c);
		fillrect(pos_x-10, pos_y-2, 12, 2, c);
		
		
	}
	else if (ch == 'U') {
		fillrect(pos_x, pos_y-2, 2, 18, c);
		fillrect(pos_x-10, pos_y-2, 2, 18, c);
		//fillrect(pos_x-10, pos_y-2, 10, 2, c);
		fillrect(pos_x-10, pos_y+14, 10, 2, c);	
		}
	else if (ch == 'V') {
		fillrect(pos_x-10, pos_y-2, 2, 10, c);
		fillrect(pos_x-8, pos_y+8, 2, 6, c);
		fillrect(pos_x-6, pos_y+14, 4, 2, c);
		fillrect(pos_x, pos_y-2, 2, 10, c);
		fillrect(pos_x-2, pos_y+8, 2, 6, c);
		
	}
	else if (ch == 'W') {
		/*fillrect(pos_x-10, pos_y-2, 2, 16, c);
		fillrect(pos_x, pos_y-2, 2, 16, c);
		fillrect(pos_x-8, pos_y+14, 2, 2, c);
		fillrect(pos_x-2, pos_y+14, 2, 2, c);
		fillrect(pos_x-6, pos_y+6, 4, 8, c);
		*/
		fillrect(pos_x-12, pos_y-2, 2, 18, c);
		fillrect(pos_x, pos_y-2, 2, 18, c);
		fillrect(pos_x-12, pos_y+14, 12, 2, c);
		fillrect(pos_x-6, pos_y+6, 2, 10, c);
	}
	else if (ch == 'X') {
		fillrect(pos_x-10, pos_y-2, 2, 4, c);
		fillrect(pos_x-8, pos_y+2, 2, 4, c);
		fillrect(pos_x-6, pos_y+6, 4, 6, c);
		fillrect(pos_x-2, pos_y+12, 2, 2, c);
		fillrect(pos_x, pos_y+14, 2, 2, c);
		fillrect(pos_x-8, pos_y+12, 2, 2, c);
		fillrect(pos_x-10, pos_y+14, 2, 2, c);
		fillrect(pos_x, pos_y-2, 2, 4, c);
		fillrect(pos_x-2, pos_y+2, 2, 4, c);
	}
	else if (ch == 'Y') {
		fillrect(pos_x, pos_y-2, 2, 8, c);
		fillrect(pos_x-10, pos_y-2, 2, 8, c);
		fillrect(pos_x-2, pos_y+6, 2, 2, c);
		fillrect(pos_x-8, pos_y+6, 2, 2, c);
		fillrect(pos_x-6, pos_y+8, 4, 8, c);
	}
	else if (ch == 'Z') {
		fillrect(pos_x-10, pos_y-2, 12, 2, c);
		fillrect(pos_x-10, pos_y+14, 12, 2, c);
		fillrect(pos_x, pos_y, 2, 2, c);
		fillrect(pos_x-2, pos_y+2, 2, 4, c);
		fillrect(pos_x-4, pos_y+4, 2, 4, c);
		fillrect(pos_x-6, pos_y+8, 2, 4, c);
		fillrect(pos_x-8, pos_y+10, 2, 4, c);		
	}
	else if (ch == '0') {
		fillrect(pos_x, pos_y-2, 2, 18, c);
		fillrect(pos_x-12, pos_y-2, 2, 18, c);
		fillrect(pos_x-10, pos_y-2, 10, 2, c);
		fillrect(pos_x-10, pos_y+14, 12, 2, c);
		fillrect(pos_x-6, pos_y+6, 2, 2, c);
	}
	else if (ch == '1') {
		fillrect(pos_x, pos_y-2, 2, 18, c);
		fillrect(pos_x, pos_y+14, 4, 2, c);
		fillrect(pos_x-2, pos_y+14, 2, 2, c);
		fillrect(pos_x-2, pos_y, 2, 2, c);
	}
	else if (ch == '2') {
		fillrect(pos_x-10, pos_y-2, 12, 2, c);
		fillrect(pos_x-10, pos_y+14, 12, 2, c);
		fillrect(pos_x-10, pos_y+6, 12, 2, c);
		fillrect(pos_x, pos_y-2, 2, 10, c);
		fillrect(pos_x-10, pos_y+6, 2, 10, c);
	}
	else if (ch == '3') {
		fillrect(pos_x, pos_y-2, 2, 18, c);
		fillrect(pos_x-8, pos_y-2, 10, 2, c);
		fillrect(pos_x-8, pos_y+14, 10, 2, c);
		fillrect(pos_x-8, pos_y+6, 10, 2, c);		
	
	}
	else if (ch == '4') {
		fillrect(pos_x, pos_y-2, 2, 18, c);	
		fillrect(pos_x-10, pos_y-2, 2, 8, c);
		fillrect(pos_x-10, pos_y+6, 10, 2, c);
	}
	else if (ch == '5') {
		fillrect(pos_x-10, pos_y-2, 12, 2, c);
		fillrect(pos_x-10, pos_y+14, 12, 2, c);
		fillrect(pos_x-10, pos_y+6, 12, 2, c);
		fillrect(pos_x-10, pos_y-2, 2, 10, c);
		fillrect(pos_x, pos_y+6, 2, 10, c);
	}
	else if (ch == '6') {
		fillrect(pos_x-10, pos_y-2, 12, 2, c);
		fillrect(pos_x-10, pos_y+14, 12, 2, c);
		fillrect(pos_x-10, pos_y+6, 12, 2, c);
		fillrect(pos_x-10, pos_y-2, 2, 10, c);
		fillrect(pos_x, pos_y+6, 2, 10, c);
		fillrect(pos_x-10, pos_y+6, 2, 10, c);
	}
	else if (ch == '7') {
		fillrect(pos_x, pos_y-2, 2, 18, c);
		fillrect(pos_x-8, pos_y-2, 8, 2, c);

	}
	else if (ch == '8') {
		fillrect(pos_x-10, pos_y-2, 12, 2, c);
		fillrect(pos_x-10, pos_y+14, 12, 2, c);
		fillrect(pos_x-10, pos_y+6, 12, 2, c);
		fillrect(pos_x-10, pos_y-2, 2, 10, c);
		fillrect(pos_x, pos_y+6, 2, 10, c);
		fillrect(pos_x-10, pos_y+6, 2, 10, c);
		fillrect(pos_x, pos_y-2, 2, 8, c);


	}
	else if (ch == '9') {
		fillrect(pos_x-10, pos_y-2, 12, 2, c);
		//fillrect(pos_x-10, pos_y+14, 12, 2, c);
		fillrect(pos_x-10, pos_y+6, 12, 2, c);
		fillrect(pos_x-10, pos_y-2, 2, 10, c);
		fillrect(pos_x, pos_y+6, 2, 10, c);
		//fillrect(pos_x-10, pos_y+6, 2, 10, c);
		fillrect(pos_x, pos_y-2, 2, 8, c);



	}
}
void print_str(int pos_x, int pos_y, char *string, int c) {
	int i = 0;
	int a = 0;
	int b = pos_y;
	while (string[i] != 0) {
		if (i != 0) {
			a = a + pos_x+20;
		}
		else
		{
			a = pos_x;
			
			
		}
		if (a >= 320) {
			a = pos_x;
			b = b + 20;
		}
		print_char_font_a(a,b,string[i],c);
		i++;
		
		
	}
	
}	
	

void print_str_rainbow(int pos_x, int pos_y, char *string) {
	int i = 0;
	int c = 1;
	int a = 0;
	int b = pos_y;
	while (string[i] != 0) {
		if (c == 16) {
			c = c + 15;
			
			
			
		}
		if (i != 0) {
			a = a + pos_x+20;
		}
		else
		{
			a = pos_x;
			
			
		}
		if (a >= 320) {
			a = pos_x;
			b = b + 20;
		}
		print_char_font_a(a,b,string[i],c);
		c++;
		i++;
		
		
	}
}
void font_test () {
	print_str_rainbow(20,20,"ABCDEFGHIJKLMNOPQRSTUVWRXYZ1234567890");
	
	
	
}