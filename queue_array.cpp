#include<iostream>
using namespace std;
#define MAX 50

class Queue{
	private:
		int a[MAX];
		int front, rear;
	public:
		Queue(){
			front=rear=-1;
		}
		bool isEmpty();
		bool isFull();
		void enqueue(int x);
		void dequeue();
		void show();
};
bool Queue::isEmpty(){
	if(front==-1&&rear==-1){
		return true;
	}else{
		return false;
	}
}
bool Queue::isFull(){
	if(rear==MAX-1){
		return true;
	}
	return false;
}
void Queue::enqueue(int x){
	if(isFull()){
		cout<<"Stack is full !";
	}else{
		if(isEmpty()){
			front=0;			
		}
		rear++;
		a[rear]=x;
	}
}
void Queue::dequeue(){
	if(isEmpty()){
		cout<<"Queue is empty !";
	}else{
		if(front==rear){	//TH chi co 1 phan tu trong queue
			front=rear=-1;		
		}else{
			front++;
		}
	}
}
void Queue::show(){
	for(int i=front; i<=rear; i++){
		cout<<a[i]<<"\t";
	}
}
int main(){
	Queue q;
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(7);
	q.enqueue(9);
	q.enqueue(2);
	q.show();
	cout<<endl;
	q.dequeue();
	cout<<"New Queue: ";
	q.show();
}
