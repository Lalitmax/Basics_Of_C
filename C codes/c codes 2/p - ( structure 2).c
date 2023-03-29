#include<stdio.h>

struct book
{
    int bookid;
    char titile;
    float price;
};

struct book input()
{
    struct book b;
    printf("enter bookid , title and price\n");
    scanf("%d",b.bookid);
  fflush(stdin);
    gets(b.titile);
    scanf("%f", b.price);
    return (b);
};
void display( struct book b)
{
    printf("\n %d  %s  %f ", b.bookid, b.titile, b.price);

}
void main()
{
    struct book b1;
   b1=input();

    display(b1);
    return 0;

}
