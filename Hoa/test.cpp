// C++ program for function overriding with data members
#include <bits/stdc++.h>
using namespace std;

// base class declaration.
class Animal {
public:
    Animal() {
        cout << "Constructor Animal!! \n";
    }
	string color = "Black";
};

// inheriting Animal class.
class Dog : public Animal {
public:
    Dog() {
        cout << "Constructor Dog!! \n";
    }
	string color = "Grey";
};

// Driver code
int main(void)
{
	Animal* d = new Dog(); // accessing the field by reference
					// variable which refers to derived
	cout << static_cast<Dog*>(d)->color; // Ép kiểu con trỏ từ Animal* sang Dog* và truy cập thành viên dữ liệu color
    delete d; // Giải phóng bộ nhớ khi không sử dụng nữa
    return 0;
}
