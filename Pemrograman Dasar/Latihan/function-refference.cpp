#include <iostream>
using namespace std;

void swapNum (int &x, int &y) {
	int z = x;		// penerapan refference
	x = y;
	y = z;
}

int main() {
	int firstNum  = 10;
	int secondNum = 20;
	
	cout << "Before swap: " << "\n";
	cout << firstNum << secondNum << "\n";
	
	swapNum(firstNum, secondNum); // panggil function
	
	cout << "After swap: " << "\n";
	cout << firstNum << secondNum;
	
	return 0;
}


