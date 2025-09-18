#include <iostream>
#include <string>
using std::cout;	
using std::cin;
using std::string;


int main()
{
	//First Exercise
    std::cout << "This is my first Pluralsight exercise\n";
	std::cout << "My age is " << (10 + 9) << " years old\n";
	//Second Exercise
	int a = 7 * 2;
	cout << a + 3 << "\n";
	//Third Exercise
	cout << "Enter a number:\n";
	int b;
	cin >> b;
	cout << "You entered: " << b << "\n";
	//Fourth Exercise - Guess the number game
	int secretNumber = 13;
	int guess;
	cout << "Guess the integer number (between 1 and 20):\n";
	cin >> guess;
	while (guess != secretNumber)
	{
		if (guess < secretNumber)
		{
			cout << "Too low! Try again:\n";
		}
		else
		{
			cout << "Too high! Try again:\n";
		}
		cin >> guess;
	}
	cout << "Congratulations! You guessed the number!\n";
	 
	//Fifth Exercise - Which word is longer program
	string word1, word2;
	cout << "Enter the first word:\n";
	cin >> word1;
	cout << "Enter the second word:\n";  
	cin >> word2;
	if (word1.length() > word2.length())
	{
		cout << "The first word is longer: " << word1 << "\n";
	}
	else if (word2.length() > word1.length())
	{
		cout << "The second word is longer: " << word2 << "\n";
	}
	else
	{
		cout << "Both words are of equal length: " << word1 << " and " << word2 << "\n";
	}
	
	
	  
	
}


   