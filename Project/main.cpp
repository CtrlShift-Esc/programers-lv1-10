#include <string>
#include <vector>

using namespace std;

int solution(string s) {
	int answer = 0;
	if (s[0] == '-')
	{
		answer = stoi(s.substr(1, s.length()));
		answer *= -1;
	}
	else
		answer = stoi(s);
	return answer;
}

void main()
{
	//test
	//auto ret = solution("-1234");
}