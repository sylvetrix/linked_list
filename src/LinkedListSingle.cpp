#include "LinkedListSingle.hpp"
#include <cstdlib>

using namespace std;

LinkedListSingle::LinkedListSingle()
{
	head = NULL;
	tail = NULL;
}

LinkedListSingle::~LinkedListSingle()
{

}

Node* LinkedListSingle::getHead()
{
	return head;
}

Node* LinkedListSingle::getTail()
{
	return tail;
}

template <class T>
void LinkedListSingle::insertAfterNode(Node* node, T element)
{
	if (node != NULL)
	{
		Node* temp = new Node();
		temp->value = element;
		temp->next = node->next;
		node->next = temp;

		if (tail == node)
		{
			tail = temp;
		}
}

template <class T>
void LinkedListSingle::insertHead(T element)
{
	Node* temp = new Node();
	temp->value = element;
	temp->next = head;
	head = temp;

	if (tail == NULL)
	{
		tail = temp;
	}
}

template <class T>
void LinkedListSingle::insertTail(T element)
{
	Node* temp = new Node();
	temp->value = element;
	temp->next = NULL;

	if (tail != null)
	{
		tail->next = temp;
	}

	tail = temp;

	if (head == NULL)
	{
		head = temp;
	}
}

