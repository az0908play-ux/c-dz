#include <iostream>
using namespace std;
int main() {

	// 1 zadacha
	//int n;
	//int max = 2147483648;
	//for (;;) {
	//	cin >> n;
	//	if (n == 0) {
	//		break;
	//	}
	//	if (n > max) {
	//		max = n;
	//	}
	//}
	//if (max == 2147483648) {
	//	cout << "NEtu chisla";
	//}
	//else {
	//	cout << "Naibolshe" << max;
	//}

	//zadacha 2

	/*for (int i = 2; i <= 100; i++) { 

		bool d = true;

		for (int j = 2; j * j <= i; j++) { 
			if (i % j == 0) { 
				d = false;
				break;
			}
		}

		if (d)
			cout << i << " ";
	}*/

	//zadacha 3

		int a;         
		int sum = 0;
		for (;;) {
			cin >> a;
			if (a == 0) {
				break;
			}
			if (a % 2 == 0) {
				sum += a;
			}
		}
		cout << sum;

	
}