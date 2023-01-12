//https://school.programmers.co.kr/learn/courses/30/lessons/12928
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0, i = 0;
    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0) answer += (i + (n / i));
    }
    if (i * i == n) answer += i;
    return answer;
}