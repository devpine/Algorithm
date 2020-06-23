#include <iostream>
#include <string>
#include <queue>

using namespace std;


int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string result = "<";
	queue<int> que;
	int n, k;

	cin >> n >> k;

	for (int i = 1; i <= n; i++)
		que.push(i);

	while (!que.empty())
	{
		for (int i = 1; i < k; i++)
		{
			que.push(que.front());
			que.pop();
		}
		result += to_string(que.front());
		que.pop();

		if (que.empty())
			result += ">";
		else
			result += ", ";
	}

	cout << result;
	return 0;
}