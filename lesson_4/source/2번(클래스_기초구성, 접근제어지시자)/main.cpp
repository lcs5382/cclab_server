#include "source.h"

int main() {
	Student st;

	st.input_information();
	st.print_information();

	//cout << st.phone_number << endl; // 접근제어자를 public으로 변경 후 진행

	return 0;
}