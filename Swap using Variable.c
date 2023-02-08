#include<stdio.h>
int main(){
  int s , e, sel;
  printf("A = ");
  scanf("%d",&s);
  printf("B = ");
  scanf("%d",&e);
  printf("\n \t \t Before Swapping");
  printf("\nA= %d",s);
  printf("\nB= %d",e);
  printf("\n \t \t After Swapping");
  sel =s;
  s = e;
  e =sel;
  printf("\nA= %d",s);
  printf("\nB= %d",e);
  return 0;
  }
