#include<stdio.h>

        int main() {
    //    int age;
    //    printf("Enter the age : ");
    //    scanf("%d", &age);
    //    if(age >= 18) {
    //    printf("you are an adult");
    //    }
    //    else {
    //    printf("you are not an adult");
    //    }

  /*      int age1;
        printf("Enter age : ");
        scanf("%d", &age1);
        if(age1 <= 12) {
        printf("child");
        }
        else if(age1 < 18 && age1 > 12) {
        printf("teenager");
        }
        else {
        printf("adult");
        } */

        int number;
        printf("Enter the number : ");
        scanf("%d", &number);

        if (number >= 0)
        {
            printf("Positive \n");
            if (number % 2 == 0)
            {
                printf("Even \n");
            } else {
                printf("Odd \n");
            }
            
        } else {
            printf("Negative \n");
        }
        

    return 0;
}