#include<string>
#include <iostream>
#include <stack>
#include <time.h>

using namespace std;

bool solution(string s)
{
    int count = 0;
     
    for (int i = 0; i < s.length(); i++)
    {
            if (s[i] == '(')
                count++;
            if (s[i] == ')')
                count--;

            if (count < 0)
            {
                return false;
            }
    }
 
    return count == 0 ;
}

int main(void)
{
    clock_t startTime;
    startTime = clock();
    cout << solution("(())()()()()()()()()()()()()()()()()") << endl;
    double dTime = clock() - startTime;
    cout << dTime;
    return 0;
}