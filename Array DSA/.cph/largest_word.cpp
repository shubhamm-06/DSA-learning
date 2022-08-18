// Find the largest word in a sentence.
// C++ program to find the number of
// charters in the longest word in
// the sentence.
#include <iostream>
using namespace std;

int LongestWordLength(string str)
{
	
	int n = str.length();
	int res = 0, curr_len = 0, i;
	
	for (int i = 0; i < n; i++) {
		
		if (str[i] != ' ')
			curr_len++;

		else {
			res = max(res, curr_len);
			curr_len = 0;
		}
	}
	return max(res, curr_len);
}

// Driver function
int main()
{
	string s =
	"I am an intern at earth";
					
	cout << LongestWordLength(s);
	return 0;
}

