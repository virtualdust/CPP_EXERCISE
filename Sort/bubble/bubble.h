/*************************************************************************
	> File Name: bubble.h
	> Author: ylvis
	> Mail: ylvis1024@gmail.com 
	> Created Time: Fri Mar 13 19:36:46 2020
 ************************************************************************/
#ifndef __BUBBLE__
#define __BUBBLE__

#include<iostream>
using namespace std;

void bubbleSort(int* list, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (list[j] > list[j+1]) {
				int tmp = list[j];
				list[j] = list[j+1];
				list[j+1] = tmp;
			} 
		}
	}

	
}

#endif
