#include<stdio.h>
int main()
{ int size=20;
    char name[20];
    printf("\n Name=");
    gets(name);
     int c=0;
     for(int i=0;name[i]!='\0';i++)
    {
        c++;
    }
    printf("\nLenth of String=%d",c);
    return 0;
}