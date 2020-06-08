
#include <iostream>
#include <string>
#include "PhoneticFinder.hpp"
#include <stdexcept>

using namespace std;

namespace phonetic {

	bool help(char x , char y){
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
 	string find(string a , string b){
 		if(a == "")
 			return a;
 		
 		if ((b == "") || (a.length() < b.length()))
            throw invalid_argument("there is no world similar to the word in the text !");


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
