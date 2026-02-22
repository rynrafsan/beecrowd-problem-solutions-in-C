#include<stdio.h>
int main()
{
    int n,p,q,temp;
    char ch;
    scanf("%d %d %c %d",&n,&p,&ch,&q);

    switch(ch)
    {
    case '+':
        if(p+q>n)
            printf("OVERFLOW\n");
        else
            printf("OK\n");
        break;

    case '*':
        if(p*q>n)
            printf("OVERFLOW\n");
        else
            printf("OK\n");
        break;
    }

    return 0;
}
