#include <stdio.h>
#include <string.h>
#include <time.h>
#include <limits.h>
#include "functions.h"

void check_size(){

  char input [20];
  while(1){
    printf("\n");
    printf("What datatype would you like to check?: ");
    printf("Choose between int, unsigned int, short, char, long, double\n");
    printf("enter 'quit' to exit the program\n");
    scanf("%s", &input);
    if(!strcmp(input, "int")){
      int i;
      printf("Enter value: ");
      scanf("%d", &i);
      printf("casted to an int: %d\n", i);
    } else if(!strcmp(input, "unsigned int")){
      unsigned int i;
      printf("Enter value: ");
      scanf("%u", &i);
      printf("casted to an unsigned int: %u\n", i);
    } else if (!strcmp(input, "short")){
      short i;
      printf("Enter value: ");
      scanf("%hu", &i);
      printf("casted to an short: %d\n", i);    
    } else if (!strcmp(input, "char")){
      long i;
      printf("Enter value: ");
      scanf("%ld", &i);
      printf("casted to an char: %c\n", (char)i);    
    } else if (!strcmp(input, "long")){
      long i;
      printf("Enter value: ");
      scanf("%ld", &i);
      printf("casted to an long: %ld\n", i);
    } else if (!strcmp(input, "double")){
      double i;
      printf("Enter value: ");
      scanf("%lf", &i);
      printf("casted to an double: %f\n", i);
    } else if (!strcmp(input, "quit")){
      break;
    } else {
      printf("Sorry, I didn't understand the input, could you please try again");
    }
  }
}

void datatype_sizes(){
    printf ("Size of int: %lu  bytes\n", sizeof(int));
    printf ("Size of unsigned int: %lu bytes\n", sizeof(unsigned int));
    printf ("Size of char: %lu bytes\n", sizeof(char));
    printf ("Size of long: %lu bytes\n", sizeof(long));
    printf ("Size of float: %lu bytes\n", sizeof(float));
    printf ("Size of double: %lu bytes\n", sizeof(double));
    printf ("Size of long long: %lu bytes\n", sizeof(long long));
    printf("\n");
}

void datatype_max_min(){
  printf ("max size of int: %d, min size of int: %d\n", INT_MAX, INT_MIN);
  printf ("max size of unsigned int: %d, min size of unsigned int: %d\n", UINT_MAX, 0);
  printf ("max size of char: %d, min size of char: %d\n", CHAR_MAX, CHAR_MIN);
  printf ("max size of long: %ld, min size of long: %ld\n", LONG_MAX, LONG_MIN);
  printf ("max size of long long: %lld, min size of long long: %lld\n", LLONG_MAX, LLONG_MIN);
  // no such values for float or double
}

void datatype_sizes_short(){
  printf("sizes of short:\n");

  printf ("Size of short: %lu bytes\n", sizeof(short));
  printf ("Size of short int: %lu bytes\n", sizeof(short int));
  printf ("Size of signed short: %lu bytes\n", sizeof(signed short));
  printf ("Size of unsized short: %lu bytes\n", sizeof(unsigned short));
  
  printf("max/min of short:\n");
  printf ("max size of short: %d, min size of short: %d\n", SHRT_MAX, SHRT_MIN);
  printf ("max size of short int: %d, min size of short int: %d\n", SHRT_MAX, SHRT_MIN);
  printf ("max size of signed short: %d, min size of signed short: %d\n", SHRT_MAX, SHRT_MIN);
  printf ("max size of unsigned short: %d, min size of unsigned short: %d\n", USHRT_MAX, 0);

  printf("\n");
}

void test_size_int(){
  int i = 0;
  printf("Testing integer\n");
  while(i+1 > i){
    i = i + 1;
  }
  printf("Overload at : %d\n", i);
  printf("Next value : %d\n", i+1);
}

void test_size_unsigned_int(){
  unsigned int i = 0;
  printf("Testing unsigned integer\n");
  while((unsigned int)(i + 1) > i){
    i = i + 1;
  }
  printf("Overload at : %u\n", i);
  printf("Next value : %u\n", i+1);
}

void test_size_long(){
  long i = 1;
  long inc = 100000000000000000;
  printf("Testing long\n");
  while((long)(i+inc) > i){
    i = i + inc;
  }
  printf("Overload at : %ld\n", i);
  printf("Next value : %ld\n", i+1);
}

void test_size_char(){
  char i = 'a';
  while((char)(i+1) > i){
    i = i + 1;
  }
  printf("Overload at : %d\n", i);
  printf("Next value : %d\n", i+1);
}
