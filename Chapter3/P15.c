#include<stdio.h>

// Print the Sum of First n Natural Number,

int main () {
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;  // sum += i;
    }

    printf(" Sum is %d", sum);

    for (int i = n; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    // with both

    for (int i=1, j=n; i<=n && j>=1; i++, j--)
    {
        sum = sum + i;  // sum += i;
        printf("%d\n", j);
    }
    
    printf(" Sum is %d \n", sum);
    
}