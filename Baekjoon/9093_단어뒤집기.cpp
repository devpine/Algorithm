#include <iostream>
#include <string>
#include <stack>

using namespace std;


int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	stack<char> s;
	int num;

	cin >> num;
	cin.ignore();

	while (num--)
	{
		getline(cin, str);
		str += "\n";

		for (char ch : str)
		{
			//������ ������ ��� ���ÿ� ������ ���� ���
			if (ch == ' ' || ch == '\n')
			{
				while (!s.empty())
				{
					cout << s.top();
					s.pop();
				}
				cout << ch;
			}
			else
			{
				s.push(ch);
			}
		}
	}
	return 0;
}