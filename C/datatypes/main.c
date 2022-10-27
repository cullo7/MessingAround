#include <stdio.h>
#include <time.h>
#include <limits.h>

//short
// also want to test difference between long, unsigned, long, signed long, etc.

void datatype_sizes(){
    printf ("Size of int: %lu\n", sizeof(int));
    printf ("Size of unsigned int: %lu\n", sizeof(unsigned int));
    printf ("Size of char: %lu\n", sizeof(char));
    printf ("Size of long: %lu\n", sizeof(long));
    printf ("Size of float: %lu\n", sizeof(float));
    printf ("Size of double: %lu\n", sizeof(double));
}

void datatype_max_min(){
  printf ("max size of int: %d, min size of int: %d\n", INT_MAX, INT_MIN);
  printf ("max size of unsigned int: %d, min size of unsigned int: %d\n", INT_MAX, INT_MIN);
  printf ("max size of char: %d, min size of char: %d\n", INT_MAX, INT_MIN);
  printf ("max size of float: %d, min size of float: %d\n", INT_MAX, INT_MIN);
  printf ("max size of double: %d, min size of double: %d\n", INT_MAX, INT_MIN);
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
  while(i + 1 > i){
    i = i + 1;
    printf("unsigned int %u\n", i);
  }
  printf("Overload at : %u\n", i);
  printf("Next value : %u\n", i+1);
}
void test_size_long(){
  long i = 0;
  printf("Testing long\n");
  while(i+1 > i){
    i = i + 1;
  }
  printf("Overload at : %ld\n", i);
  printf("Next value : %ld\n", i+1);
}
void test_size_char(){
  char i = 'a';
  printf("Testing char\n");
  while(i+1 > i){
    i = i + 1;
  }
  printf("Overload at : %d\n", i);
  printf("Next value : %d\n", i+1);
}

int main(int argc, char *argv[]) {
  // Testing datatype size in C
  clock_t start, end;
  double cpu_time_used;
     
  start = clock();
  //  test_size_int();
  end = clock();
  printf("time elapsed for int: %f s\n", ((double) (end - start)) / CLOCKS_PER_SEC);
  start = clock();
  //  test_size_unsigned_int();
  end = clock();
  printf("time elapsed for unsigned int: %f s\n", ((double) (end - start)) / CLOCKS_PER_SEC);
  start = clock();
  //test_size_long();
  end = clock();
  printf("time elapsed for long: %f s\n", ((double) (end - start)) / CLOCKS_PER_SEC);
  start = clock();
  //  test_size_char();
  end = clock();
  printf("time elapsed for char: %f s\n", ((double) (end - start)) / CLOCKS_PER_SEC);
  datatype_sizes();
  datatype_max_min();
  return 0;
}
