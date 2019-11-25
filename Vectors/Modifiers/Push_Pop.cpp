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
	cout<<"Popping three times"<<endl;
	arr.pop_back();
	arr.pop_back();
	arr.pop_back();
	for(i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<endl;
	}
}
