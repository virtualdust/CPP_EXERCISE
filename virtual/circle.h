/*************************************************************************
	> File Name: circle.h
	> Author: ylvis
	> Mail: ylvis1024@gmail.com 
	> Created Time: Sun Mar  8 00:07:44 2020
 ************************************************************************/
#ifndef __CIRCLE__
#define __CIRCLE__

#include<iostream>
#include "shape.h"
using namespace std;

const float PI = 3.14;

class Circle : public Shape {
	private:
		float radius;
	public:
		Circle(float r);
		~Circle();
		float GetArea() const;
};

inline Circle::Circle(float r)
: radius(r) {}

inline Circle::~Circle(){}

inline float Circle::GetArea() const {
	return radius * PI;
}

#endif
