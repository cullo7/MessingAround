#include <stdio.h>
#include <string.h>
#include <time.h>
#include <limits.h>
#include "functions.h"


int main(int argc, char *argv[]) {
  // Testing datatype size in C
  clock_t start, end;
  double cpu_time_used;   

  start = clock();
  test_size_int();
  end = clock();
  printf("time elapsed for int: %f s\n", ((double) (end - start)) / CLOCKS_PER_SEC);

  start = clock();
  test_size_unsigned_int();
  end = clock();
  printf("time elapsed for unsigned int: %f s\n", ((double) (end - start)) / CLOCKS_PER_SEC);

  start = clock();
  test_size_long();
  end = clock();
  printf("time elapsed for long: %f s\n", ((double) (end - start)) / CLOCKS_PER_SEC);

  start = clock();
  test_size_char();
  end = clock();
  printf("time elapsed for char: %f s\n", ((double) (end - start)) / CLOCKS_PER_SEC);

  // general datatype size info
  datatype_sizes();
  datatype_max_min();
  datatype_sizes_short();

  // return value with each datatype of user input
  check_size();
  return 0;
}
