#include<stdio.h>
int add(int x, int y){
  return x+y;

}

int main(){
    int a;
  printf("Enter 1st no :");
  scanf("%d", &a);

  int b;
  printf("Enter 2nd no :");
  scanf("%d", &b);

  int sum = add(a,b);
  printf("Sum = %d\n", sum);
  
  
  return 0;

}
  
