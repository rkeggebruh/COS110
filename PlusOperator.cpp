#include "PlusOperator.h"
using namespace std;

template<class T>
T PlusOperator<T>::operator()(T lhs, T rhs)
{
	return lhs + rhs;
}

template<class T>
Operator<T>* PlusOperator<T>::clone()
{
	return new PlusOperator<T>();
}
