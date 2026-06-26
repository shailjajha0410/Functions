#include <stdio.h>

void greeting(int n) {
    //if (n<=0)  return;
  
    printf("Good Morning\n");   // print message
    greeting(n - 1);            //segmentation fault
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    greeting(n);   // call the recursive function

    return 0;
}

//base case not mentioned
