#include<stdio.h>
int main()
{
    char name[20],has[125]={0};
    printf("\n Enter Your Name=");
    gets(name);
    for(int i=0;name[i]!='\0';i++)
    {
        has[name[i]]++;
    }
    printf("\n  Frequency of Characters............\n");
    for(int i=0;i<125;i++)
    {
        if(has[i]!=0)
        {
            printf("\n%c is %d ",i,has[i]);
        }
    }
    return 0;
}