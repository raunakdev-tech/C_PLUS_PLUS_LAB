#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    // Unary increment operator
    void operator++() {
        ++real;
        ++imag;
    }

    // Unary decrement operator
    void operator--() {
        --real;
        --imag;
    }

    // Binary addition operator
    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Binary subtraction operator
    Complex operator-(Complex c) {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }
};

int main() {
    Complex c1(5, 3), c2(2, 1), result;

    cout << "Original value of c1: ";
    c1.display();

    ++c1;
    cout << "Changed value after increment: ";
    c1.display();

    --c1;
    cout << "Changed value after decrement: ";
    c1.display();

    cout << "\nOriginal values for addition:\n";
    cout << "c1 = ";
    c1.display();
    cout << "c2 = ";
    c2.display();

    result = c1 + c2;
    cout << "Changed value after addition: ";
    result.display();

    cout << "\nOriginal values for subtraction:\n";
    cout << "c1 = ";
    c1.display();
    cout << "c2 = ";
    c2.display();

    result = c1 - c2;
    cout << "Changed value after subtraction: ";
    result.display();

    return 0;
}
