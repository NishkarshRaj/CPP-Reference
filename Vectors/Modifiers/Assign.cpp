#include<bits/stdc++.h>
using namespace std;
int main()
{
	//Assign is an advanced push_back function which pushes back n iterations of same value at back
	//vector.assign(number of times, value);
	vector<int> arr;
	int i;
	arr.assign(2,8);
	for(i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<endl;
	}
	arr.assign(3,5);
	for(i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<endl;
	}
}
