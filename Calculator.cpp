#include "Calculator.h"
using namespace std;

template<class T>
Calculator<T>::Calculator()
{
	this->valueStack = new Stack<T>();

	this->operatorStack = new Stack<Operator<T>*>();
}

template<class T>
Calculator<T>::~Calculator()
{
	//for valueStack
	
	Node<T>* temp;

	while(!valueStack->isEmpty()){
		temp = valueStack->pop();
		delete temp;
	}

	//for valueStack
	Node<Operator<T>*>* tempo;

	while(!operatorStack->isEmpty()){
		tempo = operatorStack->pop();
		delete tempo;
	}

}

template<class T>
void Calculator<T>::addValue(T val)
{
	valueStack->push(val);
}

template<class T>
void Calculator<T>::addOperator(Operator<T>* op)
{
	operatorStack->push(op);

}

template<class T>
T Calculator<T>::removeValue()
{
	valueStack->pop(); // call pop function from stack.cpp

}

template<class T>
Operator<T>* Calculator<T>::removeOperator()
{
	operatorStack->pop(); // call pop function from stack.cpp
}

template<class T>
int Calculator<T>::numValues()
{
	valueStack->size();
}

template<class T>
int Calculator<T>::numOperators()
{
	operatorStack->size();
}

template<class T>
T Calculator<T>::calculate()
{

	T leCalc;


	while(!operatorStack->isEmpty()){

		Node<T> * lhs;
		if(!valueStack->isEmpty()){
			lhs = this->valueStack->pop();
		}
		else{
			return NULL;
		}


		Node<T> * rhs;

		if(!valueStack->isEmpty()){
			rhs = this->valueStack->pop();
		}
		else{
			return NULL;
		}
		
		//pop first op

		Node<Operator<T>*>* op1;

		if(!operatorStack->isEmpty()){
			op1 = this->operatorStack->pop();
		}

		leCalc = op1->getData()->operator()(lhs->getData(), rhs->getData());

		valueStack->push(leCalc);
		
	}
	return leCalc;

}
