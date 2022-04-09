// suatu fungsi bisa menggunakan nama dengan parameter yang berbeda

#include <iostream>
using namespace std;

int funcPlus(int x, int y) {
	return x + y;
}

double funcPlus(double x, double y) {
	return x + y;
}

int main() {
	int myNum1 = funcPlus(8, 28);
	double myNum2 = funcPlus(2.21, 5.3);
	cout << "int: " << myNum1 << "\n";
	cout << "double: " << myNum2;
	
	return 0;
}
