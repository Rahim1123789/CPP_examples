#include <iostream>

using namespace std;

class base
{
protected:
    int x;
    base(int g=0)
    {
        x=g;
        cout << "This is a Base Class" << x << endl;

    }
};

class derived: public base
{
public:

//    base b;
    derived(int r):base(x)
    {
      cout << "This is a derived Class" << endl;
    }
};

int main()
{
    derived d(10);
//    base v;
    cout << "Hello world!" << endl;
    return 0;
}
