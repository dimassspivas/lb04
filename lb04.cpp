
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int x = rand() % 11;
	int y;
	{
		while (true)
		{
			cout << "you: ";
			cin >> y;
			cout << '\n';
			{
				if (y < x)
					cout << "Bot: Too Low'\n'";
				else if (y == x)
					cout << "Bot: Correct\n";
				else if (y > x)
					cout << "Bot: Too High'\n'";
				else
					cout << "Enter A Integer'\n'";
			}
		}
	}
}
