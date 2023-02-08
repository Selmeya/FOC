#include <stdio.h>
int main()
{
    int s, sum =0;
    printf("Enter any integer: ");
    scanf("%d",&s);

    while(s != 0){
        int digit = s % 10;
        s = s / 10;
        printf("%d", digit);
    }
return 0;

}
