#include <iostream>
using namespace std;

//用非算术运算符计算两个数A,B的和
class UnusualAdd {
public:
	int addAB(int A, int B) {
		int P, Q;
		while (B != 0){
			P = A ^ B;//A，B不加进位制的和
			Q = (A & B) << 1;//A，B进位制存放
			A = P;
			B = Q;//当B为零时候，不存在进位制，所以和为A
		}
		return A;
	}
};

int main1()
{
	int n, m;
	cin >> n >> m;
	UnusualAdd T;
	int sum = T.addAB(n, m);
	cout << sum << endl;

	system("pause");
	return 0;
}