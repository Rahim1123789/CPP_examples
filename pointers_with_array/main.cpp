#include <iostream>
#include <string>

using namespace std;

int arr[5] = {10,20,30,40,50};
int *ptr = arr;

int main()
{
    for(int i=0;i<5;i++)
    {
      cout << *(ptr + i) << endl;
 //     cout << "ptr is:" << ptr <<endl;
    }

    return 0;
}
