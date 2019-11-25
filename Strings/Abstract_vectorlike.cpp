#include<iostream>
#include<string.h> //header file for push_pop
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	cout<<s<<endl;
	s.pop_back();
	cout<<s<<endl;
	s.push_back('@'); //Insert character at last
	cout<<s<<endl;
}
