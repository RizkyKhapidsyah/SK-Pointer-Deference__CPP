//-------------------------------//
//Penggunaan Pointer Dereference //
//-------------------------------//

#include <conio.h>
#include <iostream>

using namespace std;

/* Created by Rizky Khapidsyah */

int main() {
	int riky, amir, * raka;
	
	riky = 75;
	amir = riky;
	raka = &riky;

	cout << "Nilai ILHAM = " << riky << endl;
	cout << "Nilai AMIR = " << amir << endl;
	cout << "Nilai RAKA = " << raka << endl;

	_getch();
	return 0;
}