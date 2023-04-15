#include<stdio.h>

int main()
{
    int num;
    printf("Enter your number: ");
    scanf("&d",&num);
    printf("Your result is: ");
    if (num>79)
        printf("A+");
    else if (num>75&&num<80)
        printf("A");
    else if(num>69&&num<75)
        printf("A-");
    else if(num>65&&num<70)
        printf("B+");
    else if(num>59&&num<65)
        printf("B");
    else if(num>55&&num<60)
        printf("B-");
    else if(num>49&&num<55)
        printf("C+");
    else if(num>45&&num<50)
        printf("C");
    else if(num>39&&num<45)
        printf("C-");
    else if(num>32&&num<40)
        printf("D");
    else
        printf("F");
    return 0;

}
