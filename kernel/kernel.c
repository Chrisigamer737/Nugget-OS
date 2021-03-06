#include "../cpu/idt.h"
#include "../cpu/isr.h"
#include "../cpu/timer.h"
#include "../drivers/display.h"
#include "../drivers/keyboard.h"
#include "../drivers/font.h"
#include "util.h"
#include "mem.h"
#include <stdint.h>
//#include <stddef.h>
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
  isr_install();
  asm volatile("sti");
  init_keyboard();
  init_dynamic_mem();
  
  clear_screen();
  //clear_screen();
  //print_str_rainbow(20,20,"ABCDEFGHIJKLMNOPQRSTUVWRXYZ");
  //font_test();
  int f,g;
   for (f = 1; f <= 23000; f++)
       for (g = 1; g <= 23000; g++)
       {}
   font_test();
   
}
void on_enter(char *input) {
    if (compare_string(input, "HALT") == 0) {
        asm volatile("hlt");
    }
    print_string("Unknown command: ");
    print_string(input);
    print_string("\n> ");
}


