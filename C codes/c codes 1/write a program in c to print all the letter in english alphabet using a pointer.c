#include<stdio.h>
int main()
{
char ch='Z';
char *ptrc =&ch;
for(  ptrc='A'; ptrc<=ch; ptrc++)
{
    printf("%c\t", ptrc);
}

return 0;

}
