#include <iostream>
#include <string>
using namespace std;
class  Map
{
	private:
		class Node
		{
			public:
				Node* left;
				Node* right;
				int key;
				std::string value;
				Node (int key,string value)
				{
					this->key = key;
					this->left = nullptr;
					this->right = nullptr;
					this->value = value;
				}
				Node (int key = 0,Node* left = nullptr,Node* right = nullptr,string value = "")
				{
					this->key = key;
					this->left = left;
					this->right = right;
					this->value = "value";
				}

		};
        Node* root;
	int size;
	public:
	Map()
	{
		root = nullptr;
		size = 0;
	}
	int Size()
	{
		return size;
	}

	void add(int key,string value){
		if (nullptr == root) {
			root = new Node(key, value);
		} else {
			Node* target = new Node(key, value);
			add(root, target);
		}
	}

	std::string get(int key){

		if (root->key == key && root != nullptr){
			return root->value;
		}

		if (root->key != key && root != nullptr ){
			if (root->key > key){
			root = root->left;
			get(key);}

		}

	       
		 if(root->key != key && root != nullptr){
			 if (root->key < key){
			 
			root=root->right;
			get(key);}
		}
		return root->value;
	}

	private:
	void add(Node* root, Node* target)
	{
		if (target->key > root->key) {
			if (nullptr != root->right){ 
				add(root->right, target);
			}
			else{
				root->right = target;
			}
		}
		if (target->key < root->key){
			if (nullptr != root->left){
				add(root->left,target);

			}
			else{
				root->left = target;
			}
		}

	}	

	void print(Node* current_elem){
		if (current_elem->left != nullptr){
			print(current_elem->left);
		}
		cout<<current_elem->key<<endl;
		if (current_elem->right != nullptr){
			print(current_elem->right);
		}
	}

};

int main()
{
	Map a;
	a.add(36,"gago");
	a.add(56,"bldo");
	a.add(20,"chuto");
	a.add(25,"smbo");
	std::cout<<a.get(56)<<std::endl;
	a.Size();
	return 0;
}
