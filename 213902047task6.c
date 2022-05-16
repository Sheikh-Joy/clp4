#include<stdio.h>
#include<conio.h>

int main()
{
    char na[50];
    int i;
    printf("Entr any string");
    gets(na);

    for(i=0;na[i]!='\0';i++)
    {

        if(na[i]>65 && na[i]<=90)
        {


            na[i]=na[i]+32;


        }
        else if(na[i]>=97 && na[i]<=122)
        {


            na[i]=na[i]-32;


        }

    }

    printf("Converted string : %s",na);

    getch();
}
