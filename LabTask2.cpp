#include <iostream>
using namespace std;

int main() {
    int N, x;
    cout << "Enter the value of N: ";
    cin >> N;

    if (N < 35)
        x = 10;
    else if (N <= 39)
        x = 9;
    else if (N == 40)
        x = 8;
    else if (N == 44)
        x = 7;
    else {
        cout << "N is not accepted." << endl;
        return 0; 
    }

    cout << "x = " << x << endl;

    return 0;
}