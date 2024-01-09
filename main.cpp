// very basic example on how to read from a file and output to stdout via cout
#include <bits/stdc++.h>

using namespace std;

int main()
{
	ifstream file("testfile.txt");
	if (file.is_open())
	{
		while (file.peek() != EOF)
		{
			string str;
			getline(file, str);
			cout << str << endl;
		}
	}
	else
	{
		cout << "Error: could not open file";
	}
	return 0;
}