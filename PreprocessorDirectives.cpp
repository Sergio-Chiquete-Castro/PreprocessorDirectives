#include <iostream>
using namespace std;

//find max
#define max(x,y) (x>y?x:y)

//int to string msg
#define msg(x) #x

//defined
#define PI 3.1425
//if PI is not defined then PI is 3, endIF
#ifndef PI
	#define PI 3
#endif

int main() {

	cout << PI << endl;

	cout << max(10, 12) << endl;

	cout << msg(hello);
}
