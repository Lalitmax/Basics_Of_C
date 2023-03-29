#include<stdio.h>
void slice(char str[], int n, int m);
int main()
{
    char str[100];
    int n,m;
    scanf("%s", str);
    scanf("%d", &n);
    scanf("%d", &m);
    slice(str, n,m);
    return 0;
}
void slice(char str[], int n, int m)
{
    char sliced[100];
  int j=0;
    for(int i=n; i<=m; i++, j++)
    {
        sliced[j]=str[i];
    }
    sliced[j]='\0';
    puts(sliced);
}
