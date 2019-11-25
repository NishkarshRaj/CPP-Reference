#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> arr;
	int i,n,in,el,it;
	cout<<"Enter number of elements you want in vector: ";
	cin>>n;
	cout<<"Enter "<<n<<" elements: ";
	for(i=0;i<n;i++)
	{
		cin>>in;
		arr.push_back(in);
	}
	cout<<"Lets see the vector"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Enter element to be searched: "; //searches in [first,last) range
	cin>>el;
	it=find(arr.begin(),arr.end(),el); //returns pointer of pos if found else address of last element after the REAL last element!! Dont worry searches all elements
	if(it==arr.end())
	{
		cout<<"Element not found"<<endl;
	}
	else
	{
		cout<<"Element found at "<<it-arr.begin()<<" index"<<endl;
	}
}
