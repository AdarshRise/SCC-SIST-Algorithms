/*
#------------------------------EUCLIDIAN GCD -----------------------------------#
#                Euclid's algorithm, is an efficient method for computing them  # 
# greatest common divisor (GCD) of two numbers, the largest number that divides # 
# both of them without leaving a remainder algorithm that finds the position of #
# a target value within a sorted array	 									    #												    #
#-------------------------------------------------------------------------------#
*/
#include<iostream.h>
#include<conio.h>

int gcd(int a, int b) {
	if(a == 0)
		return b;
	return gcd(b % a,a);
}

int main() {
int a,b;
clrscr();
// taking inputs to find GCD
cout<<"Enter numbers to find GCD"<<endl;
cin>>a>>b;

if(a > b){
	cout<<gcd(b,a);
}
else{
	cout<<gcd(a,b);
}

getch();
return 0;
}