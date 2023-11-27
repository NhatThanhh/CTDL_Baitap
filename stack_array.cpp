#include<iostream>
using namespace std;
#define MAX 10
class Stack{
    private:
        int a[MAX];
        int size;
    public:
        Stack();
        int top;
        bool isEmpty();
        bool isFull();
        void push(int x);
        int pop();
        int peek();
        void print();
};
Stack::Stack(){
    top = -1;
}
bool Stack::isEmpty(){
    if (top == -1){
        return true;
    }
    return false;
}
bool Stack::isFull(){
    if(top == MAX-1){
        return true;
    }
    return false;
}
void Stack::push(int x){
    if(isFull()==false){
        top++;
        a[top]=x;
    }

}
int Stack::pop(){
    if(isEmpty()==true){
        cout << "Stack is empty !";
    }else{

        top--;
    }
}
void Stack::print(){
    for(int i=top; i> -1; i--){
        cout << a[i] <<endl;
    }
}
int Stack::peek(){
	if(!isEmpty()){
		cout<<a[top];
	}
}
int main(){
    Stack s;
    s.push(2);
    s.push(4);
    s.push(6);
    s.push(7);
    cout<<"Stack: "<<endl;
    s.print();
    cout << endl;
 	if(!s.isEmpty()){
 		cout<<"Stack is not empty"<<endl;
	 }else{
	 	cout<<"Stack is empty"<<endl;
	 }
    cout << endl;
    s.pop();
    cout << "New stack: "<<endl;
    s.print();
    cout<<endl;
    cout<<"Top: ";
    s.peek();

}

