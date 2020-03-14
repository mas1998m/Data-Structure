#include <iostream>
using namespace std;


class Node{
private:
	int data;
	Node * next;
public:
	Node():data(0), next(nullptr){}
	Node(int d) :data(d), next(nullptr){}
};