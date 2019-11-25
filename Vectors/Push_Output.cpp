#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> arr; //Inbuilt Template
	//Vectors-> Insertion at end
	//Vectors-> Deletion at end
	int i;
	//Insertion using the push_back function
	for(i=0;i<=10;i=i+2)
	{
		arr.push_back(i);
	}
	//View vector using begin and end
	//auto keyword is necessary for initialization
	//In condition its not equals rather than less than equal which shows pointer comparision like Linked List
	//++i and i++ both work
	//starts from first element to theoretical last element after last element
	cout << "Output of begin and end: "; 
    for (auto i = arr.begin(); i != arr.end(); i++) 
        cout << *i << " "; 
        cout<<endl;
    cout << "Output of cbegin and cend: "; 
    for (auto i = arr.cbegin(); i != arr.cend(); i++) 
        cout << *i << " "; 
        cout<<endl;
    cout<<"Output for rbegin and rend: ";
    //Starts from last element to preceding first element
    //Still since pointer-> i++ not --
    for (auto i = arr.rbegin(); i != arr.rend(); i++) 
        cout << *i << " "; 
        cout<<endl;
    cout<<"Output for crbegin and crend: ";
    for (auto i = arr.crbegin(); i != arr.crend(); i++) 
        cout << *i << " "; 
        cout<<endl;
}
