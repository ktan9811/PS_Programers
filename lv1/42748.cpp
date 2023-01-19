//https://school.programmers.co.kr/learn/courses/30/lessons/42748
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;
    int len = commands.size();
    for(int i = 0; i < len; i++){
        int start = commands[i][0] - 1;
        int end = commands[i][1];
        int idx = commands[i][2] - 1;
        for (int j = start; j < end; j++)
        {
            temp.push_back(array[j]);
        }
        sort(temp.begin(), temp.end());
        answer.push_back(temp[idx]);
        temp.clear();
    }
    return answer;
}