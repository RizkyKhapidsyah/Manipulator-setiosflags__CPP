#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main() {
	int a = 75, b = 56;
	
	cout << "Penggunaan ios::left dan ios::right\n\n";
	cout << "Rata Sebelah Kiri = ";
	cout << setiosflags(ios::left) << setw(10) << a;
	cout << setiosflags(ios::left) << setw(10) << b;
	cout << endl;
	cout << "Rata Sebelah Kanan = ";
	cout << setiosflags(ios::right) << setw(10) << a;
	cout << setiosflags(ios::right) << setw(10) << b;
	
	_getch();
	return 0;
}