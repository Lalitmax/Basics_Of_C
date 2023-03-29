enum boolean
{
    false , true
};
enum boolean iseven(int x)
{
    if(x/2 == 0)
        return(true);
    else
        return(false);
};
int  main()
{
    int n;
    enum boolean result;
    printf("enter a number\n ");
    scanf("%d", &n);
    result=iseven(n);
    if (result ==true)
    printf("even number\n");
    else
        printf("odd number\n");
        return 0;
}

