/*************************************************************************
	> File Name: complex.h
	> Author: ylvis
	> Mail: ylvis1024@gmail.com 
	> Created Time: 四 12/ 5 23:43:26 2019
 ************************************************************************/

#ifndef __COMPLEX__
#define __COMPLEX__
class complex{
	public:
		complex(double r = 0, double i = 0)
			: re(r), im(i)
		{ }
		complex& operator += (const complex&);

		double real() const {return re;}
		double imag() const {return im;}

	private:
		double re, im;

	friend complex& __doapl(complex*, const complex&);
};


inline complex& 
__doapl(complex* t1, const complex& t2){
	t1->re += t2.re;
	t1->im += t2.im;
	return *t1;
}

inline complex& 
complex::operator += (const complex& t){
	return __doapl(this, t);
}


#endif
