#include<stdio.h>
#include<math.h>

move(int n,char source,char dest,char spare);
main()
{
    int n;
    printf("Enter the number of discs: ");
    scanf("%d",&n);
    move(n,'A','C','B');
    printf("\nTotal number of moves are: %d",(int)pow(2,n)-1);
    return;
}
move(int n,char source,char dest,char spare)
{
    if(n==1)
        printf("Move from peg %c to %c\n",source,dest);
    else
    {
        move(n-1,source,spare,dest);
        move(1,source,dest,spare);
        move(n-1,spare,dest,source);
    }
}