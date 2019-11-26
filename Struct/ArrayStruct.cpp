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
	int i;
	struct person p1[5]; //Array of structures
	for(i=0;i<5;i++)
	{
		getline(cin,p1[i].name);
		fflush(stdin);
		cin>>p1[i].ssn>>p1[i].salary;
		cout<<p1[i].name<<" "<<p1[i].ssn<<" "<<p1[i].salary;
	}
}
