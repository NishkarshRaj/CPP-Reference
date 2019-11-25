#include<iostream>
using namespace std;
int main()
{
	string s1,s2;
	/*cin>>s1; //Upto first space
	getline(cin,s2); //Upto \0
	cout<<s1<<endl;
	cout<<s2<<endl;
	*/
	//Problem: If s1 has space followed by words, they are auto sent as input to next insertion but suppose followed up by a int -> give exception
	//Need to flush if simple cin is taken as input else segmentation core dump type exception
	cin>>s1; //Upto first space
	fflush(stdin); //fflush any remaining stuff including enter key from stdin
	getline(cin,s2); //Upto \0
	cout<<s1<<endl;
	cout<<s2<<endl;
}
