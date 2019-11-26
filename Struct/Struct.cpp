#include<iostream>
using namespace std;
struct person
{
	int ssn;
	string name;
	float salary;
};
int main()
{
	struct person p1;
	getline(cin,p1.name);
	fflush(stdin);
	cin>>p1.ssn>>p1.salary;
	cout<<p1.name<<" "<<p1.ssn<<" "<<p1.salary;
}
