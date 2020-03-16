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
	void pop_back();
	void clear();
	void print_node(Node * Start);
	void print_all();
	bool contains(int d);
	~LinkedList();
};

LinkedList::LinkedList(){
	Head = nullptr;
}
bool LinkedList::empty(){
	return (Head == nullptr)
}
int LinkedList::length(){
	int ans=0;
	Node * ptr=Head;
	while(ptr!=nullptr){
		ans++;
		ptr=ptr->next;
	}
	return ans;
}
void LinkedList::push_front(int d){
	Node * temp = Head;
	Head = new[Node(d)];
	Head->next = temp;
}
void LinkedList::pop_front(){
	if(LinkedList.Empty())return;
	Node * temp = Head;
	Head = Head->next;
	delete Node;
	return;
}
void LinkedList::push_back(int d){
	Node * current = Head;
	if(current == nullptr){
		push_front(d);
		return;
	}
	while(current->next != nullptr)current=current->next;
	current->next = new(Node(d));
}
void LinkedList::pop_back(){
	if(this->empty())return;
	Node * temp = Head;
	if(Head->next==nullptr){
		delete Head;
		Head = nullptr
	}
	else {
		while(temp->next->next != nullptr){
			temp = temp->next;
		}
		delete temp->next;
		temp->next = nullptr;
		return;
	}
}
void LinkedList::clear(){
	while(Head!=nullptr)this->pop_back();
}
void LinkedList::print_node(Node * Start){
	if(Start == nullptr)return;
	cout << Start->data << " ";
	print_node(Start->next);
}
void LinkedList::print_all(){
	print_node(Head);
	return;
}
bool LinkedList::contains(int d){
	if(empty())return false;
	Node * current = Head;
	while(current!=nullptr){
		if(current->data==d)return true;
		current = current->next;
	}
	return false;
}
LinkedList::~LinkedList(){
	clear();
}