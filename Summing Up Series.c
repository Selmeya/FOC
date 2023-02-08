#include<stdio.h>
int main(){
 int i , s, sum =0;
 printf("Enter the Nth value: ");
 scanf("%d", &s);
 for(i=1;i<s;i++)
    printf("%d + ",i );
    printf("%d",s);
for( i=1 ;i<=s;i++)
    sum = sum +i;
    printf("\n Sum of N Numbers: %d ",sum);
return 0;
 }
