#include<stdio.h>
int main(){
  int i , num ;
  printf("Enter the value of N: ");
  scanf("%d",&num);
  printf("The Number Series: ");
  for( i=1;i<=num; i++){
    printf("%d ",i);
  }
  return 0;
}
