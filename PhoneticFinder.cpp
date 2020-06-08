
#include <iostream>
#include <string>
#include "PhoneticFinder.hpp"
#include <stdexcept>

using namespace std;

namespace phonetic {

	bool help(char a , char b){
		//if they similar
		if(a == b)
			return true;

		//upper case
		if( (a==b+32) || (a=b-32))
			return true;

		//else all the other cases:-
		if(((a=='v')||(a=='V'))&&((b=='w')||(b=='W')))   
			return true;     
    	if(((a=='w')||(a=='W'))&&((b=='v')||(b=='V')))   
    		return true;

    	if((((a=='b')||(a=='B'))&&(((b=='f')||(b=='F'))||((b=='p')||(b=='P')))))  
            return true;
    	if((((a=='f')||(a=='F'))&&(((b=='b')||(b=='B'))||((b=='p')||(b=='P')))))   
    		return true;
   		if((((a=='p')||(a=='P'))&&(((b=='f')||(b=='F'))||((b=='b')||(b=='B')))))  
   		    return true;


   		if(((a=='g')||(a=='G'))&&((b=='j')||(b=='J')))   
   			return true;     
    	if(((a=='j')||(a=='J'))&&((b=='g')||(b=='G')))   
    		return true;

    	if((((a=='c')||(a=='C'))&&(((b=='k')||(b=='K'))||((b=='q')||(b=='Q')))))  
            return true;
    	if((((a=='k')||(a=='K'))&&(((b=='c')||(b=='C'))||((b=='q')||(b=='Q')))))   
    		return true;
    	if((((a=='q')||(a=='Q'))&&(((b=='c')||(b=='C'))||((b=='k')||(b=='K')))))   
    		return true;

    
    	if(((a=='s')||(a=='S'))&&((b=='z')||(b=='Z')))   
    		return true;     
    	if(((a=='Z')||(a=='z'))&&((b=='s')||(b=='S')))   
    		return true;


    	if(((a=='d')||(a=='D'))&&((b=='t')||(b=='T')))   
    		return true;     
    	if(((a=='t')||(a=='T'))&&((b=='d')||(b=='D')))   
    		return true;


    	if(((a=='o')||(a=='O'))&&((b=='u')||(b=='U')))  \
            return true;     
    	if(((a=='u')||(a=='U'))&&((b=='o')||(b=='O')))   
            return true;


    	if(((a=='i')||(a=='I'))&&((b=='y')||(b=='Y')))  
    	 return true;     
    	if(((a=='y')||(a=='Y'))&&((b=='i')||(b=='I')))  
    	 return true;  


    	
    	return false;
	}


	/*
	now i will write the main function that will find if there is similar word in the text.
	a => the text
	b => the word that we search
	*/
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

        while ((text.length() > i) && (word.length() > j) && (similar(text[i], word[j]))&&(text[i]!=' '))
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
