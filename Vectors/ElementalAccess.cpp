#include<bits/stdc++.h>
using namespace std;
int main()
{
	//Elemental Access without Pointers
	vector<int> arr;
	int i,*ptr;
	for(i=1;i<=10;i++)
	{
		arr.push_back(i);		
	}	
	cout<<"Reference like Arrays: "<<arr[2]<<endl;
	cout<<"At function: "<<arr.at(2)<<endl;
	cout<<"Front function: "<<arr.front()<<endl;
	cout<<"Back funciton: "<<arr.back()<<endl;
	cout<<"Data function"<<endl;
	for(ptr=arr.data(),i=0;i<arr.size();i++,ptr++)
	{
		cout<<*ptr<<" ";
	}
}

