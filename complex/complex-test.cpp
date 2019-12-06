#include"complex.h"
#include<iostream>
using namespace std;

int main(){
	complex* c1 = new complex(3,2);
	complex c2;
	cout << "BY---OPERATOR+=" << endl;
	cout << "real:" << (*c1 += c2).real() << endl;
    cout<< "image:" << (*c1 += c2).imag() << endl;

	cout << "BY---DOAPL()---" << endl;
	cout << "real:" << __doapl(c1, c2).real() <<endl;
	cout << "imag:" << __doapl(c1, c2).imag() << endl;

	complex c3(233, -1); 
	cout << c3 << c2 << *c1 << endl;


	cout << (*c1 == c2) << endl; //false

	complex c4(233, -1);

	cout << (c3 == c4) << endl; //true


	return 0;
}
