/*Circular Queue*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int q[MAX], f=0, r=-1,count=0;

void insert(int item)
{
    if(count==MAX)
        printf("Queue is Overflow\n");
        //overflow = full
    else
    {
        r=(r+1)%MAX;
        q[r]=item;
        count=count+1;
    }
}

void delet()
{
    int itemdel;
    if(count==0)
        printf("Queue is Underflow\n");
        //underflow = empty
    else
    {
        printf("Deleted %d",q[f]);
        f=(f+1)%MAX;
        count=count-1;

    }
}

void display()
{
    int i,j;
    if(count==0)
        printf("Queue is Underflow\n");
    else
    {
        i=f;
        for(j=1; j<=count; j++)
        {
            printf("%d\t",q[i]);
            i=(i+1)%MAX;
        }
    }
}

void main()
{
    int ch, item, itemdel;

    while(1)
    {
        printf("\nEnter your choice:\n");
        printf("\n 1.Insert\n 2.Delete\n 3.Display\n 4.Exit\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: printf("\nEnter the item:\n");
                scanf("%d",&item);
                insert(item);
            break;

            case 2: delet();
            break;

            case 3: display();
            break;

            case 4: exit(0);
            default: printf("Enter a valid choice!\n");

        }
    }
}
