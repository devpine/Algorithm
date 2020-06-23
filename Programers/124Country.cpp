#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(int n) {
    string answer = "";
    int temp;

    while(n > 0)
    {
        temp = n % 3;
        n -= 1;

        if (temp == 0)
            answer = "4" + answer;
        if (temp == 1)
            answer = "1" + answer;
        if (temp == 2)
            answer = "2" + answer;

        n = n / 3;
    }
    return answer;
}

int main(void)
{
    string str;

    //for(int i = 1; i <= 40; i++)
        cout << solution(499999999) << endl;

    

    return 0;
}