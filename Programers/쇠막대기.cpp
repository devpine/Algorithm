#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

int solution(string arr) {
    int answer = 0;
    stack<int> index;

    for (int i = 0; i < arr.length(); i++)
    {
        if (arr[i] == '(')
        {
            index.push(i);
        }
        else
        {
            if (index.top() == i - 1)
            {
                if (!index.empty())
                    index.pop();

                answer += index.size();
            }
            else
            {
                if (!index.empty())
                    index.pop();

                answer ++;
            }
        }
    }
    return answer;
}

int main(void)
{
    string str = "()(((()())(())()))(())";

    cout << solution(str) << "\n";
    return 0;
}