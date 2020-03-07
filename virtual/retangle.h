/*************************************************************************
	> File Name: retangle.h
	> Author: ylvis
	> Mail: ylvis1024@gmail.com 
	> Created Time: Sat Mar  7 23:42:55 2020
 ************************************************************************/

#ifndef __RETANGLE__
#define __RETANGLE__

#include<iostream>
#include "shape.h"
using namespace std;

class Retangle : public Shape {
	private:
		float width;
		float length;
	public:
		Retangle(float wid, float len);
		~Retangle();
		float GetArea() const;
};

inline Retangle::Retangle(float wid, float len)
:width(wid), length(len){}

inline Retangle::~Retangle(){}

inline float Retangle::GetArea() const {
	return width * length;
}

#endif

