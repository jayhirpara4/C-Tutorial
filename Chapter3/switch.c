#include<stdio.h>

int main () {
    char day;
    printf("Enter the day : ");
    scanf("%s", &day);

    switch (day) {
        case 'mo' : printf("Monday \n");
        break;
        case 'tu' : printf("Tuesday \n");
        break;
        case 'we' : printf("Wednesday \n");
        break;
        case 'th' : printf("Thursday \n");
        break;
        case 'f' : printf("Friday \n");
        break;
        case 'sa' : printf("Saturday \n");
        break;
        case 'su' : printf("Sunday \n");
        break;
        default : printf("not a vaild day! \n");
    }
}