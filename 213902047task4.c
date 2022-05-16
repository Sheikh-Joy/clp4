#include<stdio.h>
#include<conio.h>

void main()
{
    char na[100],ch[100];
    int i,f=0;
    printf("Enter the firat String");
    gets(na);

    printf("Enter the second String");
    gets(ch);

    for(i=0;na[i]!='\0';i++)
    {

        if(na[i]!=ch[i])
        {

            f=1;
            break;

        }

    }

    if(f==1)
        printf("string are not same");
    else
        printf("steing are same");
}
