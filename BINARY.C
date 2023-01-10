#include<stdio.h>
#include<conio.h>

void main()
{       int n,i=0,a[100];
 clrscr();


  printf("\n Enter a number");
    scanf("%d",&n);

   do{
    printf("2|%-5d   -->%-2d",n,n%2);
    printf("\n |_____\n");

    a[i]=n%2;
    i=i+1;
    n=n/2;

    } while(n>=1);

    n=i;

    a[n]=1;

    printf("\n\n");

    for(i=n;i>=0;i=i-1)
    {
     printf("%d ",a[i]);
    }

    getch();

    }