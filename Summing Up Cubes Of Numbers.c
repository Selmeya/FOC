#include<stdio.h>
int main(){
  int i, s, sum =0;
  printf("Enter the Nth term: ");
  scanf("%d",&s);
  for(i =1 ;i<=s;i++)
    printf("%d + ", i*i*i);
    sum = sum + i*i*i;
    printf("\n Sum of Cubes of N Numbers: %d",sum);
  return 0;
  }
