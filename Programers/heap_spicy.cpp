#include <string>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> 
        q(scoville.begin(), scoville.end());

    for (int j = 0; j < scoville.size(); j++)
    {
        int temp;
        if (q.top() < K)        
            if (q.size() > 1)
            {
                temp = q.top();
                q.pop();
                temp = temp + (q.top() * 2);
                q.pop();
                q.push(temp);
                answer++;
            }
            else
                return -1;     
    }
    return answer;
}

int main(void)
{
    vector<int> sco = { 1, 2, 3, 9, 10, 12 };
    int K;

    cin >> K;

    cout << "°ª : " << solution(sco, K)<<endl;

}