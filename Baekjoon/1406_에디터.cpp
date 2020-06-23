#include <iostream>
#include <string>
#include <stack>

using namespace std;


int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	//Ŀ���� �������� stack�� ����
	stack<char> left, right;
	int n;
	string str;

	cin >> str;

	//���� Ŀ��(stack)�� ���ڿ� push
	for (int i = 0; i < str.length(); i++)
		left.push(str[i]);

	cin >> n;
	cin.ignore();

	while (n--)
	{
		string cmd;

		getline(cin, cmd);

		if (cmd == "L")
		{
			if (!left.empty())
			{
				right.push(left.top());
				left.pop();
			}
		}
		else if (cmd == "D")
		{
			if (!right.empty())
			{
				left.push(right.top());
				right.pop();
			}
		}
		else if (cmd == "B")
		{
			if (!left.empty())
				left.pop();
		}
		else if (cmd[0] == 'P')
		{
			left.push(cmd[2]);
		}
	}
	while (!left.empty())
	{
		right.push(left.top());
		left.pop();
	}
	
	while (!right.empty())
	{
		cout << right.top();
		right.pop();
	}
	return 0;
}