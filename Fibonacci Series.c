#include <stdio.h>
int main() {

  int i, n;
  int s = 0, e = 1;
  int l = s + e;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d, %d, ", s, e);

  for (i = 3; i <= n; ++i) {
    printf("%d, ", l);
    s = e;
    e = l;
    l = s + e;
  }

  return 0;
}
