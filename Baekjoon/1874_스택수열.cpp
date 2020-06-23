#include <iostream>
#include <string>
#include <stack>

using namespace std;


int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	stack<int> s;

	string str = "";
	int n, x, m = 0;

	int out;

	cin >> n;

	out = n;

	while (n--)
	{
		cin >> x;

		if (x > out)
		{
			str = "NO";
			break;
		}

		if (s.empty())
		{
			s.push(++m);
			str += '+';
		}
	
		if (x >= s.top())
		{
			while (1)
			{
				if (x == s.top())
				{
					s.pop();
					str += '-';
					break;
				}
				else
				{
					s.push(++m);
					str += '+';
				}
			}
		}
		else
		{
			str =  "NO";
			break;
		}
	}
	cout << str << "\n";


	return 0;
}