#include <iostream>
using namespace std;
int main()
{
    int x, y;
    void swap(int *x, int *y);
    x = 100;
    y = 20;
    cout << "x=" << x << "y=" << y << endl;
    swap(&x, &y);
    cout << "x=" << x << "y=" << y << endl;
    return 0;
}
void swap(int *x, int *y)

{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}