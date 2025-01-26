#include <iostream>

using namespace std;

class item
{
private:
    int number;
    float cost;
public:
    void getdata(int a, float b);
    void putdata(void)
    {
        cout << "number" << number << endl;
        cout << "cost" << cost <<endl;
    }
};
    void item::getdata(int a,float b)
    {
        number = a;
        cost = b;
    }


int main()
{
    item x;
    cout << "\n Object x \n";
    x.getdata(100,299.95);
    x.putdata();

    item y;
    cout << "\n Object y \n";
    y.getdata(200,157.95);
    y.putdata();

    cout << "Hello world!" << endl;
    return 0;
}
