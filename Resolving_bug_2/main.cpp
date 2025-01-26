#include <iostream>

using namespace std;

class Item
{
private:
    static int count;
public:
    Item()
    {
        count++;
    }
    int getcount()
    {
        return count;
    }
    int* getcountaddr()
    {
        return &count;
    }
};

int Item ::count=0;

int main()
{
    Item obj1;
    Item obj2;

    cout << obj1.getcount() << endl;
    cout << obj2.getcount() << endl;

    cout << obj1.getcountaddr() << endl;
    cout << obj2.getcountaddr() << endl;
    cout << "Hello world!" << endl;
    return 0;
}
