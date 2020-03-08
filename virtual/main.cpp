/*************************************************************************
	> File Name: main.cpp
	> Author: ylvis
	> Mail: ylvis1024@gmail.com 
	> Created Time: Sat Mar  7 23:52:07 2020
 ************************************************************************/

#include<iostream>
#include "retangle.h"
#include "circle.h"

using namespace std;

int main(){
	Shape* retangle = new Retangle(3,2);
	std::cout << "Retangle's Area is "<< retangle->GetArea() << std::endl;
	Shape* circle = new Circle(3);
	std::cout << "Circle's Area is " << circle->GetArea() << std::endl;
	return 0;
}

