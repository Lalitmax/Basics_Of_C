 char* reverse(char*);

 main()
{
    reverse("computer");
    printf("%s",reverse("computer"));

return 0;
}
char* reverse(char *p)
{

    int l,i;
    char ch;
    for(l=0; *(p+i)!='\0'; l++)
        for(i=0; i<l/2; i++)
    {
        ch=*(p+i);
        *(p+i)=*(p+l-1-i);
        *(p+l-1-i) =ch;
    }
    return(p);
}
