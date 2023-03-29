#include<stdio.h>
struct book
{int bookid;
char title[20];
float  price;
};
int main()
{
    struct book b1;
    FILE *fp;
    fp=fopen("myfile.mal", "wb");
    printf("enter bookid, title , price\n");
    scanf("%d", &b1.bookid);
    fflush(stdin);
    gets(b1.title);
    scanf("%f",&b1.price);
    fwrite(&b1,sizeof(b1),1,fp);
    fclose(fp);
}
