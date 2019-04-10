#include <iostream>

using namespace std;

void swap_by_value		(int  a, int  b);
void swap_by_pointer	(int* a, int* b);
void swap_by_reference	(int& a, int& b);
void custom_print		(int orange, int grape);

int main() {
	
	int orange = 1000;
	int grape = 3000;
	
	cout << "바꾸기 전" << endl;
	custom_print(orange, grape);

	cout << "value로 바꾼 뒤" << endl;
	swap_by_value(orange, grape);
	custom_print(orange, grape);

	cout << "포인터로 바꾼 뒤" << endl;
	swap_by_pointer(&orange, &grape);
	custom_print(orange, grape);

	cout << "참조변수로 바꾼 뒤" << endl;
	swap_by_reference(orange, grape);
	custom_print(orange, grape);

}
void swap_by_value(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_by_pointer(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b= temp;
}

void swap_by_reference(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void custom_print(int orange, int grape) {
	cout << "	오렌지  = " << orange << endl;
	cout << "	포도 = " << grape << endl << endl;

}