#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    int num;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            num = s[i];

            if (num >= 'A' && num <= 'Z')
            {
                num = s[i] + n;
                if (num > 'Z')
                    num -= 26;

            }
            else if (num >= 'a' && num <= 'z')
            {
                num = s[i] + n;
                if (num > 'z')
                    num -= 26;
            }
            s[i] = num;
        }
    }
    return s;
}


int main(void)
{
    string s = "a B z";
    
    cout << solution(s,4) << endl;
    return 0;
}