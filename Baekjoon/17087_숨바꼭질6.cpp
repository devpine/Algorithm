#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, s, a;
	vector<int> A;
	cin >> n >> s;
	
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		A.push_back(abs(a - s));
	}

	int ans = A[0];

	for (int i = 1; i < n; i++)
	{
		ans = gcd(ans, A[i]);
	}
	
	cout << ans << '\n';
	return 0;
}