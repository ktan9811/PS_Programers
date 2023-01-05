//https://school.programmers.co.kr/learn/courses/30/lessons/42840
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int a[5] = {1, 2, 3, 4, 5};
    int b[8] = {2, 1, 2, 3, 2, 4, 2, 5};
    int c[5] = {3, 1, 2, 4, 5};
    
    vector<vector<int>> score = {{0, 1}, {0, 2}, {0, 3}};
    int temp, idx = 0, len = answers.size();
    while(true)
    {
        temp = answers[idx];
        if (temp == a[idx % 5])        score[0][0] += 1;
        if (temp == b[idx % 8])        score[1][0] += 1;
        if (temp == c[(idx / 2) % 5])  score[2][0] += 1;
        if (len <= idx)              break;
        idx++;
    }
    sort(score.begin(), score.end());
    
    answer.push_back(score[2][1]);
    if(score[2][0] == score[1][0]) answer.push_back(score[1][1]);
    if(score[2][0] == score[0][0]) answer.push_back(score[0][1]);
    sort(answer.begin(), answer.end());
    return answer;
}