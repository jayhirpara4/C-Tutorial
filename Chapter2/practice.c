#include<stdio.h>
        int main() {

            //even -> 1
            //odd -> 0
  
            int x;
            printf("enter a number : ");
            scanf("%d", &x);
            printf("%d \n", x % 2 == 0);

            int n;
            printf("Write the number : ");
            scanf("%d" , &n);
            printf("Your answer : %d", 9<n && n<100 );

        return 0;
}