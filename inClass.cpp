#include <iostream>
#include <cmath>

using namespace std;

int power(int base, int exp)
{
	return  pow(base, exp)
}


int main(int argc, char * argv[])
{
	int p = power(2, 3);
	cout << p << endl;
	return 0;
}
