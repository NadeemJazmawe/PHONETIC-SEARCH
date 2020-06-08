#include <iostream>
#include <stdexcept>
#include <string.h> 
#include "PhoneticFinder.hpp"

using namespace std;


namespace phonetic{


bool help( char a , char b){
		if(a == b ) 
			return true;

		if(a == b+32)
			return true;
		if(a == b-32)
			return false;

		if((a == 'v') || (a == 'V') || (a == 'w') || (a == 'W'))
			if((b == 'v') || (b == 'V') || (b == 'w') || (b == 'W'))
				return true;

		if((a == 'g') || (a == 'G') || (a == 'j') || (a == 'J'))
			if((b == 'g') || (b == 'G') || (b == 'j') || (b == 'J'))
				return true;

		if((a == 's') || (a == 'S') || (a == 'z') || (a == 'Z'))
			if((b == 's') || (b == 'S') || (b == 'z') || (b == 'Z'))
				return true;

		if((a == 'd') || (a == 'D') || (a == 't') || (a == 'T'))
			if((b == 'd') || (b == 'D') || (b == 't') || (b == 'T'))
				return true;

		if((a == 'o') || (a == 'O') || (a == 'u') || (a == 'U'))
			if((b == 'o') || (b == 'O') || (b == 'u') || (b == 'U'))
				return true;

		if((a == 'i') || (a == 'I') || (a == 'y') || (a == 'Y'))
			if((b == 'i') || (b == 'I') || (b == 'y') || (b == 'Y'))
				return true;

		if((a == 'c') || (a == 'C') || (a == 'k') || (a == 'K') || (a == 'q') || (a == 'Q'))
			if((b == 'c') || (b == 'C') || (b == 'k') || (b == 'K') || (b == 'q') || (b == 'Q'))
				return true;

		if((a == 'b') || (a == 'B') || (a == 'f') || (a == 'F') || (a == 'p') || (a == 'P'))
			if((b == 'b') || (b == 'B') || (b == 'f') || (b == 'F') || (b == 'p') || (b == 'P'))
				return true;

		return false;
	}

string find(string text,string word)
{
   string str = "";
    int j = 0;
    size_t i = 0;
    for (i = 0; i < text.length(); i++)
    {

        if (word == "")
            throw std::invalid_argument("Can't find the word in the text !");

        while (text[i] == ' ')
        {
            i++;
        }
        while (word[j]==' ')
        {
            j++;
        }

        while ((text.length() > i) && (word.length() > j) && (help(text[i], word[j]))&&(text[i]!=' '))
        {
            str += text[i];
            j++;
            i++;
        }
        if (str.length() == word.length())
            return str;

        else
        {
            str.clear();
            j = 0;
        }

        if ((text.length() == i) && (word.length() != str.length()))
        {
            throw runtime_error("The word " + word + " is not in the text.");
        }
    }
    throw runtime_error("The word " + word + " is not in the text.");    
    }
}
