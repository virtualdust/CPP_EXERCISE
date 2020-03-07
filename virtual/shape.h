/*************************************************************************
	> File Name: shape.h
	> Author: ylvis
	> Mail: ylvis1024@gmail.com 
	> Created Time: Sat Mar  7 23:36:21 2020
 ************************************************************************/
#ifndef __SHAPE__
#define __SHAPE__ 
#include<iostream>
using namespace std;

class Shape{
	public:
		Shape();
		~Shape();
		virtual float GetArea() const = 0;
};

inline Shape::Shape(){}

inline Shape::~Shape(){}

#endif

