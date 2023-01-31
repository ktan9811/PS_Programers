//https://school.programmers.co.kr/learn/courses/30/lessons/42885
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    deque<int> dq;
    sort(people.begin(), people.end());
    copy(people.begin(), people.end(), inserter(dq, dq.end()));
    while (true) {
        if (dq.size() <= 1) {
            answer += dq.size();
            break;
        }
        if (dq.front() + dq.back() <= limit) {
            dq.pop_front();
        }
        dq.pop_back();
        answer += 1;
    }
    return answer;
}