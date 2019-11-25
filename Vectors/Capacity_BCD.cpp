#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> arr;
	int i;
	for(i=1;i<=300;i+=3)
	{
		arr.push_back(i);
	}
	cout<<"Size of Array: "<<arr.size()<<endl;
	cout<<"Capacity of Array: "<<arr.capacity()<<endl;
	//Can Shrink to fit work without resize!!
	//I want that capacity becomes equal to size of array
	arr.shrink_to_fit();
	cout<<"Size of Array: "<<arr.size()<<endl;
	cout<<"Capacity of Array: "<<arr.capacity()<<endl;
	//Yes it does!!! Shrink to fit does not necessarily follows resize!! In general it equals the capacity to size of vector to optimize space complexity
	
	//MORE BCD!!! If I add more elements to the vector-> What will be size and the capacity
	arr.push_back(41);
	cout<<"Size of Array: "<<arr.size()<<endl;
	cout<<"Capacity of Array: "<<arr.capacity()<<endl;
	//Unexpected result!! According to current program -> size=101 and capacity=200 -> niether same nor 2^n
	
	//Further Testing
	for(i=300;i<597;i+=3)
	{
		arr.push_back(i);
	}
	cout<<"Size of Array: "<<arr.size()<<endl;
	cout<<"Capacity of Array: "<<arr.capacity()<<endl;
	//Concept clearing successful!!!
	//General Points to be noted
	/*
	1) Initially capacity = least max(2^n) > size
	2) After shrink to fit -> capacity = size
	3) After shrink to fit another push happens!!!
	capacity = size * 2 then push!!
	until size <= capacity -> capacity remains same {LESS THAN """"EQUALS"""" TO}
	else capacity = capacity*2;
	*/
}
