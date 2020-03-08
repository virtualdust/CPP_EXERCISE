/*************************************************************************
	> File Name: AVL.h
	> Author: ylvis
	> Mail: ylvis1024@gmail.com 
	> Created Time: Sun Mar  8 13:29:25 2020
 ************************************************************************/
#ifndef __AVL__
#define __AVL__

#include<iostream>
using namespace std;

class TreeNode{
	private:
		int value;
		TreeNode* left;
		TreeNode* right;
		friend void LeftRoateTree(TreeNode*);
		friend void RightRoateTree(TreeNode*);
	public:
		TreeNode(int val = 0, TreeNode* left_t = NULL, TreeNode* right_t = NULL);
		~TreeNode();
		int GetValue() const;
		TreeNode* GetLeft() const;
		TreeNode* GetRight() const;
		void ScanAVLTree() const;
		friend TreeNode* InsertNode(TreeNode*, TreeNode*);
		
};

inline TreeNode::TreeNode(int val, TreeNode* left_t, TreeNode* right_t)
:value(val),left(left_t),right(right_t){}

inline TreeNode::~TreeNode(){}

inline int TreeNode::GetValue() const{
	return this->value;
}

inline TreeNode* TreeNode::GetLeft() const{
	return this->left;
}


inline TreeNode* TreeNode::GetRight() const{
	return this->right;
}

inline void LeftRoateTree(TreeNode* root) {
	TreeNode* tmp = root;
	root = NULL;
	root = tmp->right;
	tmp->right = NULL;
	tmp->right = root->left;
	root->left = NULL;
	root->left = tmp;
	return;
}

inline void RightRoateTree(TreeNode* root) {
	TreeNode* tmp = root;
	root = NULL;
	root = tmp->left;
	tmp->left = NULL;
	tmp->left = root->right;
	root->right = NULL;
	root->right = tmp;
	return;
}

int GetDepth(TreeNode* root) {
	int depth = 0;
	if (root == NULL) return depth;
	if (root->GetLeft() != NULL || root->GetRight() != NULL) depth++;

	int leftDepth = GetDepth(root->GetLeft());
	int rightDepth = GetDepth(root->GetRight());

	leftDepth > rightDepth? depth += leftDepth: depth += rightDepth;

	return depth;
}


int GetLeftDepth(TreeNode* root) {
	if (root == NULL || root->GetLeft() == NULL) return 0;
	return GetDepth(root->GetLeft()) + 1;
}

int GetRightDepth(TreeNode* root) {
	if (root == NULL || root->GetRight() == NULL) return 0;
	return GetDepth(root->GetRight()) + 1;
}


void BalanceTree(TreeNode* root) {
	if (root == NULL) return;
	if (GetLeftDepth(root) - GetRightDepth(root) > 1) RightRoateTree(root);
	if (GetRightDepth(root) - GetLeftDepth(root) > 1) LeftRoateTree(root);
	BalanceTree(root->GetLeft());
	BalanceTree(root->GetRight());
	return;
}


inline TreeNode* InsertNode(TreeNode* root, TreeNode* node){
	if (root == NULL) {
		root = node;
		return root;
	}

	if (root->GetValue() >= node->GetValue()) {
		root->left = InsertNode(root->left, node);
	} else {
		root->right = InsertNode(root->right, node);
	}

	BalanceTree(root);

	return root;
}

inline void TreeNode::ScanAVLTree() const {
	std::cout << this->GetValue() << std::endl;
	if (this->left != NULL)  this->left->ScanAVLTree();
	if (this->right != NULL) this->right->ScanAVLTree();
	return;
}


TreeNode* BuildAVLTree(int* list, int size) {
	TreeNode* root = NULL;
	for (int i = 0; i < size; i++)
	{
		TreeNode* node = new TreeNode(*list, NULL, NULL);
		root = InsertNode(root, node);
		list++;
	}

	return root;
}


#endif

