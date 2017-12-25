#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void rot(string &sentence)
{
	for (int i = 0; i < sentence.length(); i++)
	{
		if ((sentence[i] >= 97 && sentence[i] <= 121) || (sentence[i] >= 65 && sentence[i] <= 89))
		{
			sentence[i] += 1;
		}
		else if (sentence[i] == 122)
		{
			sentence[i] = 97;
		}
		else if (sentence[i] == 90)
		{
			sentence[i] = 65;
		}
	}
}

int main()
{
	int rotation = 0;
	string text = "";
	string choice = "";
	ofstream textfile;
	textfile.open("output.txt");
	
	while (choice != "QUIT" && choice != "5")
	{
		if (choice == "1" || choice == "ENCRYPT")
		{
			cout << "Enter the Number for rotation: ";
			cin >> rotation;
			cin.ignore();
			cout << "Enter the String: ";
			getline(cin, text);

			textfile << "Enter the Number for rotation: " << rotation << endl;
			textfile << "Enter the string: " << text << endl;

			for (int k = 0; k < rotation; k++)
			{
				rot(text);
			}
			
			cout << "Rotated: " << rotation << endl << endl;
			cout << "Rotated String: " << text << endl << endl;

			textfile << "Rotated: " << rotation << endl;
			textfile << "Rotated String: " << text << endl << endl;
		}

		else if (choice == "2" || choice == "DECRYPT")
		{
			cout << "Enter the String to brute force: ";
			getline(cin, text);
			cout << endl;

			textfile << "Enter the String to brute force: " << text << endl << endl;

			for (int k = 0; k < 26; k++)
			{
				rot(text);
				cout << text << endl;
				textfile << text << endl;
			}

			cout << "End of Brute Force."<< endl << endl;
			textfile << "End of Brute Force." << endl << endl;
		}
		else if (choice == "3" || choice == "ANALYSIS")
		{
			cout << "Enter the String for letter frequency analysis: ";
			getline(cin, text);
			textfile << "Enter the String for letter frequency analysis: " << text << endl;
			char letter = 65;
			int counter = 0;
			for (int k = 0; k < 26; k++)
			{
				for (int i = 0; i < text.length(); i++)
				{
					if (toupper(text[i]) == letter)
					{
						counter++;
					}
				}
				if (counter != 0)
				{
					cout << letter << " : " << counter << endl;
					textfile << letter << " : " << counter << endl;
					counter = 0;
				}
				letter++;
			}
		}
		else if (choice == "4" || choice == "SUBSTITUTION")
		{

			cout << "Enter the String for substitution: ";
			getline(cin, text);

			char subber;
			char subbed;
			char done;
			
			do
			{

			cout << "Replace: ";
			cin >> subbed;
			cout << "With: ";
			cin >> subber;

			for (int i = 0; i < text.length(); i++)
			{
				if (text[i] == subbed || text[i] == toupper(subbed))
				{
					text[i] = subber;
				}
			}
			cout << "Subbed: " << text << endl;
			cout << "Done? (Y/N) : ";
			cin >> done;
			} while (toupper(done)!='Y');
			cin.ignore();
		}
		else if (choice == "")
		{
		}
		else
		{
			cout << "INVALID" << endl;
		}

		cout << "Menu:" << endl;
		cout << "1: ENCRYPT" << endl;
		cout << "2: DECRYPT" << endl;
		cout << "3: ANALYSIS" << endl;
		cout << "4: SUBSTITUION" << endl;
		cout << "5: QUIT" << endl;

		cout << "Choice = ";
		getline(cin, choice);
		for (int i = 0; i < choice.length(); i++)
		{
			choice[i] = toupper(choice[i]);
		}

	}
		return 0;
}