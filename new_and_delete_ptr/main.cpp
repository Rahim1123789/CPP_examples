#include <iostream>

using namespace std;

class car
{
private:
    int weigth;
public:
    void SetWeigth(int x)
    {
        weigth=x;
    }
    int GetWeigth(void)
    {
        return weigth;
    }
};

class BMW
{
private:
    int TopSpeed;

public:
     car *base;
    BMW(int W,int TpSpeed)
    {
        base->SetWeigth(W);
        TopSpeed=TpSpeed;
    }
    int Tspeed(void)
    {
        return TopSpeed;
    }
    int getwght(void)
    {
        return base->GetWeigth();
    }
~BMW()
{
    delete base;
}
};

int main()
{
    BMW b(3000,130);
    cout << "Hello world!" << endl;
    cout << b.getwght() << endl;
    cout << b.Tspeed() << endl;
    return 0;
}
