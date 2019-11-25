#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> arr;
	int i;
	for(i=0;i<=120;i+=3)
	{
		arr.push_back(i);
	}
	//Current allocation
	cout<<"Size of Array: "<<arr.size()<<endl;
	//Theoretical Maximum
	cout<<"Maximum Size of Array: "<<arr.max_size()<<endl;
	//Max size currently allocated
	cout<<"Capacity of Array: "<<arr.capacity()<<endl;
	cout<<"Is Array empty???: "<<arr.empty()<<endl;
	
	///////Resize -> Size -> Shrink to fit!!
	///Resize shifts end pointer but does not delete-> Shrink to fit deletes it!!!
	arr.resize(30);
	//After resize-> all members of vector after it becomes inaccessible but still are present in memory
	cout<<"Size of Array: "<<arr.size()<<endl;
	cout<<"Capacity of Array: "<<arr.capacity()<<endl;
	arr.shrink_to_fit();
	//After shrink to fit-> Inaccessible elements get deleted and capacity becomes same as size
	cout<<"Size of Array: "<<arr.size()<<endl;
	cout<<"Capacity of Array: "<<arr.capacity()<<endl;
}
