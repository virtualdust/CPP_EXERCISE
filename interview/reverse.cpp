#include<iostream>
#include<stdlib.h>
#include<string>
#include<assert.h>
#include<stdio.h>
using namespace std;

void reverse(int& number) {
	char* number_str = new char[1024];
	sprintf(number_str,"%d", number);
	int start = 0;
	int len = strlen(number_str);

	if (number < 0) {
	     start++;
	     len++;
	}

	for (int i = start; i < len/2; i++) {
	    char temp = number_str[i];
	    number_str[i] = number_str[len - i - 1];
	    number_str[len - i - 1] = temp;
	}

	number = atoi(number_str);

}

int main(){
    int number = 233546;
    reverse(number);
    cout << number << endl;
    return 0;
}
