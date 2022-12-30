#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    printf("\n Enter your Name=");
    gets(name);
    int c=strlen(name);
    char temp='\0';
   for(int i=0;i<c-1;i++)
   {
    for(int j=i;j<c;j++)
    {
        if(name[i]>name[j])
        {
            temp=name[j];
            name[j]=name[i];
            name[i]=temp;
        }
    }
   }
   printf("\n Sorted String=%s",name);
    return 0;
}