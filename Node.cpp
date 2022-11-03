#include "Node.h"
using namespace std;

template<class T>
Node<T>::Node(T data)
{
	this->data = data;
	this->next = NULL;
}

template<class T>
T Node<T>::getData()
{
	return this->data;
}

template<class T>
Node<T>* Node<T>::getNext()
{
	return this->next;
}

template<class T>
void Node<T>::setNext(Node<T>* ptr)
{
	//according to spec we should use shallow copies
	this->next = ptr;
}
