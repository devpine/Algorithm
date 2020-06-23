#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    queue <int> que;
	int size = 0;
	int max_size = 0;
   
	for (int i = 0; i < truck_weights.size(); i++)
	{
		size = truck_weights[i];
		while (true)
		{
			if (que.empty())
			{
				que.push(size);
				max_size += size;
				answer++;
				break;
			}
			else if (que.size() == bridge_length)
			{
				max_size -= que.front();
				que.pop();
			}
			else
			{
				if (max_size + size > weight)
				{
					que.push(0);
					answer++;
				}
				else
				{
					que.push(size);
					max_size += size;
					answer++;
					break;
				}
			}
		}
	}
}


int main(void)
{
	//cout << solution(2, 10, { 7,4,5,6 }) << endl;
	//cout << solution(100, 100, { 10 }) << endl;
	//cout << solution(100, 100, { 10,10,10,10,10,10,10,10,10,10 }) << endl;
	cout << solution(5, 5, { 1,1,1,1,1,2,2,2,2 }) << endl;

	return 0;
}