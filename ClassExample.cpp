/* Jameson Treu */
/* Adept Programmer*/
/* Class Example I hashed out to better understand classes in cpp*/

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

/* NOTE: You have to put classes before int main() for some reason in c++
** DOUBLE NOTE: Get ur sh*t together c++!
*/
class daClass {
public:
	void setA(int userA) {
		a = userA;
	}

	void setB(int userB) {
		b = userB;
	}

	int returnSum() {
		return a + b;
	}

private:
	int a, b;
};

int main()
{
	int a = 5;
	int b = 3;
	daClass thisVar;

	thisVar.setA(a);
	thisVar.setB(b);

	cout << "\nThe sum is: " << thisVar.returnSum() << "\n";

	system("pause");
	return 0;
}

