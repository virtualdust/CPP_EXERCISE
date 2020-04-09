#ifndef __SKIPLIST__
#define __SKIPLIST__

#include<iostream>
using namespace std;

class Node {
		private:
				int		value;
				Node*		next;
				Node*		selfNext;
		public:
				Node(int value_t = 0; Node* next_t = NULL, Node* selfNext_t = NULL) 
				: value(value_t), next(next_t), selfNext(selfNext_t) {}

				~Node() {}

				int getValue() const { return value; }

				Node& getNext() const { return *next; }

				Node& getSelfNext() const { return *selfNext; }

				void setValue(const int value_t) { value = value_t; }

				void setNext(const Node& nextNode) { next = &nextNode; }

				void setSelfNext(const Node& selfNextNode) { selfNext = &selfNextNode; }
}

class SkipList {
		private:
				Node* head;

		public:
				SkipList(Node* head_t = NULL) : head(head_t) {}
				~SkipList() {}
				Node& getHead() const { return *head; }
				bool find(const int value); 
				void insert(Node& node);
				bool del(const int value);
};

bool SkipList::find(const int value) { return false; }

void SkipList::insert(Node& node) {}

bool SkipList::del(const int value) { return false; }

#endif
