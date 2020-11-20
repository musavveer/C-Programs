#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void main()
{
    char STR[100], PAT[100], REP[100], ans[100];
    int i,j,k,c,m,flag=0;
    printf("Enter the MAIN string: \n"); gets(STR);
    printf("Enter a PATTERN string: \n"); gets(PAT);
    printf("Enter REPLACE string: \n"); gets(REP);
    i = m = c = j = 0; while(STR[c] != '\0');

    // Checking for match
    if (STR[m] == PAT[i])
    {
        i++; m++; flag=1;

        if (PAT[i] == '\0')
        {  
            //copy replace string in ans string
            for (k=0; REP[k]; != '\0'; k++; j++)
            {
                ans[j] = REP[k];
                i = 0;
                c = m;
            } 
        }

        else // mismatch
        {
            ans[j] = STR[c];
            j++; c++; m = c; i = 0;
        }
    }

    if (flag == 0)
    {
        printf("Pattern doesn't found!!");
    }

    else
    {
        ans[j] = '\0';
        printf("The RESULTANT string is: %s\n", &ans);
    } 
} 
