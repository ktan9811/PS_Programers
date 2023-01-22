//https://school.programmers.co.kr/learn/courses/30/lessons/12903
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int len = s.length();
    if (len % 2 == 0)
    {
        answer = answer + s[int(len/2) - 1] + s[int(len / 2)];
    }
    else
    {
        answer += s[int(len / 2)];
    }
    return answer;
}