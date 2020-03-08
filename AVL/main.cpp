/*************************************************************************
	> File Name: main.cpp
	> Author: ylvis
	> Mail: ylvis1024@gmail.com 
	> Created Time: Sun Mar  8 15:53:16 2020
 ************************************************************************/

#include<iostream>
#include "AVL.h"
using namespace std;


int main(){
	int list[8] = {3,5,1,2,7,8,4,0};
	TreeNode* root = BuildAVLTree(list);
	root->ScanAVLTree();
	cout << "Depth:" << GetDepth(root) << endl;
	cout << "LeftDepth:" << GetLeftDepth(root) << endl;
	cout << "RightDepth:" << GetRightDepth(root) << endl;
	return 0;
}

