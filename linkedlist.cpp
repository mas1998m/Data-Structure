#include <iostream>
using namespace std;


class Node{
private:
	int data;
	Node * next;
public:
	Node():data(0), next(nullptr){}
	Node(int d) :data(d), next(nullptr){}
	void set_next(Node * ptr){
		next = ptr;
	}
	Node * get_next(){
		return next;
	}
	void set_data(int d){ data = d; }
	int get_data(){ return data; }
	friend LinkedList;
};

class LinkedList{
private:
	Node * Head;
public:
	LinkedList();
	bool empty();
	int length();
	void push_front(int d);
	void pop_front();
	void push_back(int d);
};

LinkedList::LinkedList(){
	Head = nullptr;
}
LinkedList::empty(){
	return (Head == nullptr)
}
LinkedList::length(){
	int ans=0;
	Node * ptr=Head;
	while(ptr!=nullptr){
		ans++;
		ptr=ptr->next;
	}
	return ans;
}
LinkedList::push_front(int d){
	Node * temp = Head;
	Head = new[Node(d)];
	Head->next = temp;
}
LinkedList::pop_front(){
	if(LinkedList.Empty())return;
	Node * temp = Head;
	Head = Head->next;
	delete Node;
	return;
}
LinkedList::push_back(int d){
	Node * current = Head;
	if(current == nullptr){
		push_front(d);
		return;
	}
	while(current->next != nullptr)current=current->next;
	current->next = new(Node(d));
}


