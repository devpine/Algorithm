#include <iostream>
#include <string>
#include <stack>
using namespace std;

//int solution(string s)
//{
//    stack<char> s1;
//    stack<char> s2;
//    for (int i = s.length()-1; i >= 0 ; i--)
//    {
//        s1.push(s[i]);
//    }
//
//    while (!s1.empty() || !s2.empty())
//    {
//        s2.push(s1.top());
//        s1.pop();
//        if (!s1.empty())
//        {
//            if (s1.top() == s2.top())
//            {
//                s1.pop();
//                s2.pop();
//                if (!s2.empty())
//                {
//                    s1.push(s2.top());
//                    s2.pop();
//                }
//            }
//        }
//        else
//            return 0;         
//    }
//    return 1;   
//}

int solution(string s)
{
    stack<char> st;
    int st_size = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (st_size > 0 && st.top() == s[i])
        {
            st.pop();
            st_size--;
        }
        else
        {
            st.push(s[i]);
            st_size++;
        }
    }
    return (st_size == 0);
}

int main(void)
{
    cout << solution("abbabb") << endl;
    return 0;
}