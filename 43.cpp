#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Number of Rows: ";
    cin >> n;

    char ch = 'A';
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++)

            cout << ch << " ";

        cout << endl;
        ch++;
    }
}

