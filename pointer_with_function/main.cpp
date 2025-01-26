#include <iostream>

using namespace std;

int number=10;
int *p = &number;
int square(int *ptr)
{
    int temp= *ptr;
    temp= temp*temp;
    return temp;
}

int main()
{
    int val=0;
    cout << *p << endl;
    val=square(&number);
    cout << val << endl;
    return 0;
}
