#include <iostream>
#include <cmath>
using namespace std;

class Area {
public:
    float AREA(float r) {
        return 3.14159 * r * r;
    }

    float AREA(float l, float b) {
        return l * b;
    }

    float AREA(float a, float b, float c) {
        float s = (a + b + c) / 2.0;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
};

int main() {
    Area obj;
    float r, l, b, a, c;

    cout << "Enter radius of circle: ";
    cin >> r;

    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;

    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;

    if (r > 0)
        cout << "Area of Circle = " << obj.AREA(r) << endl;
    else
        cout << "Invalid radius" << endl;

    if (l > 0 && b > 0)
        cout << "Area of Rectangle = " << obj.AREA(l, b) << endl;
    else
        cout << "Invalid rectangle dimensions" << endl;

    if (a > 0 && b > 0 && c > 0 &&
        a + b > c && a + c > b && b + c > a) {
        cout << "Area of Triangle = "
             << obj.AREA(a, b, c) << endl;
    } else {
        cout << "Invalid triangle" << endl;
    }

    return 0;
}
