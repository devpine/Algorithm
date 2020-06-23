#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    set<int> setNum(nums.begin(), nums.end());   

    return min(nums.size()/2,setNum.size());
}

int main(void)
{
    vector<int> num = {3,3,3,2,2,4};
    cout << solution(num) << endl;
    return 0;
}