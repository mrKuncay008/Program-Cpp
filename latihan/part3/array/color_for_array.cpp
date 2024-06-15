#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(int argc, char const *argv[])
{
	string colors[] = {"Red","Orange","Yellow","Green","Blue","Purple"};

	for (int i = 0; i < sizeof(colors) / sizeof(colors[0]); ++i)
	{
		string color = colors[i];

		if (color == "Green" || color == "Blue")
		{
			cout << toupper(color) << endl;
		}
		else 
		{
			cout << tolower(color) << endl;
		}
	}
	return 0;
}
