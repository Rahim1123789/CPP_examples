#include <iostream>

using namespace std;

class set
{
    int n,m;
public:
    void input (void);
    void display(void);
    int largest (void);
};

int set::largest(void)
{
    if(m>=n)
    {
        return(m);
    }
    else
        return(n);
}
void set::input(void)
{
    cout << "Input Value of m and n" << endl;
    cin >> m >> n;
}
void set::display(void)
{
    cout << "Largest value = " << largest() << endl;
}

int main()
{
    set A;
    A.input();
    A.display();

    cout << "Hello world!" << endl;
    return 0;
}
