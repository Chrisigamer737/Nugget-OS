#include "../cpu/idt.h"
#include "../cpu/isr.h"
#include "../cpu/timer.h"
#include "../drivers/display.h"
#include "../drivers/keyboard.h"
#include "../drivers/font.h"
#include "util.h"
#include "mem.h"
#include <stdint.h>

void* alloc(int n) {
    int *ptr = (int *) mem_alloc(n * sizeof(int));
    if (ptr == NULL_POINTER) {
        print_string("Memory not allocated.\n");
    } else {
        // Get the elements of the array
        for (int i = 0; i < n; ++i) {
            ptr[i] = i + 1; // shorthand for *(ptr + i)
        }

        for (int i = 0; i < n; ++i) {
            char str[256];
            int_to_string(ptr[i], str);
            print_string(str);
        }
        print_nl();
    }
    return ptr;
}

void start_kernel() {
  //clear_screen();
  print_char_font_a(20,20,0,1);
  print_char_font_a(27,20,1,2);
  print_char_font_a(36,20,2,3);
  print_char_font_a(56,20,3,4);
}
void on_enter(char *input) {
    if (compare_string(input, "HALT") == 0) {
        print_string("Stopping the CPU. Bye!\n");
        asm volatile("hlt");
    }
    print_string("Unknown command: ");
    print_string(input);
    print_string("\n> ");
}


