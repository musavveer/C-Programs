#include<stdio.h>
#define MAX 5

int st[MAX],top=-1,status=0,count;

void push(int st[],int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);
void palindrome(int st[]);

void main()
{
    int val,option;
    do
    {
        printf("\n...MENU...");
        printf("\n1.PUSH");
        printf("\n2.POP");
        printf("\n3.PEEK");
        printf("\n4.DISPLAY");
        printf("\n5.PALINDROME");
        printf("\nEXIT");
        printf("\n.......");
        printf("\nEnter your option: ");
        scanf("%d", &option);

        switch(option)
        {
        case 1: printf("\nEnter the number to push: ");
                scanf("%d",&val);
                push(st,val);
                display(st);
            break;

        case 2: val=pop(st);
                if(val!=-1)
                printf("\nDeleted value is %d",val);
                display(st);
            break;

        case 3: val=peek(st);
            if (val!=-1)
            {
                printf("Top of stack:%d",val);
            }
            break;

        case 4: display(st);
            break;

        case 5: palindrome(st);
            break;

        case 6: exit(0);
            break;            

         //default:
            //break;
        }
    } while (option!=6);
    return;
}

// defining functions

void push(int st[], int val)
{
    if(top==MAX-1)
    {
        printf("\nSTACK OVERFLOW");
    }
    else
    {
        top++;
        st[top]=val;
        status++;
    }   
}

int pop(int st[])
{
    int val;
    if(top==-1)
    {
        printf("\nSTACK UNDERFLOW");
        return-1;
    }
    else
    {
        val=st[top];
        top--;
        status--;
        return val;
    }
}

void display(int st[])
{
    int i;
    if(top==-1)
    {
        printf("\nSTACK IS EMPTY");
    }
    else
    {
        printf("\nThe stack contents are:");
        for (i=top; i>=0; i--)
        {
            printf("\n%d\n",st[i]);
        }  
    }
}

int peek(int st[])
{
    if(top==-1)
    {
        printf("\nSTACK IS EMPTY");
        return-1;
    }
    else
    {
        return(st[top]);
    }
}

void palindrome(int st[])
{
    int i,temp;
    temp=status;
    for (i=0; i<temp; i++)
    {
        if (st[i]==pop(st))
        count++;
    }
        if (temp==count)
        printf("\nStack contents are Palindrome");
        
        else
        printf("\nStack contents are not Palindrome");
    
}

