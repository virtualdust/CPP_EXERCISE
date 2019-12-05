#include"complex.h"
#include<iostream>
using namespace std;

int main(){
	complex* c1 = new complex(3,2);
	const complex c2;
	cout << "BY---OPERATOR+=" << endl;
	cout << "real:" << (*c1 += c2).real() << endl;
    cout<< "image:" << (*c1 += c2).imag() << endl;

	cout << "BY---DOAPL()---" << endl;
	cout << "real:" << __doapl(c1, c2).real() <<endl;
	cout << "imag:" << __doapl(c1, c2).imag() << endl;
	return 0;
}
