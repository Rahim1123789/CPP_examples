#include <iostream>

using namespace std;

class alpha
{
private:
    int a;
    int b;
public:
    alpha()
    {
        a=5;
        b=5;

    }
    static int stat;
    static int getstat()
    {
        stat++;
        return stat;
    }
};
int alpha::stat=0;

int main()
{
    alpha one;
    alpha two;
    cout << "one is:" << one.getstat() << endl;
    cout << "Two is:" << two.getstat() << endl;
    cout << "Hello world!" << endl;
    return 0;
}
