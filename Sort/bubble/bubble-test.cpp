/*************************************************************************
	> File Name: bubble-test.cpp
	> Author: ylvis
	> Mail: ylvis1024@gmail.com 
	> Created Time: Fri Mar 13 19:39:58 2020
 ************************************************************************/

#include<iostream>
#include"bubble.h"
using namespace std;

int main(){
	int list[] = {8,1,3,2,5,4,7,6};
	int size = sizeof(list)/sizeof(int);

	bubbleSort(list, size);

	for (int i = 0; i < size; i++) {
		printf("%d\n",list[i]);
	}

	return 0;
}
