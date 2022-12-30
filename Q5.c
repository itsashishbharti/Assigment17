#include<stdio.h>
int main()
{
     char name[20];
    printf("\n Enter Your Name In Upper latter=");
    gets(name);
    for(int i=0;name[i]!='\0';i++)
    {
        printf("%c",name[i]+32);
    }
    return 0;
}