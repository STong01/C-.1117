#include <iostream>
#include <vector>
using namespace std;

//¾®×ÓÆåÅĞ¶ÏÊäÓ®
class Board {
public:
	bool checkWon(vector<vector<int> > board) 
	{
		int i, j;
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				cin >> board[i][j];
			}
		}

		if (board[0][0] == board[1][1] == board[2][2] == 1) 
			return true;

		if (board[0][2] == board[1][1] == board[2][0] == 1)
			return true;

		for (int i = 0; i<3; i++)
		{
			if (board[i][0] == board[i][1] == board[i][2] == 1) 
				return true;
			if (board[0][i] == board[1][i] == board[2][i] == 1) 
				return true;
		}
		return false;
	}
};

int main3()
{

	system("pause");
	return 0;
}