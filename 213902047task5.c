#include<stdio.h>
#include<conio.h>

int main()
{
    char na[50],co[50];
    int i,j=0;
    printf("Enter any Number");
    gets(na);

    for(i=0;na[i]!='\0';i++)
    {

        co[j++]=na[i];

    }

    co[j++]='\0';
    printf("copy of string %s",co);

    getch();
}
