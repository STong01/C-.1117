#include <iostream>
using namespace std;

//�÷��������������������A,B�ĺ�
class UnusualAdd {
public:
	int addAB(int A, int B) {
		int P, Q;
		while (B != 0){
			P = A ^ B;//A��B���ӽ�λ�Ƶĺ�
			Q = (A & B) << 1;//A��B��λ�ƴ��
			A = P;
			B = Q;//��BΪ��ʱ�򣬲����ڽ�λ�ƣ����Ժ�ΪA
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