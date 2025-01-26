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
    person operator+(person w2)
    {
        person tmp;
        tmp.weigth = weigth + w2.weigth;
        return tmp;
    }
    void print_value(void)
    {
        cout << "Weigth is:" << weigth << endl;
    }
};

int main()
{
person p1(77);
person p2(45);
person total;

total = p1+p2;
total.print_value();
    return 0;
}
