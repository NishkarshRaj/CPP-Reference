#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> arr;
	int i;
	for(i=0;i<10;++i)
	{
		arr.push_back(i);
	}
	cout<<"Displaying current Vector"<<endl;
	for(i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<endl;
	}
	arr[5]=41; //Modification is allowed as if a normal array
	for(i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<endl;
	}
}
