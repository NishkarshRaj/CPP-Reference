#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	float el;
	vector<float> arr;
	cout<<"Enter the number of elements: ";
	cin>>n;
	cout<<"Enter "<<n<<" elements: ";
	for(i=0;i<n;i++)
	{
		cin>>el;
		arr.push_back(el);
	}
	//Sort
	sort(arr.begin(),arr.end());
	//
	cout<<"Output:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
