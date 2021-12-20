#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int x = 5, y = 1;
 
    // Code to swap 'x' and 'y'
    x = x + y; // x now becomes 6
    y = x - y; // y becomes 5
    x = x - y; // x becomes 1
    cout << "After Swapping: x =" << x << ", y=" << y;
}
