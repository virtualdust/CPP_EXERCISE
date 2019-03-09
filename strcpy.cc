#include<iostream>

char* Strcpy(const char* strSrc, char* strDest){
    assert(strSrc != NULL && strDest != NULL);
    char* addr = strDest;
    while((*strDest++ = *strSrc++) != '\0');
    return addr;
}


int main(){
    char* strSrc = "world";       // to change string like this
    char strDest[10] = "hello";   // string to be changed
    std::cout << Strcpy(strSrc, strDest) << std::endl;
    return 0;
}
