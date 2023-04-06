#include <iostream>
using namespace std;
int main()
{
    int x, y;
    void swap(int *x *y)
        x = 100;
    Y = 20;
    cout << "x=" << x << "y=" << y sawp(&x, &y);
    cout << "x=" << x << "y=" << y << endl return 0;
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    x *= *y;
    *y = temp;
}