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
