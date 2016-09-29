#include <iostream>         // include input/output library
#include <string>           // include string library
void heading();            // Function Prototype

using namespace std;            // allows all of the names in a namespace to 
								// be accessed without the namespace identifier as a qualifier


int main()                      //Begin main function
{
	heading();               // Call heading function
	string sentence, word1, word2, word3, word4;                                 // 1. declare variables
	int space_pos1, space_pos2, space_pos3, period_pos;
	cout << "Enter a four word sentence with spaces to sperate each word. \n";   // 2. prompt user for input
	getline(cin, sentence);                                                      // 3. get the sentence from user
	space_pos1 = sentence.find(' ');                                             // 4. find the first space
	word1 = sentence.substr(0, space_pos1);                                      // 5. get the first word
	cout << word1 << endl;                                                       // 6. display the first word
	sentence = sentence.substr(space_pos1 + 1, sentence.size() - space_pos1);    // 7. reduce the string by one word
	space_pos2 = sentence.find(' ');                                             // 8. find the second space
	word2 = sentence.substr(0, space_pos2);                                      // 9. get the second word
	cout << word2 << endl;                                                       // 10. display the second word
	sentence = sentence.substr(space_pos2 + 1, sentence.size() - space_pos2);    // 11. reduce the string by one word
	space_pos3 = sentence.find(' ');                                             // 12. find the third space
	word3 = sentence.substr(0, space_pos3);                                      // 13. get the third word
	cout << word3 << endl;                                                       // 14. display the third word
	sentence = sentence.substr(space_pos3 + 1, sentence.size() - space_pos3);    // 15. reduce the string by one word
	period_pos = sentence.find('.');                                             // 16. find the period
	word4 = sentence.substr(0, period_pos);                                      // 17. get the fourth word
	cout << word4 << endl;                                                       // 18. display the fourth word
	return 0;
}

void heading()
{
	cout << "****************************** \n"; //show heading as non-value returning function
	cout << "Conrad Blash \n";
	cout << "@02731960 \n";
	cout << "CSCI-135 Computer Science I \n";
	cout << "Assignment 4 \n";
	cout << "9/21/15 \n";
	cout << "****************************** \n\n";
}
/*
******************************
Conrad Blash
@02731960
CSCI-135 Computer Science I
Assignment 4
9/21/15
******************************

Enter a four word sentence with spaces to sperate each word.
The fox ran fast.
The
fox
ran
fast
Press any key to continue . . .
*/