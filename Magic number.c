#include<stdio.h>

/*This program varifies a random magic number*/
int main(void)
{
    int magic,guess;
    magic = rand();

    printf("Guess the magic number :\n");
    scanf("%d",&guess);

    if(guess == magic )

    {
        printf("** RIGHT **\n");
        printf("%d is the magic number\n ",magic);
    }

    else if(guess>magic)
    {
        printf("wrong , too high\n");
        printf("%d is the magic number\n ",magic);
    }

    else
        printf("wrong, too low");

    return 0;
}
