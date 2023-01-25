//https://school.programmers.co.kr/learn/courses/30/lessons/131705
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    int check;
    int size = number.size();
    for (int i = 0; i < size - 2; i++)
    {
        for (int j = i + 1; j < size - 1; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                check = number[i] + number[j] + number[k]; 
                if (check == 0) answer+= 1;
                check = 0;
            }
        }
    }
    return answer;
}