#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b){
        if (a == 0 && b == 0)
            break;
        cout << a + b << '\n';
    }
    return 0;
}