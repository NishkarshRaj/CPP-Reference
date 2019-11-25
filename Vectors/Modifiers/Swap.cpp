#include<bits/stdc++.h>
using namespace std;
int main()
{
	//Swap!!!
	//1) Must be same type of vector
	//2) Can be of different size, entire vector changes
	vector<int> arr1,arr2;
	int i;
	for(i=0;i<10;i++)
	{
		arr1.push_back(i);
	}
	for(i=1;i<300;i+=6)
	{
		arr2.push_back(i);
	}
	arr1.swap(arr2); //arr2.swap(arr1) will also work
	//Display Array 2
	//cout<<arr2; //NOT ALLOWED
	for(i=0;i<arr2.size();i++)
	{
		cout<<arr2[i]<<" ";
	}
}
