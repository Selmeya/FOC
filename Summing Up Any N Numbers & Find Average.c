#include<stdio.h>
int main(){
  int n ,s,  Sum =0;
  printf("Enter the Nth term: ");
  scanf("%d",&n);
  printf("Enter the elements one by one: ");
  for(int  i=1; i<=n; ++i){
    scanf("%d",&s);
    Sum = Sum + s;
  }
  printf("The Sum is %d",Sum);
  printf("\n The Average is %d ",Sum/n);
  return 0;
  }
