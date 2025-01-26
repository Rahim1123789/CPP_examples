#include <iostream>

using namespace std;

class staticfunction
{
    static int count;
public:
    static void setcount()
    {
        count++;
    }
    void displaycount()
    {
        cout << count << endl;
    }
};
int staticfunction::count=10;

int main()
{
    staticfunction obj1;
    obj1.setcount();
    staticfunction::setcount();
    obj1.displaycount();
    cout << "Hello world!" << endl;
    return 0;
}
