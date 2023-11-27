#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};
class Queue{
	private:
		Node *head;
		Node *tail;
		int size;
	public:
		Queue();
		bool isEmpty();
		void enQueue(int x);
		void deQueue();
		void show();
};
Queue::Queue(){
	head=tail=NULL;
	size = 0;
}
bool Queue::isEmpty(){
	if(size==0){
		return true;
	}
	return false;
}
void Queue::enQueue(int x){
	Node *p = new Node();
	p->data = x;
	p->next =  NULL;
	if(isEmpty()){
		head=tail=p;
	}else{
	tail->next=p;
	tail=p;
}
	size++;
}
void Queue::deQueue(){
	if(head == NULL){
		cout<<"Stack is empty !";
	}
	Node* p = head;
	head = head->next;
	delete p;
	size--;
}
void Queue::show(){
	for(Node* i=head; i!=NULL; i=i->next){
		cout<<i->data<<"\t";
	}
}
int main(){
	Queue q;
	q.enQueue(2);
	q.enQueue(3);
	q.enQueue(4);
	q.enQueue(5);
	q.show();
	q.deQueue();
	cout<<endl;
	q.show();;
}

