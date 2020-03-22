#include <iostream>
using namespace std;
extern int b = 55535;
int a = 15535;
int main() 
{
	bool a1 = true;
	while(a1) {
		cout << a << endl;
		cout << b << endl;
		cout << "Please Input: ";
		int c;
		cin >> c;
		switch (c)
		{
		case 1: {
			continue;
			break;
		case 2: {
			b++;
			continue;
			break;
		}
		case 3: {
			b--;
			continue;
			break;
		}
		case 4 :{
			a++;
			continue;
			break;
		}
		case 5: {
			a--;
			continue;
			break;
		}
		}
		default:
			a1 = false;
			break;
		}
	}
	return 0;
}