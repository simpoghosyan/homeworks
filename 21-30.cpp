#include <iostream>



void func_21 (){

       int a = 5;
       int b = 6;
       int c = 3;
if (c > a  && c > b){

	std::cout << c <<"  is great simbol" << std::endl;

}
if (b > a && b > c ){
	std::cout << b << "is great simbol" << std::endl;

}
if (a > b && a > c ){
        std::cout << a << "  great simbol"<< std::endl;
}



}
void func_22(){
	int a = 6;
	int b = 7;
	int c = 8;
	if ( a < b && a < c ){
		std::cout << a << " is less "<< std::endl;

}

        if (b < c && b < a ){
		std::cout << b << "is less"<< std::endl;
}
        if ( c < b && c < a){
		std::cout << c << "is less"<< std::endl;
}

}
int func_23 () {
	bool a = false;
	int arr[] = {5,6,1};
	for (int i = 0; i < 3; i++){
		if ( arr[i] == 1){
			 a = true;
}
}
return a;
}
int func_24 (){
	int arr[] = {2,5,6,2,4};
	int k = 0;
	bool a = false;
	for ( int i = 0;i < 5;i++){
		if ( arr[i] == 2 ){
			k += 1;
}
                if ( k == 2 ){
			a = true;
}		
}
return a;
}
int func_26 (){
	int arr[] = {1,5,1,9,9,9};
	int a = 2;
	for ( int i = 0;i < 6;i++){
		if ( arr[i] % 2 == 0){
			 a = 1;

}
}


return a;
}
int func_27 (){
	bool a = false;
	int arr[] = {1,4,6,10};
	for ( int i = 2;i < 4;i++){
		if ( arr[i - 1 ]- arr[i -2] == arr[i] - arr[i - 1]){
			 a = true;

}
}

return a;
}
int func_28 (){
	bool a = true;
	int arr[] = {3,9,27,81,243};
	for ( int i = 2;i < 5;i++){
		if ( arr[i - 1] / arr[i -2] != arr[i] / arr[i -1]){
			a = false;

}
}
return a;
}
void func_29 (int arr[]){	
	int temp;
	for ( int i = 0;i < 6;i++){
		for ( int j = i + 1; j < 6;j++){
			if (  arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;

}
}
}
	for ( int i = 0;i < 6;i++){
		std::cout<<arr[i]<<std::endl;
	}
}


int main (){

	return 0;
}



