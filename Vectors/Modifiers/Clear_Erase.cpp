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
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	//arr.erase(2); does not work as no interger input takes address
	arr.erase(arr.begin());
	cout<<"Displaying current Vector"<<endl;
	for(i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	//Delete entire array
	arr.clear();
	cout<<"After clearing, Size of vector: "<<arr.size()<<endl;
}

