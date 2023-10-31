#include "calc.h"
#include <algorithm>
#include <cstdio>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void operation() {
	calc::Operation opr{};
	//while(true) {
	cout<<"CHOOSE A OPERATION:"<<endl;
	cout<<"ADDITION | MINUS | DIVISION | MULTIPLICATION"<<endl<<endl;
	cout<<"ENTER A QUIT TO EXIT CALCULATOR"<<endl;
	scanf("%d",&opr);
	switch (opr) {
			
			case calc::Addition: calc::add();break;
			case calc::Minus: calc::minus();break;
			case calc::Division: calc::devide();break;
			case calc::Multiplication: calc::multiple();break;
			case calc::QUIT: calc::quit();break;				   
				
	
	}
	
}
int main() {
	operation();
	return 0;
}
Word calc::add() {
	cout<<"Enter a variables to Add: ";
	long long x{},sum{0};
	while(cin>>x) {
		sum += x;
	}
	cout<<"Sum of this elements is: "<<sum<<endl;
	return sum;
}
Word calc::minus() {
	cout<<"Enter a variables to Add: ";
	long long x{},sum{0};
	while(cin>>x) {
		sum -= x;
	}
	cout<<"Minus of this elements is: "<<sum<<endl;
	return sum;
}
Word calc::devide() {
	double x{},y{};
	cout<<"Enter a two number: ";
	cin>>x>>y;
	cout<<"Answear is: "<<x/y;
	
}
Word calc::multiple() {
	long long x{},sum{};
	cout<<"Enter a numbers: ";
	while (cin>>x) {
		sum *=x;
	}
	cout<<"Answear is: "<<sum;
	

}
