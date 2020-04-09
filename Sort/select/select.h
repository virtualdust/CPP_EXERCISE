/*************************************************************************
	> File Name: select.h
	> Author: ylvis
	> Mail: ylvis1024@gmail.com 
	> Created Time: Fri Mar 13 22:41:45 2020
 ************************************************************************/
#ifndef __SELECT__
#define __SELECT__

#include<iostream>
using namespace std;

void selectSort(int* list, int size) {
	for(int i = 0; i < size; i++) {
		int min = i;
		for (int j = i+1; j < size; j++) {
			if (list[min] > list[j]) {
				min = j;
			}
		}

		int tmp = list[i];
		list[i] = list[min];
		list[min] = tmp;
	}
}

#endif
