#include <stdio.h>
int main()
{
    int s, sum =0;
    printf("Enter any integer: ");
    scanf("%d",&s);

    while(s != 0){
        int digit = s % 10;
        s = s / 10;
        printf("%d\n", digit);
        sum +=digit;
    }
    printf("The Sum of Digits of the given Integer is %d", sum);
    return 0;

}
