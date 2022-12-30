#include<stdio.h>
int main()
{ 
    int size=20;
    char name[20];
    char vowel[]={'a','A','e','E','i','I','o','O','u','U'};
    printf("\n Name=");
    gets(name);
     int c=0;
     for(int i=0;name[i]!='\0';i++)
    {
        for(int j=0;j<10;j++)
        {
        if(name[i]==vowel[j])
        {
            c++;
        }
         }
    }
    printf("\nTotal Vowel In String %s is %d",name,c);
    return 0;
}