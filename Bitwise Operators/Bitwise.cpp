#include<iostream>
using namespace std;
int main()
{
	cout<<"Bitwise Operators"<<endl;
	int a,b;
	a=2; //0010
	b=5; //0101
	//1. Bitwise And: All 1 then 1 else 0
	cout<<"Bitwise And: "<<(a&b)<<endl; //0000 -- 0
	//2. Bitwise Or: Atleast one 1 -> 1
	cout<<"Bitwise Or: "<<(a|b)<<endl; //0111 -- 7
	//3. Bitwise Not -> 1s complement ----> Gives perfect answer on 8 bits unsigned char initialization (5->00000101)
	cout<<"Bitwise Not of "<<a<<" is: "<<(~a)<<endl; //1101 -> 13
	cout<<"Bitwise Not of "<<b<<" is: "<<(~b)<<endl; //1010 -> 10
	//4. Bitwise XOR -> Exclusive OR (Probability Reference -> Two 1s implies 0) -> Odd 1 ==>1
	cout<<"Bitwise XOR: "<<(a^b)<<endl; //0111 7
	//5. Bitwise Left Shift!!! Points to left *2^k
	cout<<"Left Shift by 2: "<<(a<<2)<<endl;
	cout<<"Left Shift by 3: "<<(a<<3)<<endl;
	//6. Bitwise Right Shift
	cout<<"Right Shift by 2: "<<(a>>2)<<endl;
	cout<<"Right Shift by 3: "<<(a>>3)<<endl;
}
