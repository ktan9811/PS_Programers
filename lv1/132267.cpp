//https://school.programmers.co.kr/learn/courses/30/lessons/132267
#include <string>
#include <vector>

using namespace std;
//a �����ϴ� �ݶ�, b �޴� �ݶ�, n �� ���� 
int solution(int a, int b, int n) {
    int answer = 0;
    int temp = 0;
    
    while (a <= n)
    {
        temp = (n / a) * b;
        answer += temp;     
        n = n % a + temp;
    }
    return answer;
}