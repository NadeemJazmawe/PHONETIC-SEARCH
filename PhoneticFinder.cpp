
#include <iostream>
#include <string>
#include "PhoneticFinder.hpp"
#include <stdexcept>

using namespace std;

namespace phonetic {

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


	/*
	now i will write the main function that will find if there is similar word in the text.
	a => the text
	b => the word that we search
	*/
 	string find(string a , string b){
 		
 		string s = "";
 		size_t i = 0;
 		int j = 0;

        if (a == "" || b == "" )
            throw std::invalid_argument("Can't find the word in the text !");

 		for(i = 0 ; i < a.length() ; i++){
            while (b[j]==' ')
                j++;
            while (a[i] == ' ')
               i++;

            while ((help(a[i], b[j])) && (b.length() > i) && (a.length() > j)){
                s += a[i];
                j++;
                i++;
            }

            if (s.length() == b.length())
                return s;

            else{
              s.clear();
              j = 0;
            }
 		}
		throw invalid_argument("there is no world similar to the word in the text !");
	}
};
