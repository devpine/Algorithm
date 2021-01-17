#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
	int answer = 0;
	vector<int> basket;
	for (int i = 0; i < moves.size(); i++)
	{
		for (int j = 0; j < board.size(); j++)
		{
			if (0 != (board[j][moves[i]-1]))
			{
				if (0 < basket.size())
				{
					if (*--basket.end() == board[j][moves[i]-1])
					{
						basket.pop_back();
						answer += 2;
					}
					else
					{
						basket.push_back((board[j][moves[i]-1]));
					}
				}
				else
				{
					basket.push_back((board[j][moves[i]-1]));
				}
				board[j][moves[i]-1] = 0;
				break;
			}
		}
	}
	return answer;
}

void main()
{
	vector<vector<int>> board =
	{
	{0,0,0,0,0 },
	{ 0,0,1,0,3 },
	{ 0,2,5,0,1 },
	{ 4,2,4,4,2 },
	{ 3,5,1,3,1 } };
	vector<int> moves = { 1,5,3,5,1,2,1,4 };

	cout << solution(board, moves) << endl;

}