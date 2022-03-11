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
    printf("1-> Display\n");
    printf("2-> Multiplication\n");
    printf("enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
     case 1:   
    for(a=0;a<r;a++)
    {
        for(b=0;b<c;b++)
        {
            printf("enter the element of array to display[%d][%d] :",a,b);
            scanf("%d",&display[a][b]);
        }
    }
    printf("the 2d array :-\n");
    for(a=0;a<r;a++)
    {
        for(b=0;b<c;b++)
        {
            printf("%d\t",display[a][b]);
            if(b==c-1)
            {
                printf("\n");
            }
        }
    }
    break;
    

    case 2:
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
    break;
    default :
    printf("INVALID CHOICE!!!\nlease choose among the above option");
    }
    return 0;
}
