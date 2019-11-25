#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"Generic Vector Insertion and Output";
	int i,n,el;
	vector<int> arr;
	cout<<"Enter the number of elements: ";
	cin>>n;
	//We can cin one variable multiple times !!!BCD!!!
	for(i=0;i<n;i++)
	{
		cin>>el;
		arr.push_back(el);
	}
	cout<<"Output:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
