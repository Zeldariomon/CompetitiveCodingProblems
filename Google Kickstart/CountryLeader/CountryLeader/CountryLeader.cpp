#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int distinct(string s)
{
	int flag = 0;
	int distinctLetters = 0;
	for (int i = 0; i < s.length(); i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (s[i] == s[j])
				flag=1;
		}
		if (flag == 0)
			distinctLetters++;
		else
			flag = 0;
	}
	cout << "distinctLetters of " << s << " = " << distinctLetters << endl;
	return distinctLetters;
}

string leader()
{
	string leader,candidate;
	int N;
	cout << "Total Candidates = ";
	cin >> N;
	cin >> leader;
	for (int i = 0; i < N - 1; i++)
	{
		cin >> candidate;
		if (distinct(candidate) > distinct(leader))
		{
			leader = candidate;
		}
	}
	return leader;
}


int main()
{
	int T;
	string nameOfLeader;
	cout << "Test Cases = ";
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		nameOfLeader = leader();
		
		cout << "Case #" << i + 1 << " = " << nameOfLeader;
	}

	return 0;
}

