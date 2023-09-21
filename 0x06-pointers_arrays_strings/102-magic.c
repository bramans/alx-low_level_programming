#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  
  // Use pointer arithmetic to indirectly modify a[2] via p
  *(p + 7) = 98;

  /* This should print a[2] = 98 */
  printf("a[2] = %d\n", a[2]);
  return 0;
}

