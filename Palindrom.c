#include<stdio.h>
#include<string.h>
void main()
{
    char string[120];
    int i,length, count=0;
    scanf("%s",& string);
    length = strlen(string);
    printf("%d\n", length);
    for(i=0;i<length/2;i++)
    {
        if(string[i] == string[length-i-1])
            {
              count++;
            }
    }
        if (count=i) {printf("yes");}
        else printf("no");

}
