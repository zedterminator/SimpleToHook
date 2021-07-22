#include <iostream>
#include <Windows.h>

using namespace std;

int health = 1000;

int main()
{
	cout << "So mau ban dau: " << health << endl;

	while (true)
	{
		if (GetAsyncKeyState(VK_SPACE) & 1)
		{
			health -= 12;
			cout << "So mau hien tai: " << health << endl;
		}
	}
}
