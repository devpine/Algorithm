#include <iostream>
#include <string>

using namespace std;

string result(string str)
{
	int cnt=0;
	for (char ch : str)
	{
		if (ch == '(')
			cnt++;
		else
			cnt--;

		if (cnt < 0)
			return "NO";
	}
	if (cnt == 0)
		return "YES";
	else
		return "NO";
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int num;
	string str;

	cin >> num;
	cin.ignore();

	while (num--)
	{
		getline(cin, str);
		cout << result(str) << "\n";
	}
	return 0;
}