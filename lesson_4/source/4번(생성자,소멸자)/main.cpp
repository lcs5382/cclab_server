#include "source.h"

int main() {
	char name[6] = "seosw";

	//Student st;
	Student st(name, 999, 123.0);

	//st.input_information();
	st.print_information();

	return 0;
}
