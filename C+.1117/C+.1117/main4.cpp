#include <iostream>
#include <string>
using namespace std;

//√‹¬Îµ»º∂º∆À„
int LengthAdd(string Password)//√‹¬Î≥§∂»
{
	if (Password.length() <= 4)
		return 5;
	else if (Password.length() >= 5 && Password.length() <= 7)
		return 10;
	return 25;
}

int LetterAdd(string Password)//◊÷ƒ∏
{
	int UpperLetter = 0;
	int LowerLetter = 0;
	for (int i = 0; i < Password.size(); i++){
		if (Password[i] >= 'A' && Password[i] <= 'Z')
			UpperLetter++;
		else if (Password[i] >= 'a' && Password[i] <= 'z')
			LowerLetter++;
	}

	if (UpperLetter != 0 && LowerLetter != 0)
		return 20;
	else if ((UpperLetter == 0 && LowerLetter != 0) || (UpperLetter != 0 && LowerLetter == 0))
		return 10;
	return 0;
}

int IntegerAdd(string Password)// ˝◊÷
{
	int NumOfInteger = 0;
	for (int i = 0; i<Password.size(); i++){
		if (Password[i] >= '0' && Password[i] <= '9')
			NumOfInteger++;
	}

	if (NumOfInteger == 0)
		return 0;
	else if (NumOfInteger == 1)
		return 10;
	return 20;
}

int SymbolAdd(string Password)//∑˚∫≈
{
	int NumOfSymbol = 0;
	for (int i = 0; i<Password.size(); i++){
		char ch = Password[i];
		if ((ch >= 0x21 && ch <= 0x2F) || (ch >= 0x3A && ch <= 0x40) || (ch >= 0x5B && ch <= 0x60) || (ch >= 0x7B && ch <= 0x7E))
			NumOfSymbol++;
	}
	if (NumOfSymbol == 0)
		return 0;
	else if (NumOfSymbol == 1)
		return 10;
	return 25;
}

int AwardAdd(string Password)//◊÷ƒ∏£¨∑˚∫≈£¨ ˝◊÷≈–∂œ
{
	int LetterNum = LetterAdd(Password);
	int IntegerNum = IntegerAdd(Password);
	int SymbolNum = SymbolAdd(Password);
	if (LetterNum != 0 && IntegerNum != 0 && SymbolNum == 0)
		return 2;
	else if (LetterNum == 10 && IntegerNum != 0 && SymbolNum != 0)
		return 3;
	else if (LetterNum == 20 && IntegerNum != 0 && SymbolNum != 0)
		return 5;
	return 0;
}

void GetPwdSecurityLevel(string Password)//µ»º∂≈–∂œ
{
	int sum = 0;
	sum += LengthAdd(Password);
	sum += LetterAdd(Password);
	sum += IntegerAdd(Password);
	sum += SymbolAdd(Password);
	sum += AwardAdd(Password);
	if (sum >= 90)
		cout << "VERY_SECURE" << endl;
	else if (sum >= 80)
		cout << " SECURE" << endl;
	else if (sum >= 70)
		cout << "VERY_STRONG" << endl;
	else if (sum >= 60)
		cout << "STRONG" << endl;
	else if (sum >= 50)
		cout << "AVERAGE" << endl;
	else if (sum >= 25)
		cout << "WEAK" << endl;
	else
		cout << "VERY_WEAK" << endl;
}


int main()
{
	string str;
	cin >> str;
	GetPwdSecurityLevel(str);

	system("pause");
	return 0;
}