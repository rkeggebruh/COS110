#include "Stack.h"
using namespace std;

template<class T>
Stack<T>::Stack()
{
	this->top = NULL;
}

template<class T>
Stack<T>::~Stack()
{
	//deallocate all the nodes in the stack

	Node<T>* temp;

	while(top){
		temp = top;
		top = top->getNext();
		//top = top->next;
		delete temp;
	}
}

template<class T>
void Stack<T>::push(T data)
{
	//add param to the top of da stack
	//CHECK THIS - should I use the dot operator and should I use this aswell
	//this->push(data);


	Node<T>* newNode = new Node<T>(data);  // create a new node

 	newNode->setNext(top);

 	top = newNode;         // update stackTop

}

template<class T>
Node<T>* Stack<T>::pop()
{
	//pop element off top of stack
	if(!isEmpty()){
		Node<T> * temp = new Node<T>(top->getData());

		Node<T>* ptr = top;
		top = top->getNext();

		delete ptr;

		return temp;
	}
	
}

template<class T>
Node<T>* Stack<T>::getTop()
{
	if(!isEmpty()){
		return this->top;
	}
	return NULL;
	
}

template<class T>
int Stack<T>::size()
{
	//return count of the number of nodes in the stack
	Node<T>* temp = top;
	int count = 0;

	while(temp){
		temp = temp->getNext();
		//temp = temp->next;
		count++;
	}

	return count;
}

template<class T>
bool Stack<T>::isEmpty()
{
	//stack.isEmpty();
	if(!top){//T if empty
		return true;
	}
	
	return false;
}

template<class T>
Stack<T>* Stack<T>::reverse()
{
	// OG stack needs to stay the same
	// make a temp stack

	//CHECK why is this changing the value of the original array


	Stack<T>* tempo = new Stack<T>();

	Node<T>* temp = top;

	while(temp){
		tempo->push(temp->getData());
		temp = temp->getNext();
	}

	/*toInsert = this;

	int loop = size();

	for(int r=0; r<loop; r++){
		//cout<<"!!the data its getting: "<<toInsert->pop()->getData()<<endl;
		tempo->push(this->pop()->getData());
	}*/



	return tempo;
	
}

template<class T>
bool Stack<T>::contains(T data)
{
	Node<T>* temp = top;

	while(temp != NULL && temp->getData() != data){
		temp = temp->getNext();
		//temp = temp->next;
	}

	if(temp){
		return true;
	}

	return false;
}
