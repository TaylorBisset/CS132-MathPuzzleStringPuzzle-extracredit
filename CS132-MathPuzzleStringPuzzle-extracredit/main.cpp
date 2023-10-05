/*
 Name:          Taylor Bisset
 Section:       A
 Program Name:  CS132-MathPuzzleStringPuzzle-extracredit

 Description:   Message decoding program. 
                Encryption details below. 
 
 Repo:          https://github.com/TaylorBisset/CS132-MathPuzzleStringPuzzle-extracredit
 */

// main.cpp

#include <iostream>
#include <string>

using namespace std;

string decodeEncryption(string encryptedWord)
{
    string decodedWord = encryptedWord;

    for (int i = 0; i < encryptedWord.length(); i++)
    {
        char reverseAlpha = 'a' + ('z' - encryptedWord.at(i));
        decodedWord.at(i) = reverseAlpha;
    }
    return decodedWord;
}

int main()
{
    string encryptedWord = "nzgskfaaovhzivufm";
    //cin >> encryptedWord;

    string decodedWord = decodeEncryption(encryptedWord);

    cout << decodedWord << endl;

    // OS independent program termination sequence. 
#ifdef _WIN32
    cout << endl;
    system("pause");
#else
    cout << endl;
    cout << "Press any key to continue . . . ";
    cin.get();
#endif
    return 0;
}

/*

Output:

mathpuzzlesarefun

*/

/*

nzgskfaaovhzivufm

EvCC Math Awareness Month

The title is not a typo!  It is an example of an encrypted message and is also this week's puzzle for Math Awareness Month.  

To decode the message it will be helpful to know how it was encrypted.  

All upper case letters were replaced with lower case letters and spaces were removed.  

After that every letter was substituted with the opposite letter in the alphabet, 
meaning a was replaced with z, b was replaced with y, c was replaced with x, d was replaced with w, and so on.  

Can you reverse this process and decode the message?

Worth 5 points of Program extra credit.   
Submit your program and output for the mystery message above.

*/
