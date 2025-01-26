#include <iostream>
#include<string>

using namespace std;

class person
{
public:
    void give(void)
    {
    cout << "This is from person class" << endl;
    }
};

class boy: public person
{
public:
    void give(void)
    {
    cout << "This if from boy class" << endl;
    }
};

class girl: public person
{
public:
    void give(void)
    {
        cout << "This is from girl class" << endl;
    }
};

int main()
{
    boy b;
    b.give();
    cout << "Hello world!" << endl;
    return 0;
}
