// add your code here

#include<iostream>
using namespace std;

void fibo()
{ long input=0,num1=0,num2=1,i=0; // giving default values

  cout<<" Enter the limit for the number of output from the series:- ";
  cin>>input;
  for(i=0;i<input;i++)
  {
    cout<<"n"<<i+1<<"."<<num1+num2<<" "; // Printing next number

    num1=num1+num2;       // next number pair without temp
    num2=num1-num2;
    num1=num1-num2;
  }
}

int main(void)
{
  fibo();       // Fibo Fucntion call
  return 0;
}
