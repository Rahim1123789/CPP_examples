#include <iostream>

using namespace std;

const int m=50;

class ITEM
{
    int itemCode[m];
    float itemPrice[m];
    int count;
public:
    void CNT(void){count = 0;}
    void getitem (void);
    void displaySum (void);
    void remove (void);
    void displayItems (void);
};

void ITEM ::getitem(void)
{
    cout << "Enter Item Code: " << endl;
    cin >> itemCode[count];

    cout << "Enter Item Price" <<endl;
    cin >> itemPrice[count];
    count++;
}
void ITEM ::displaySum(void)
{
    float sum = 0;
    for(int i=0; i<count; i++)
        sum= sum + itemPrice[i];
    cout << "Total Value: " << sum <<endl;
}
void ITEM ::remove(void)
{
    int a;
    cout << "Enter Item Code: " << endl;
    cin >> a;
    for(int i=0; i<count;i++)
        if(itemCode[i]== a)
           itemPrice[i]=0;
}
void ITEM ::displayItems(void)
{
    cout << "\nCode Price\n";
    for(int i = 0;i<count;i++)
    {
        cout << "\n" << itemCode[i];
        cout << "\n" << itemPrice[i];
    }
}
int main()
{
    ITEM order;
    order.CNT();
    int x;
    do{
        x=0;
        cout << "\nYou can do the following:" << "Enter appropriate number \n";
        cout << "\n1. Add an Item";
        cout << "\n2. Display Total value";
        cout << "\n3. Delete an Item";
        cout << "\n4. Display All Item";
        cout << "\n5. Quit";
        cout << "\n\nWhat is your option?";
        cin >> x;
        switch(x)
        {
           case 1: order.getitem();break;
           case 2: order.displayItems();break;
           case 3: order.remove();break;
           case 4: order.displayItems();
           case 5: break;
           default:
            cout << "Invalid Input" << endl;
        }
    }while(x!=5);
    return 0;
}
