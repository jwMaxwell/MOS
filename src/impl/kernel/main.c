#include "print.h"

void kernel_main() {
  char* welcome_txt = "___  ________ _____ \n|  \\/  |  _  /  ___|\n| .  . | | | \\ `--. \n| |\\/| | | | |`--. \\\n| |  | \\ \\_/ /\\__/ /\n\\_|  |_/\\___/\\____/ \n\n";

  print_clear();
  print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
  print(welcome_txt);
  print("Welcome to MOS!\n");
}
