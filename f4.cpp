/*
 * Project:	    Focused 4
 * Author:	    Hoang Phuc Tran
 * Student ID:  8789102
 * Date:		July 16, 2022
 * Description:  a program that stores words in a vector then loops to get input for words to
search for.
 */
#include <vector>
#include <iostream>
#include <string>
#include <new>	

using namespace std;


int main()
{
	// declare an interator 
	vector<string>::iterator i;

	// declare a vector variable to contain C++ strings
	vector<string> myVector;

	// Declare a string to insert into the vector
	string input;

	// a string is used to search in the vector
	string search;

	cout << "Enter words (\".\" to stop)" << endl;

	// Check if user's input is '.' character or not
	while (input != ".")
	{
		// Get input from the user
		getline(cin, input);

		// Push string in vector
		myVector.push_back(input);
	}

	// Check if user's input is '.' character or not
	while (search != ".")
	{
		cout << "Enter a word to search for: ";

		// Get input from the user
		getline(cin, search);

		// Check if user's input is '.' character or not
		if (search == ".")
		{
			break;
		}
		else
		{
			// Called find method to find the string
			i = find(myVector.begin(), myVector.end(), search);

			// if an interator point to just past the last element in the vector
			if (i != myVector.end())
			{
				cout << "Success!" << endl;
			}
			else
			{
				cout << "Not there!" << endl;
			}

		}

	}


	return 0;
}

