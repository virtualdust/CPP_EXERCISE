#include<iostream>
#include<stdlib.h>
#include<string>
#include<assert.h>
using namespace std;

void reverse(int* number) {
		assert(number);

		char* number_str = new char[1024];
		itoa(number, number_str, 10);
		int start = 0;
		int len = strlen(number_str);

		if (number < 0) {
				start++;
				len++;
		}

		for (int i = start; i < len/2; i++) {
				char temp = number_str[i];
				number_str[i] = number_str[len - i - 1];
				number[len - i - 1] = temp;
		}

		*number = atoi(number_str);
		cout << *number << endl;

}
