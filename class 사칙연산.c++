#include <iostream>

using namespace std;

class Calculate {
private:
    int a;
    int b;

public:
    void input_number() {
        cin >> a;
        cin >> b;
    }
    
    void add() {
        int n = a + b;
        cout << n << endl;
    }

    void sub() {
        int n = a - b;
        cout << n << endl;
    }

    void mul() {
        int n = a * b;
        cout << n << endl;
    }

    void div() {
        int n = a / b;
        cout << n << endl;
    }
};

int main()
{
    Calculate c;

    c.input_number();
    c.add();
    c.sub();
    c.mul();
    c.div();

    return 0;
}
