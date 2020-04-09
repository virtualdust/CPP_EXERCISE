/*************************************************************************
	> File Name: select-test.cpp
	> Author: ylvis
	> Mail: ylvis1024@gmail.com 
	> Created Time: Fri Mar 13 22:48:37 2020
 ************************************************************************/

#include<iostream>
#include"select.h"
using namespace std;

int main(){
	int list[] = {2,1,3,5,4,9,6,8,10,7};
	int size = sizeof(list)/sizeof(int);
	selectSort(list, size);
	for (int i = 0; i < size; i++) {
		printf("%d\n", list[i]);
	}
	return 0;
}

