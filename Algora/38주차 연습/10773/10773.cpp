#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k, num;
    long long sum = 0;
    stack<int> s;

    cin >> k;

    while(k--) {
        cin >> num;
        if(num == 0) {
            s.pop();
        } else {
            s.push(num);
        }
    }

    while(!s.empty()) {
        sum += s.top();
        s.pop();
    }

    cout << sum << '\n';
    return 0;
}