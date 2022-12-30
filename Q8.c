#include<stdio.h>
int main()
{
    char name[20],name1[20];
    printf("\n Enter Your Name=");
    gets(name);
    int i=0;
    while(name[i]!='\0')
    {
        name1[i]=name[i];
        i++;
    }
    printf("\n Coppy in Name1=%s",name1);
    return 0;
}