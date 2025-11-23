#include <iostream>
using namespace std;

int main() {
    int a;
    int b = 0;      
    int c = 0;

    while (true) {
        cin >> a;

        if (a == -10) {
            break; 
        }

        if (a % 2 == 0) {
            b += a; 
        }
        else {
            c++;
        }
    }

    cout << b << endl;
    cout << c << endl;

    return 0;
}
