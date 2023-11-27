#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};
class Stack{
	private:
		Node *top;
		int size;
	public:
		Stack();
		Node* creatNode(int x);
		bool isEmpty();
		void push(int x);
		int pop();
		int peek();
		void print();		
};
Stack::Stack(){
	top=NULL;
	size = 0;
}
Node* Stack::creatNode(int x){
	Node *p = new Node();
	p->data = x;
	p->next = NULL;
	return p;
}
bool Stack::isEmpty(){
	if(size==0){
		return true;
	}
		return false;
}
void Stack::push(int x){
	Node *p = creatNode(x);
	if(isEmpty()){
		top=p;
	}else{
		p->next=top;
		top=p;
	}
	size++;
}
int Stack::pop(){
	int data = top->data;
	Node *p = top;
	top=top->next;
	delete p;
	size--;
	return data;
}
int Stack::peek(){
	if(!isEmpty()){
		cout<<top->data;
	}
} 
void Stack::print(){
	for(Node *i=top; i!=NULL; i=i->next){
		cout<<i->data<<endl;
	}
	
}
int main(){
	Stack s;
	if(s.isEmpty()){
		cout<<"Stack is empty !"<<endl;
	}else{
		cout<<"Stack is not empty !"<<endl;
	}
	s.push(3);
	s.push(5);
	s.push(7);
	s.push(9);
	cout<<"Element Stack: "<<endl;
	s.print();
	s.pop();
	cout<<endl;
	cout<<"New Stack: "<<endl;
	s.print();
	cout<<endl;
	cout<<"Top: ";
	s.peek();
}

