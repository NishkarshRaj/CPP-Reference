#include<iostream>
using namespace std;
//Object Oriented Hello World Code in C++
class Hello
{
	public:
	void show()
	{
		cout<<"Hello World";
	}
};
//Main Code
int main()
{
	/*Way 1: Access by pointer object using ->
	//Hello *h1 = new Hello;
	//h1->show();
	*/
	//Way 2: Access by normal object using .
	Hello h1;
	h1.show();
}
