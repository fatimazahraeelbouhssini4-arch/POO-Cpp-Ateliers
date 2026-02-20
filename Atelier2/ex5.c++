#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int& Ref_a = a;
    int* p_a = &a;

    cout << "Valeur de a : " << a << endl;
    cout << "Adresse de a : " << &a << endl;

    cout << "Valeur via ref_a : " << ref_a << endl;
    cout << "Adresse via ref_a : " << &ref_a << endl;

    cout << "Valeur pointée par p_a : " << *p_a << endl;
    cout << "Adresse stockée dans p_a : " << p_a << endl;
    cout << "Adresse de p_a : " << &p_a << endl;

    return 0;
}
