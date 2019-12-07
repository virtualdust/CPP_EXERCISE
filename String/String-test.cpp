/*************************************************************************
	> File Name: String-test.cpp
	> Author: ylvis
	> Mail: ylvis1024@gmail.com 
	> Created Time: 日 12/ 8 02:25:10 2019
 ************************************************************************/

#include<iostream>
#include "String.h"
using namespace std;

int main(){
	//before
	String s1;
	String s2("hello");
	cout << (void*)&(s1.get_c_str()[0]) << endl;
	cout << (void*)&(s2.get_c_str()[0]) << endl;

	//after assignment
	s1 = s2;
	cout << (void*)&(s1.get_c_str()[0]) << endl;
	cout << (void*)&(s2.get_c_str()[0]) << endl;
}

