#include "stdio.h"
void quicksort(int [],int,int);
int position(int [],int,int);
int main() 
{
    int x[8]={10,3,90,11,2,77,34,100};
    int i;
    quicksort(x,0,7);
    for(i=0;i<8;i++)
        printf("%d ",x[i]);
    return 0;
}

void quicksort(int x[],int low,int up) 
{
    int p;
    if(low<up) 
	{
        p=position(x,low,up);
        quicksort(x,low,p-1);
        quicksort(x,p+1,up);
    }
}

int position(int x[],int low,int up) 
{
    int l=low,r=up,p=(l+r)/2;
    int temp;
    while(l<r) 
	{
        if(x[p]>x[r]) 
		{
            temp=x[p];
            x[p]=x[r];
            x[r]=temp;
            p=r;
        }
        else 
		{
            while(r>p && x[p]<x[r])
                r--;
        }
        if(x[p]<x[l]) 
		{
            temp=x[p];
            x[p]=x[l];
            x[l]=temp;
            p=l;
        }
        else 
		{
            while(l<p && x[p]>x[l])
                l++;
        }
    }
    return p;
}