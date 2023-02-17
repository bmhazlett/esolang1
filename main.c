#include <stdio.h>

void print_stack(int* stack);

int main(int argc, char *argv[]) {

  FILE *fp;
  char c;
  
  fp = fopen(argv[1], "rt");
  
  int stack[8] = {0, 0, 0, 0, 0, 0, 0, 0};
  int curr = 0;

  while ((c = fgetc(fp)) != EOF) {
    if (c == '>') {
      curr += 1;
    } else if (c == '<') {
      curr -= 1;
    } else if (c == '-') {
      stack[curr] -= 1;
    } else if (c == '+') {
      stack[curr] += 1;
    } else if (c == '.') {
      printf("%c", stack[curr]);
    } else if (c == '\n') {
      continue;
    }
  }
  
  return 0;
}

void print_stack(int* stack) {
  printf("[");
  for (int i = 0; i < 7; i++) {
    printf("%d ", stack[i]);
  }
  printf("%d]\n", stack[7]);
      
}
