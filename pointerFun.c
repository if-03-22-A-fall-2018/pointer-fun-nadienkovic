#include "pointerfun.h"

int main(int argc, char const *argv[]) {
  int int_value = 31415926;
  int* int_pointer = &int_value;

  print_integers(int_value, int_pointer);
  change_integers(int_value, int_pointer);
  print_integers(int_value, int_pointer);
  return 0;
}

void print_integers(int int_value, int* int_pointer){
  printf("Got an integer value %d and an address to an integer with value %ls \n\n",int_value,int_pointer );
}

void change_integers(int int_value, int* int_pointer){
  int_value = 91142;
  *int_pointer = int_value;
}
