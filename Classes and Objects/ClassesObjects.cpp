#include<iostream>
using namespace std;
//Class Definition
class person
{
	string name;
	float salary;
	public:
		void show()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Salary: "<<salary<<endl;
		}
		void input()
		{
			cout<<"Enter Salary and name of Person: ";
			cin>>salary;
			//cin.ignore(); //Name should have been asked first logically but here we learn to clear stdin before taking strings after normal input
			fflush(stdin); //Both ways work but this is preferred for C and above only works for CPP
			cin>>name;
		}
};
//Driver Code
int main()
{
person p1;
p1.input();
p1.show();
}
