#include <iostream>
using namespace std;
void Swap(int& a, int& b);
void main() {
	int Fnum;
	int SECnum;
	cout << " Enter Numbers: " << endl;
	cin >> Fnum >> SECnum;
	Swap(Fnum, SECnum);
	cout << "Fnum : " << Fnum << " SECnum: " << SECnum << endl;
}
void Swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}