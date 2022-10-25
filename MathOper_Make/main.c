#include <stdio.h>
#include "MathOper.h"

void main(int argc, char *argv[]){
  printf("%d + %d = %d\n", atoi(argv[1]),atoi(argv[2]), add(atoi(argv[1]),atoi(argv[2])));
  printf("%d - %d = %d\n", atoi(argv[1]),atoi(argv[2]), sub(atoi(argv[1]),atoi(argv[2])));
  printf("%d * %d = %d\n", atoi(argv[1]),atoi(argv[2]), mul(atoi(argv[1]),atoi(argv[2])));
  printf("%d / %d =  %f\n", atoi(argv[1]),atoi(argv[2]), div(atoi(argv[1]),atoi(argv[2])));
}
