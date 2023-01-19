//https://school.programmers.co.kr/learn/courses/30/lessons/12925#
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int len = s.length();
    bool isPlus = true;
    int i = 0;
    if (!(s[0] >= '0' && s[0] <= '9')){
        if (s[0] == '-') isPlus = false;
        i++;
    }
    for (; i < len; i++)
    {
        answer *= 10;
        answer += s[i] - '0';
    }
    if(!isPlus) answer -= 2*answer;
    return answer;
}