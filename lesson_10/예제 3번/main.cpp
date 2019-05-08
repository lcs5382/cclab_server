#include <iostream>
#include <cstring>

using namespace std;

class Person {
private:
	char* name;
	int age;

public:
	Person(char* person_name, int person_age) {
		int len = strlen(person_name) + 1;
		name = new char[len];
		strcpy(name, person_name);
		age = person_age;
	}
	Person(const Person & cpy) : age(cpy.age) {
		name = new char[strlen(cpy.name) + 1];
		strcpy(name, cpy.name);
	}
	void show() {
		cout << name << endl;
		cout << age << endl;
	}
	~Person() {
		delete[] name;
		cout << "파괴자입니다." << endl;
	}
};

int main() {
	Person a("Seo Sang won", 25);
	Person b = a;
	a.show();
	b.show();
}