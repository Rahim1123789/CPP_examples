#include<iostream>
#include<string>

using namespace std;

class person
{
private:
    int weigth;
public:
    person(int weigth_a = 0)
    {
        weigth = weigth_a;
    }
    void operator++(void)
    {
        ++weigth;
    }
    void print_data(void)
    {
        cout << "Weigth is:" << weigth << endl;
    }
};

int main()
{
    person babu(44);
    ++babu;
    babu.print_data();
    return 0;
}
