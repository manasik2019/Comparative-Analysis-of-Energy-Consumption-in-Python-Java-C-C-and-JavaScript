
//Recursion in the C language

#include <stdio.h>

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

int main() {

  for (int i = 0; i < 1000000; i++)
  {
      int result = sum(100);
      printf("%d\n",result);
  }
  return 0;
}
