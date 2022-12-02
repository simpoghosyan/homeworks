#include <iostream>
int main(){
	int row;
	int col;
	std::cout<<"row"<<std::endl;
	std::cin>>row;
	std::cout<<"col"<<std::endl;
	std::cin>>col;
	int **arr = new int*[row];
	for (int i = 0;i < row;i++){
		*(arr + i) = new int[col];
	}
	for (int i = 0;i < row;i++){
		for (int j = 0;j < col;j++){
			*(*(arr + i) + j) = rand() % 10;
		}	
		}
	for (int i = 0;i < row;i++){
		for (int j = 0;j < col;j++){
			std::cout<<*(*(arr + i) + j)<<"\t";

		}
		std::cout<<std::endl;

	}

	for (int i = 0;i < row;i++){
		delete *(arr + i);
	}
	delete [] arr;
	std::cout<<"---------------------"<<std::endl;

	int **arr1 = new int*[row];
	for (int i = 0;i < row;i++){
		arr1[i] = new int[col];
	}

	for (int i = 0;i< row;i++){
		for (int j = 0;j < col;j++){
			arr1[i][j] = rand() % 10;
		}
	}
	
	for (int i = 0;i < row;i++){
		for (int j = 0;j < col; j++){
			std::cout<<arr1[i][j]<<"\t";
		}
		std::cout<<std::endl;
	}
	for (int i = 0;i < row;i++){
		delete [] arr1[i];
	}
	delete [] arr1;

	
	
	
	return 0;
}
