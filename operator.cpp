
#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) : value(v) {}

    Number operator+(const Number& other) const {
        return Number(value + other.value);
    }

    Number operator-(const Number& other) const {
        return Number(value - other.value);
    }

    bool operator==(const Number& other) const {
        return value == other.value;
    }

    void display() const {
        cout << value << endl;
    }
};

int main() {
    Number a(10), b(5);

    Number sum = a + b;
    Number difference = a - b;

    cout << "Sum: ";
    sum.display();

    cout << "Difference: ";
    difference.display();

    cout << boolalpha << "Equal: " << (a == b) << endl;

    return 0;
}
}