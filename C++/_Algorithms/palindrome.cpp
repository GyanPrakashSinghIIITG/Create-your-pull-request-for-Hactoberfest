#include<iostream>
using namespace std;
int main(){
	int a,b,c,rev=0;
	
	cout<<"Enter the positive integer: ";
	cin>>a;
	b=a;
	
	do{
		c=a%10;
		rev=rev*10+c;
		a=a/10;
		
	}while(a!=0);
	
	cout<<"The reverse of "<<b<<"is"<<rev<<endl;
	
	if(b==rev)
		cout<<"The number is palindrome";
	else
		cout<<"The number is not a palindrome";
		
	return 0 ;
		
	
}
