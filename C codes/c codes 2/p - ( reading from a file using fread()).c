#include<stdio.h>
struct book
{
    int bookid;
    char titile[20];
    float price;
};
void main()
{
    struct book b1;
    FILE *fp;
    fp= fopen("myfile.dat", "rb");
    if(fp==0)
    {
        printf("file not found ");
        exit(1);
    }
    fread(&b1, sizeof(b1), 1, fp);

    printf(" %d  \n %s   \n %f", b1.bookid, b1.titile, b1.price);

    fclose(fp);

}
