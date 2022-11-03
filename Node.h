#ifndef NODE_H
#define NODE_H

template <class T>
class Node// : public SortNode
{
	private:
		T data;
		Node<T>* next;
	public:
		Node(T data);
		T getData();
		Node<T>* getNext();
		void setNext(Node<T>* ptr);
};


#endif