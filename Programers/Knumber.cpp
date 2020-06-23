#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;
    temp.clear();

    for (int z = 0; z < commands.size(); z++)
    {
        int i = (commands[z][0])-1;
        int j = commands[z][1];
        int k = commands[z][2];

        temp.assign(array.begin()+i, array.begin()+j);
        sort(temp.begin(), temp.end());
        answer.push_back(temp[k-1]);
    }
    return answer;
}

int main(void)
{
    vector<int> array = { 1,5,2,6,3,7,4 };
    vector<vector<int>> commands = { {2,5,3},{4,4,1},{1,7,3} };
    
    vector<int> arr = solution(array, commands);

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }
    
    return 0;
}