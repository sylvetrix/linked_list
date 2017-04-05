#ifndef LINKEDLISTSINGLE_H
#define LINKEDLISTSINGLE_H

#include <cstdlib>

using namespace std;

template <class T>
struct Node
{
	T value;
	Node* next;
};

template <class T>
class LinkedListSingle
{
	public:
		LinkedListSingle();
		~LinkedListSingle();
		bool isEmpty() { return ((head == NULL) && (tail == NULL)); }
		Node* getHead();
		Node* getTail();
		void insertAfterNode(Node* node, T element);
		void insertHead(T element);
		void insertTail(T element);

	private:
		Node* head;
		Node* tail;
};

#endif
