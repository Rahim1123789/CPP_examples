#include <iostream>

using namespace std;

struct Room
{
    int width;
    int length;
    void setValue(int w,int l)
    {
        width=w;
        length=l;
    }
};

int main()
{
    Room objRoom;
    objRoom.setValue(12,4);
    cout << "Width is: " << objRoom.width << endl;
    cout << "Length is: " << objRoom.length <<endl;
    cout << "Hello world!" << endl;
    return 0;
}
