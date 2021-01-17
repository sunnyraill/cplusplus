#include<iostream>
#include "../include/temp.h"
using namespace std;

void testTemp(){
	Temprature *temp = new Temprature();
	temp->setTemp(100);
	cout << "temp in Celcius is " << temp->getTempInCelcius() << endl;
	cout << "temp in Farenheit is " << temp->getTempInFarenheit() << endl;
}

void swap(int& a, int& b){
	int temp = a;
	a=b;
	b=temp;
}

int main(){
	int i=0;
	cout << "Hello world\n";
	testTemp();

	int a = 10, b=14;
	cout << "a = " << a << "b = " << b << endl;
	swap(a,b);
	cout << "a = " << a << "b = " << b << endl;
	return 0;
}
