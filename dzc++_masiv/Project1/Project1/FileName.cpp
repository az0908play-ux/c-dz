#include <iostream>
using namespace std;

int main() {
    const int a = 10;
    int arr[a];

    int d = 0;   
    int s = 1;   
    bool r = false;

    srand(time(0));

    int min = -10;
    int max = 10;

    for (int i = 0; i < a; i++) {
        arr[i] = min + rand() % (max - min + 1);

        if (arr[i] < 0) {
            d += arr[i];
        }
        if (arr[i] > 0) {
            s *= arr[i];
            r = true;
        }
    }

    cout << "Masiv ";
    for (int i = 0; i < a; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    cout << "Suma videmnih " << d << endl;

    if (r)
        cout << "Dobutok dodatnih " << s << endl;
    else
        cout << "Nema dobutku" << endl;

    return 0;
}
