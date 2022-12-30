#include<stdio.h>
int main()
{
    char name[20];
    char a1;
    printf("\nEnter your Name=");
    gets(name);
    printf("\nEnter Your Occurrence character=");
    scanf("%c",&a1);
    int c=0;
    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]==a1)
        {
            c++;
        }
    }
    printf("\n Occurrence of %c in String %s  is %d.",a1,name,c);
    return 0;
}