#include <stdio.h>
int main()
{
    int s;
    printf("Enter any integer: ");
    scanf("%d",&s);

    while(s != 0){
        int digit = s % 10;
        s = s / 10;
        printf("%d\n", digit);
    }
    return 0;

}
