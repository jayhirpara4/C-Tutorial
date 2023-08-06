#include <stdio.h>
int main()
{
    // for loop
    for (int i = 1; i <= 100; i++)
    {
        printf("%d\n", i);
    }
    // while loop
    int i = 1;
    while (i <= 100)
    {
        printf("%d\n", i);
        i++;
    }
    // do while loop
    i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 100);
    return 0;

    // Theory //

    //increment operator
    //++i (pre increment)
    //i++ (post increment)

   // int i=1;
   // printf("%d \n", i++); // use, then increse
   // printf("%d \n", i);
   //
   // printf("%d \n", ++i); // increse, then use
   // printf("%d \n", i);


    //decrement operator
    //--i (pre decrement)
    //i-- (post decrement)

   // int i=1;
   // printf("%d \n", i--); // use, then decrement
   // printf("%d \n", i);
   //
   // printf("%d \n", --i); // decrement, then use
   // printf("%d \n", i);

}