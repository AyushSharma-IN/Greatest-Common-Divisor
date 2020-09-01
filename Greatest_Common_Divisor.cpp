#include <iostream>
using namespace std;

int GCD(int& a, int& b)
{
    int d;

    if (b == 0) return a;
    else
        d = a % b;     
    
    return GCD(b, d);
}

int main()
{
    int a, b, gcd, s;
    cin >> a;
    cin >> b;

    gcd = GCD(a, b);
    cout << gcd << endl;
    
    return 0;
}