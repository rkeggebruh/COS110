#include <iostream>
#include <string>
#include <sstream>

/*Do not remove this unless you want endless amounts of errors*/
#include "Operator.cpp"
#include "MinusOperator.cpp"
#include "MultiplyOperator.cpp"
#include "PlusOperator.cpp"
#include "Node.cpp"
#include "Stack.cpp"
#include "Calculator.cpp"

int main(){
    

    cout << "------------- TESTING STACK - T->Double ---------------" << endl;
    Stack<double>* this_clone = new Stack<double>();
    if(this_clone->getTop() == NULL && this_clone->isEmpty()){
        cout << "Constructor Works and isEmpty." << endl;
    }
    else{
        cout << "Fix Constructor and isEmpty" << endl;
    }
    cout << "The Stack Size: " << this_clone->size() << endl;
    if(this_clone->contains(3) == false){
        cout << "Contains Works" << endl;
    }
    else{
        cout << "Fix Contain Method" << endl;
    }
    this_clone->push(7);
    this_clone->push(98);
    if(this_clone->contains(7)){
        cout << "Contains Works" << endl;
    }
    else{
        cout << "Fix Contain Method" << endl;
    }
    cout << "Prdoubleing the Stack: ";
    Node<double>* temp = this_clone->getTop();
    while(temp){
        cout << temp->getData() << " ";
        temp = temp->getNext();
    }
    cout << endl << "Testing pop: " << this_clone->pop()->getData() << endl;
    this_clone->push(9);
    this_clone->push(2);
    this_clone->push(34);
    this_clone->push(47);
    this_clone->push(68);
    cout << "Done pushing" << endl;
    cout << "Prdoubleing the Stack: ";
    temp = this_clone->getTop();
    while(temp){
        cout << temp->getData() << " ";
        temp = temp->getNext();
    }
    cout << endl;
    cout << "The Stack Size: " << this_clone->size() << endl;
    Stack<double>* this_clone2 = this_clone->reverse();
    cout << "Prdoubleing the Reversed Stack: ";
    temp = this_clone2->getTop();
    while(temp){
        cout << temp->getData() << " ";
        temp = temp->getNext();
    }
    cout << endl;
    cout << "The Stack Size: " << this_clone->size() << endl;
    cout << "Prdoubleing the Stack to check if it was altered: ";
    temp = this_clone->getTop();
    while(temp){
        cout << temp->getData() << " ";
        temp = temp->getNext();
    }
    cout << endl;
    cout << "The Stack Size: " << this_clone->size() << endl;
    if(this_clone->contains(47)){
        cout << "Contains Works" << endl;
    }
    else{
        cout << "Fix Contain Method" << endl;
    }
    cout << "Testing pop: " << this_clone->pop()->getData() << endl;
    cout << "Testing pop1: " << this_clone->pop()->getData() << endl;
    cout << "Testing pop2: " << this_clone->pop()->getData() << endl;
    cout << "The Stack Size: " << this_clone->size() << endl;
    delete temp;
    delete this_clone;
    delete this_clone2;
    cout << "-------------------- DONE ----------------------" << endl;
}