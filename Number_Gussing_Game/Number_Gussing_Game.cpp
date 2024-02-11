# include <iostream>
# include <string>
# include <cmath>
#include <ctime>
#include <cstdlib>

// for time() function

using namespace std;

//Project Two (Number Gussing Game) 1
int Readnumber(string Message)
{
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0 && Number > 100);
	return Number;
}
bool CheckNumber()
{
	int Number;
	int Counter = 5;
	int User_Number = 1234;
	do
	{
		Counter--;
		Number = Readnumber("Enter The Number");
		if (Number == User_Number)
		{
			return 1;
		}
		else
		{
			system("color 4F");
			cout << "\nWrong Number" << endl;
			cout << "You Have " << Counter << " Tries\n" << endl;


		}

	} while (Counter > 0 && Counter < 5);
	return 0;

}
void Start_Game()
{

	if (CheckNumber())
	{
		system("color 2F"); // Print The Green Color In The Screen
		cout << "\nSeccess Game 👏" << endl;
	}
	else
	{
		cout << "\nYou Losed Game !" << endl;
	}
}
int main()
{
	Start_Game();
	return 0;
}