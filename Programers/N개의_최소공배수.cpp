#include <iostream>
#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int solution(vector<int> arr) {
    int answer = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (answer == 0) 
        {
            answer = lcm(arr[i], arr[i + 1]); i++;
        }
        else 
        {
            answer = lcm(arr[i], answer);
        }
    }
    return answer;
}

int main(void)
{
	vector<int> arr = { 2,6,8,14 };
	//vector<int> arr={1,2,3};
    cout << solution(arr) << "\n";

    return 0;
}