#include <iostream>
class Vector{
	private:
		int* ptr;
		int size;
		int capacity;
	private:
		void copy(){
			capacity *= 2;
			int* tmp = new int[capacity];
			int* ptr = new int[capacity];
			for (int i = 0;i< size;i++){
				tmp[i] = ptr[i];
			}
			delete [] ptr;
			ptr = tmp;
			size++;
		}
	public:
		Vector(){
			ptr = new int[capacity];
			size = 0;
			capacity = 10;
		}

		void push_back(int n){
			if (size == capacity){
				copy();
			}
			ptr[size] = n;
			size++;
		}
		void print(){
			for (int i = 0;i < size;i++){
				std::cout<<ptr[i]<<std::endl;
			}
		std::cout<<"size :"<<dsize()<<"\t";
		std::cout<<"at :"<<at(2)<<"\t";
		}
		int dsize(){
			int tm = size;
			return tm;
		}

		int at(int i){
			return ptr[i];
		}

		void insert(int value,int index){
			if (size == capacity){
				copy();
			}
			for (int i = size - 1; i > index;i--){
				ptr[i + 1] = ptr[i];
			}
			ptr[index] = value;
			size++;
		}
		int pop(){
			int tmp = ptr[size];
			size--;
			return tmp;
		}


		void erase(int index){
			for (int i = index + 1;i <= size;i++){
				ptr[i - 1] = ptr[i];

			}
			size--;
		}

};

int main(){
	Vector a;
	for(int i = 0;i < 6;i++){
		a.push_back(i);

	}
//	a.push_back(5);
//	a.dsize();
//	a.at(3);
//	a.insert(78,3);
//	a.pop();
	a.print();
	std::cout << "----1\n";
	a.erase(3);
	a.print();
	std::cout << "-- 2\n";
	a.erase(5);
	a.print();
	return 0;
}
