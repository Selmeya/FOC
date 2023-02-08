#include <stdio.h>
int main() {
    int s, e, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &s);
    e = s;

    while (e != 0) {
        remainder = e % 10;
       result += remainder * remainder * remainder;
       e /= 10;
    }

    if (result == s)
        printf("%d is an Armstrong Number.", s);
    else
        printf("%d is not an Armstrong Number.", s);

    return 0;
}
