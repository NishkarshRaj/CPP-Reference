#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> arr;
	int i;
	for(i=0;i<10;i++)
	{
		arr.push_back(i);
	}
	cout<<"Lets see current Vector"<<endl;
	for(i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	//Emplace(pos,value) -> since pos does not take integer, only use begin as for end we have emplace back
	arr.emplace(arr.begin(),41);
	cout<<"Lets see current Vector after emplace"<<endl;
	for(i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	//emplace_back(value); only one option -> insertion at end similar to push back
	arr.emplace_back(31);
	cout<<"Lets see current Vector after back"<<endl;
	for(i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
}
