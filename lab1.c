#include<stdio.h>
#include<stdlib.h>


int a[20], b[20], c[40];
int m,n,p,val,i,j,key,pos,temp;
void Create();
void Display();
void Insert();
void Del();

int main()
{
	int choice;
	do
	{
		printf("\n...Menu...\n");
		printf("1.Create\n");
		printf("2.Display\n");
		printf("3.Insert\n");
		printf("4.Delete\n");
		printf("5.Exit\n");
		printf("......\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1: Create();
			break;
		case 2: Display();
			break;
		case 3: Insert();
			break;
		case 4: Del();
			break;
		case 5: exit(0);
			break;
		default: printf("\n Invalid Choice!\n");
			break;	
		}	
	}while(choice!=5);
}


void Create()
{
	printf("\nEnter the size of array elements:\n");
	scanf("%d",&n);
	printf("\nEnter the elements for the array: \n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
}


void Display()
{
	int i;
	printf("\nThe array elements are: ");
	for(i=0; i<n; i++);
	{
		printf("%d",&a[i]);
	}
}


void Insert()
{
	printf("\nEnter the position for the new elements: ");
	scanf("%d",&pos);
	if (pos>=n+1)
	{
		printf("Invalid Position!");
	}
	else
	{
		printf("\nEnter the elements to be inserted: ");
		scanf("%d",&val);
		for(i=n-1; i>=pos; i--)
		{
			a[i+1]=a[i];
		}
		a[pos]=val;
		n=n+1;
	}
}


void Del()
{
	printf("\nEnter the position of the element to be deleted: ");
	scanf("%d",&pos);
	val=a[pos];
	for(i=pos; i<=n-1; i++)
	{
		a[i]=a[i+1];
	}
	n=n-1;
	printf("\nThe deleted element is %d",&val);
}