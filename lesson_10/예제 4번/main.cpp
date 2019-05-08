#include <iostream>
#include <cstring>

using namespace std;

class Person {
private:
	char* name;
	int age;

public:
	Person(char* person_name, int person_age) {
		cout << "생성자입니다." << endl;
		int len = strlen(person_name) + 1;
		name = new char[len];
		strcpy(name, person_name);
		age = person_age;
	}
	Person(const Person & cpy) : age(cpy.age) {
		cout << "복사생성자입니다." << endl;
		name = new char[strlen(cpy.name) + 1];
		strcpy(name, cpy.name);
	}
	Person& operator=(const Person& p) {
		cout << "대입연산자입니다." << endl;
		delete[] name;
		name = new char[strlen(p.name) + 1];
		strcpy(name, p.name);
		age = p.age;
		return *this;
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
	Person a("Seo Sangwon", 25);
	Person b = a;
	Person c("Lee Choensol", 26);
	a.show();
	b.show();
	c.show();
	c = a;
	c.show();
}