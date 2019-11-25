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
	//Insert(Index,value);
	//Here, we use 2nd index!! 
	// 0 1 41 2 (Insert at 2nd Index expected)
	//arr.insert(2,41) does not works :(
	arr.insert(arr.begin(),41);
	for(i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<endl;
	}
}

