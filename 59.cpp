#include <iostream>
#include <stack>
using namespace std;


void putAtBottom(stack<int> &s, int x) {
    if (s.empty()) { s.push(x); return; }
    int top = s.top(); s.pop();
    putAtBottom(s, x);
    s.push(top);
}


void reverseStack(stack<int> &s)
{
    if (s.empty()) return;
    int top = s.top(); s.pop();
    reverseStack(s);
    putAtBottom(s, top);
}

int main() {
    stack<int> s;
    int n, val;
    cout << "How many numbers? ";
    cin >> n;
    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        s.push(val);
    }

    reverseStack(s);

    cout << "Reversed stack: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
}

