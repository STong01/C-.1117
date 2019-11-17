#include <iostream>
using namespace std;

//走格子，n*m格子数，只能往右或者往下
int test(int A, int B)
{
	if (A > 1 && B > 1)
		return test(A - 1, B) + test(A, B - 1);

	else if (((A >= 1) && (B = 1)) || ((A = 1) && (B >= 1)))
		return A + B;

	else
		return 0;
}

int main2()
{
	int n, m;
	cin >> n >> m;
	int tmp = test(n, m);
	cout << tmp << endl;

	system("pause");
	return 0;
}