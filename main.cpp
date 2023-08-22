#include "include/BigInt.h"

int main()
{
	BigInt b1("342");
	int exp = 321;
	cout << pow(b1, exp);
}