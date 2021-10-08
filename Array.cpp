#include<bits/stdc++.h>
using namespace std;

int main()
{
int a[50],i,n,large,small;
cout << “\nEnter the number of elements : “;
cin >> n;
cout << “\nInput the array elements : “;
for(i=0;i<n;++i)
cin >> a[i];

sort(a,a+n);

cout << “\nThe smallest element is ” << a[0] << endl;
cout << “\nThe largest element is ” << a[n-1] << endl;

return 0;
}
