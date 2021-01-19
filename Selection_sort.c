#include<stdio.h>
#define SWAP(x,y,temp) (temp=x, x=y, y=temp)

//function to sort n numbers
void selection_sort(int n, int a[])
{
    int i,j,pos,temp;

    for(i=0; i<n-1;i++)
    {
        pos = i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[pos])pos=j;
        }
        SWAP(a[i],a[pos],temp);
    }
}

void main()
{
    int n,i, a[20];

    printf("Enter the number of items: ");
    scanf("%d",&n);

    printf("\nEnter the items to sort:\n");
    for(i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
    }

    //sort the n elements
    selection_sort(n,a);
    printf("\nThe sorted items are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }    
}
