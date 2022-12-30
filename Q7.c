#include<stdio.h>
int main()
{
    char name[20];
    int alp=0,num=0,sp=0;
    printf("\n Enter your Name=");
    gets(name);
    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]>=65 &&name[i]<=90 || name[i] >=97 && name[i]<=122)
        {
            alp++;
        }
        else if(name[i]=='0'||name[i]=='1'||name[i]=='2'||name[i]=='3'||name[i]=='4'||name[i]=='5'||name[i]=='6'||name[i]=='7'||name[i]=='8'||name[i]=='9')
        {
            num++;
        }
        else
        {
            sp++;
        }
    }
    printf("\n Total Number Of Alphabate=%d",alp);
    printf("\n Total Number Of Number=%d",num);
    printf("\n Total Number Of Special=%d",sp);
    return 0;
}