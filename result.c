#include<stdio.h>

//This program will print your result in grade

int main()
{
    int marks;
    printf("Enter your number: ");
    scanf("%d",&marks);
    switch(marks/5)
    case 20:
case 19:
case 18:
case 17:
case 16:
{
    printf("Your result is: A+");
    break;
    case 15:
        printf("Your result is: A");
        break;
    case 14:
        printf("Your result is: A-");
        break;
    case 13:
        printf("Your result is: B+");
        break;
    case 12:
        printf("Your result is: B");
        break;
    case 11:
        printf("Your result is: B-");
        break;
    case 10:
        printf("Your result is: C+");
        break;
    case 9:
        printf("Your result is: C");
        break;
    case 8:
        printf("Your result is: D");
        break;

    default :
        printf("Your result is: F");
    }
    return 0;

}
