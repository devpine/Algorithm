#include <string>
#include <vector>
#include <iostream>
#include <stack>

using namespace std;

bool check(string s)
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

    return count == 0;
}

string solve(string str)
{
    string v = "";
    string u = "";
    int count = 0;
    bool v_check = false;

    if (str.size() == 1)
        return "";

    for (int i = 0; i < str.length() ; i++)
    {
        if (str[i] == '(' && !v_check)
        {
            u += str[i];
            count++;
           
        }
        if (str[i] == ')' && !v_check)
        {
            u += str[i];
            count--;
        }

        if (count == 0)
        {
            if (!v_check)
                i++;
            v_check = true;
            v += str[i];
        }
    
    }
    
    if (check(u)) {
        return u += solve(v);
    }
    else {
        // 4.1번
        string temp = "(";

        // 4.2 번
        temp += solve(v);

        // 4.3 번
        temp += ")";

        //4.4 번
        u =  u.substr(1, u.length() - 2);
        for (int i = 0; i < u.length(); i++)
        {
            if (u[i] == '(')
                u[i] = ')';
            else
                u[i] = '(';
        }
        temp += u;
        //4.5 번
        return temp;

    }
}

string solution(string p) {
    string answer = "";
    return solve(p);
}



int main(void)
{
    cout << solution("()))((()") << "\n";
   // cout << solution(")(") << "\n";

    return 0;
}