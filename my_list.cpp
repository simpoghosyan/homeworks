#include <iostream>
class list{
	private:
	class Node{
		public:
		Node* ptrnext;
		int data;
		Node(int data = 0,Node* ptrnext = nullptr)
		{
			this->data = data;
			this->ptrnext = ptrnext;

		}
	};
	int size;
	Node* frst;
	public:
	list(){
		frst = nullptr;
		size = 0;
	}
	int Size(){
		return size;
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
	void insert(int data,int index){
		if (index == 0){
			push_front(data);
		}
		else
		{
			Node* prew =  frst;
			for (int i = 0;i < index - 1;i++){
				prew = prew->ptrnext;
			}
			Node* newelement = new Node(data,prew->ptrnext);
			prew->ptrnext = newelement;
			size++;
		}
	}
	void erase(int index){
		if (index == 0){
			pop_front();
		}
		else
		{
			Node* prew = frst;
			for (int i = 0;i < index - 1;i++){
				prew = prew->ptrnext;
			}
			Node* del = prew->ptrnext;
			prew->ptrnext = del->ptrnext;
			size --;
		}
	}
	void print(){
		Node* tv = frst;
		for (int i = 0;i < size;i++){
			std::cout<<tv->data<<std::endl;
			tv->ptrnext != nullptr;
			tv = tv->ptrnext;
			
		}

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
	a.insert(99,2);
	a.erase(1);
	a.Size();

	a.print();
	std::cout<<"size :"<<a.Size()<<std::endl;
	return 0;
}
