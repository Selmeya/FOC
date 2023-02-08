#include<stdio.h>
int main(){
  int i , s;
  printf("Enter the Nth term: ");
  scanf("%d" , &s);
  printf("The Odd Number Series: ");
  for( i=1; i<=s; i++){
    if ( i%2!=0)
        printf("%d ",i);
  }
  return 0;
}
