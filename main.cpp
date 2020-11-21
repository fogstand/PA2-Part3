#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
 int myatoi(string s)
 {
 	int num=0;
 	int flag=0;
 	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='0' && s[i]<='9')  //here we gaurentee that the character is digit by checking its ascii value
		{
			//In the line below (num*10) increases the number of places in number & then (s[i]-'0' ) adds the ascii value of the next digit to number
			num=(num*10) +(s[i]-'0');  
			
		}
		else
		{   // if any character is not digit we stop processing
		  flag=1;
		  break;
		}
		
	}
	if(flag==1)
	   num=-1;
	return num;
 }

int main()
{
	string s;
	int flag=0;

	cout<<"Enter String";
	cin>>s;
	int number=myatoi(s);

	if(number==-1)
	  std::cerr<<"error while conveting ";
	
	else
	  cout<<number;
	

}

/*
	int n=123, r,re=0;
	while(n>0)
	{
		r=n%10;
		re=(re*10)+r;
		n=n/10;
		
	}
	cout<<re;
	*/
