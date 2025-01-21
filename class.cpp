#include <iostream>
using namespace std;

class Complex
{
public:
    int real, img;

    Complex()
    {
        real = 0;
        img = 0;
    }

    Complex(int r, int i)
    {
        real = r;
        img = i;
    }

    Complex operator+(Complex const &obj)
    {
        return Complex(real + obj.real, img + obj.img);
    }
};

int main()
{
    Complex c1(3, 7);
    Complex c2(4, 8);

    Complex c3 = c1 + c2;

    cout << "Addition: " << c3.real << " + d" << c3.img << "i" << endl;
    return 0;
}
