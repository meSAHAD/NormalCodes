
#include <stdio.h>
//#include <ctype.h>
void print_upper(char *string);
int main(void)
{
 char s[80];
 printf("Enter a string: ");
 gets(s);
 print_upper(s);
 printf("\ns is now uppercase: %s", s);
 return 0;
}
/* Print a string in uppercase. */
void print_upper(char *string)
{
 register int t;
 for(t=0; string[t]; ++t) {
 string[t] = toupper(string
[t]);
 putchar(string[t]);
 }
}
