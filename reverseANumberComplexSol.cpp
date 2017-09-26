/* 
Author: Rishabh(rishabhbohra10@gmail.com)
Language: C++11
Statement: Program to reverse a number complex approach.
*/



#include<iostream>

using namespace std;
int main()
{
	
	int num, rev=0, rem;
	cout<<" Enter a number : ";
	cin>>num;
	
	// A variable that keeps track of trailing zeros before 1 non zero element is found.
	int trailingZeros = 0; 
	
	//if atleast one non zero number is found, make brk = true.
	bool brk = false;
	
	while(num!=0)
	{ 
		rem=num%10;
		if (rem == 0 && !brk){
		  ++trailingZeros;
		}
	  else{
	    brk = true;
	  }
		rev=rev*10+rem;
		num=num/10;
	}
	cout<<"Reverse = ";
	for(int i=1;i<=trailingZeros;++i)
	  cout<<"0";
	  
	cout<< rev;
	
	return 0;
	
}
