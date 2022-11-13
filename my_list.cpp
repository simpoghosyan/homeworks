#include <iostream>
class list{
	public:
		int Size(){
			return size;
		}
	private:
	class Node{
		public:
		Node* prew;
		Node* ptrnext;
		int data;
		Node(int data = 0,Node* ptrnext = nullptr)
		{
			data = data;
			ptrnext = ptrnext;

		}
	};
	int size;
	Node* element;
	Node* frst;
	public:
	list(){
		frst = nullptr;
		size = 0;
	}
	void pop_front(){
		Node* temp = frst;
		frst = frst->ptrnext;
		delete temp;
		size--;
	}
	void push_back(int data){
		if (frst ==  nullptr){
			frst = new Node(data);
		}
		else{
			Node* pwd = frst;
			while(pwd->ptrnext != nullptr){
				pwd = pwd-> ptrnext;

			}
			pwd->ptrnext = new Node(data);
		}
		size++;
	}
	void push_front(int data){
		frst = new Node(data,frst);
		size++;
	}
	void pop_back(){
		Node* tmp = frst;
		while (tmp->ptrnext != nullptr){
			tmp = tmp->ptrnext;
		}
		delete tmp;
		size--;
	}

};
int main(){
	list a;
	a.push_back(5);
	a.push_back(6);
	a.push_back(7);
	a.push_back(9);
	a.pop_front();
	a.push_front(8);
	a.push_front(11);
	a.pop_back();
	a.Size();
	std::cout<<"size :"<<a.Size()<<std::endl;
	return 0;
}
