#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

void print(stack<char> &s)
{
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    bool tag = false;
    string str;
    stack<char> s;
    getline(cin, str);

    for (char ch : str)
    {
        if (ch == '<')
        {
            tag = true;
            print(s);
            cout << ch;
        }
        else if (ch == '>')
        {
            tag = false;
            cout << ch;
        }
        else
        {
            if (tag)
            {
                cout << ch;
            }
            else
            {
                if (ch == ' ')
                {
                    print(s);
                    cout << ch;
                }
                else
                {
                    s.push(ch);
                }
            }
        }
    }
    print(s);

    return 0;
}
