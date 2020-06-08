
#include <iostream>
#include <string>
#include "PhoneticFinder.hpp"

using namespace std;

namespace phonetic {

	bool help(char a , cahr b){
		//if they similar
		if(a == y)
			return true;

		//upper case
		else if( (a==b+32) || (a=b-32))
			return true;

		//else all the other cases:-
		else if(((a=='v')||(a=='V'))&&((b=='w')||(b=='W')))   
			return true;     
    	else if(((a=='w')||(a=='W'))&&((b=='v')||(b=='V')))   
    		return true;

    	else if((((a=='b')||(a=='B'))&&(((b=='f')||(b=='F'))||((b=='p')||(b=='P')))))  
    	 return true;
    	else if((((a=='f')||(a=='F'))&&(((b=='b')||(b=='B'))||((b=='p')||(b=='P')))))   
    		return true;
   		else if((((a=='p')||(a=='P'))&&(((b=='f')||(b=='F'))||((b=='b')||(b=='B')))))  
   		 return true;


   		else if(((a=='g')||(a=='G'))&&((b=='j')||(b=='J')))   
   			return true;     
    	else if(((a=='j')||(a=='J'))&&((b=='g')||(b=='G')))   
    		return true;

    	else if((((a=='c')||(a=='C'))&&(((b=='k')||(b=='K'))||((b=='q')||(b=='Q')))))  
    	 return true;
    	else if((((a=='k')||(a=='K'))&&(((b=='c')||(b=='C'))||((b=='q')||(b=='Q')))))   
    		return true;
    	else if((((a=='q')||(a=='Q'))&&(((b=='c')||(b=='C'))||((b=='k')||(b=='K')))))   
    		return true;

    
    	else if(((a=='s')||(a=='S'))&&((b=='z')||(b=='Z')))   
    		return true;     
    	else if(((a=='Z')||(a=='z'))&&((b=='s')||(b=='S')))   
    		return true;


    	else if(((a=='d')||(a=='D'))&&((b=='t')||(b=='T')))   
    		return true;     
    	else if(((a=='t')||(a=='T'))&&((b=='d')||(b=='D')))   
    		return true;


    	else if(((a=='o')||(a=='O'))&&((b=='u')||(b=='U')))  
    	 return true;     
    	else if(((a=='u')||(a=='U'))&&((b=='o')||(b=='O')))   
    		return true;


    	else if(((a=='i')||(a=='I'))&&((b=='y')||(b=='Y')))  
    	 return true;     
    	else if(((a=='y')||(a=='Y'))&&((b=='i')||(b=='I')))  
    	 return true;  


    	else
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
