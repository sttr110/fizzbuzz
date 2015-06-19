#include <stdio.h>
int fizzbuzz(int n);

int main(void) {
  int n;
  scanf("%d", &n);
  fizzbuzz(n);
  return 0;
}

int fizzbuzz(int n) {
  int i;
  for(i = 1; i <= n; i++) {
    if(i%3 == 0 && i%5 == 0) {
      printf("fizzbuzz \n");
    } else if(i%3 == 0) {
      printf("fizz \n");
    } else if(i%5 == 0) {
      printf("buzz \n");
    } else {
      printf("%d \n", i);
    }
  }
}
     
