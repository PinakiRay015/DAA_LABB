#include<stdio.h>
int main()
{
    int display[100][100];
    int first_array[100][100];
    int second_array[100][100];
    int multiplication_array[100][100];
    int a,b,r,c,choice;
    printf("Enter the number of rows :-");
    scanf("%d",&r);
    printf("Enter the number of columns :-");
    scanf("%d",&c);
    while(1)
    {
    printf("enter the value of first array\n");
    for(a=0;a<r;a++)
    {
        for(b=0;b<c;b++)
        {
            printf("[%d][%d]",a,b);
            scanf("%d",&first_array[a][b]);
        }
    }
      printf("enter the value of second array\n");
    for(a=0;a<r;a++)
    {
        for(b=0;b<c;b++)
        {
            printf("[%d][%d]",a,b);
            scanf("%d",&second_array[a][b]);
        }
    }
    printf("multiplication of array:-\n");
    for(a=0;a<r;a++)
    {
        for(b=0;b<c;b++)
        {
            multiplication_array[a][b]=first_array[a][b]*second_array[a][b];
            printf("%d\t",multiplication_array[a][b]);
        }
        printf("\n");
    }
    }
    return 0;
}
