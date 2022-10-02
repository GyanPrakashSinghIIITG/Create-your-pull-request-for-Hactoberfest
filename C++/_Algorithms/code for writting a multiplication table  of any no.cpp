#include <iostream>
using namespace std;

int main() {
	int n;
	cout<<"write a natural no. whose multiplicatin table you want."<<endl;
	cin>>n;
	
	for(int i=1;i<=10;i++) 
	{
	    cout<<n<< "*" <<i<< " = "<< n*i <<endl;
	}
	
	return 0;
}
