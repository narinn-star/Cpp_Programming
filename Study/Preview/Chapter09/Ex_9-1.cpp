#include <iostream>
using namespace std;

class Base {
public:
	void f() {
		cout << "Base::f() called" << endl;
	}
};

class Derived : public Base {
public:
	void f() {
		cout << "Derived::f() called" << endl;
	}
};

void main() {
	Derived d, * pDer;
	pDer = &d; //��ü d�� ����Ŵ
	pDer->f(); //Derived�� f() ȣ��

	Base* pBase;
	pBase = pDer; //��ĳ����. ��ü d�� ����Ŵ
	pBase->f(); //Base�� f() ȣ��
}