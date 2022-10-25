#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int main(int argc, char *argv[]){
void *handle;
int (*add)(int, int),(*sub)(int,int),(*mul)(int,int);
double (*div)(int,int);
char *error;
handle = dlopen("./lib/MathOper.so", RTLD_LAZY);
if (!handle) {
    fputs(dlerror(), stderr);
    exit(1);
  }
  add = dlsym(handle, "add");
  if ((error = dlerror()) != NULL){
    fprintf (stderr, "%s", error);
    exit(1);
  }
  sub = dlsym(handle, "sub");
  if ((error = dlerror()) != NULL){
    fprintf (stderr, "%s", error);
    exit(1);
  }
  mul = dlsym(handle, "mul");
  if ((error = dlerror()) != NULL){
    fprintf (stderr, "%s", error);
    exit(1);
  }
 div = dlsym(handle, "div");
  if ((error = dlerror()) != NULL){
    fprintf (stderr, "%s", error);
    exit(1);
  }

  printf("%d + %d = %d\n", atoi(argv[1]),atoi(argv[2]), add(atoi(argv[1]),atoi(argv[2])));
  printf("%d - %d = %d\n", atoi(argv[1]),atoi(argv[2]), sub(atoi(argv[1]),atoi(argv[2])));
  printf("%d * %d = %d\n", atoi(argv[1]),atoi(argv[2]), mul(atoi(argv[1]),atoi(argv[2])));
  printf("%d / %d =  %f\n", atoi(argv[1]),atoi(argv[2]), div(atoi(argv[1]),atoi(argv[2])));
dlclose(handle);
}

