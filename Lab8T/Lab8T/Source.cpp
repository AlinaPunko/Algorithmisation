
#include <iostream>
using namespace std;

int main() {
	float a = 1, b = 3, n = 200;
	float h, s;
	h = (b - a) / n;
	s = 0;
	float x = a;
	while (x <= b - h) {
		s += h*(sin(x) + 1 + sin(x + h) + 1) / 2;
		x += h;
	}
	cout << s;
	system("pause");
}