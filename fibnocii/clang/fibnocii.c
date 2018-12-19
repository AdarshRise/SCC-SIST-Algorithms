
#include<conio.h>
#include<stdio.h>

void fibo()
{ long input=0,num1=0,num2=1,i=0; // giving default values

  printf(" Enter the limit for the number of output from the series:- ");
  scanf("%ld",&input);
  for(i=0;i<input;i++)
  {
    printf(" num%ld : %ld ",i+1,num1+num2); // Printing next number

    num1=num1+num2;       //   moving to the next number by swap
    num2=num1-num2;
    num1=num1-num2;

    num2= num1+num2;     //   new value updated
  }
}

void main()
{
  fibo();       // Fibo Fucntion call
  getch();
}
