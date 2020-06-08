
#include <iostream>
#include <string>
#include "PhoneticFinder.hpp"
#include <stdexcept>

using namespace std;

namespace phonetic {

	bool help(char x , char y){
		if (x==y) return true;
    if((x==y)||(x==y+32)||(x==y-32))    return true;
       
    if(((x=='v')||(x=='V'))&&((y=='w')||(y=='W')))   return true;     
    if(((x=='w')||(x=='W'))&&((y=='v')||(y=='V')))   return true;

    if((((x=='b')||(x=='B'))&&(((y=='f')||(y=='F'))||((y=='p')||(y=='P')))))   return true;
    if((((x=='f')||(x=='F'))&&(((y=='b')||(y=='B'))||((y=='p')||(y=='P')))))   return true;
    if((((x=='p')||(x=='P'))&&(((y=='f')||(y=='F'))||((y=='b')||(y=='B')))))   return true;


    if(((x=='g')||(x=='G'))&&((y=='j')||(y=='J')))   return true;     
    if(((x=='j')||(x=='J'))&&((y=='g')||(y=='G')))   return true;

    if((((x=='c')||(x=='C'))&&(((y=='k')||(y=='K'))||((y=='q')||(y=='Q')))))   return true;
    if((((x=='k')||(x=='K'))&&(((y=='c')||(y=='C'))||((y=='q')||(y=='Q')))))   return true;
    if((((x=='q')||(x=='Q'))&&(((y=='c')||(y=='C'))||((y=='k')||(y=='K')))))   return true;

    
    if(((x=='s')||(x=='S'))&&((y=='z')||(y=='Z')))   return true;     
    if(((x=='Z')||(x=='z'))&&((y=='s')||(y=='S')))   return true;


    if(((x=='d')||(x=='D'))&&((y=='t')||(y=='T')))   return true;     
    if(((x=='t')||(x=='T'))&&((y=='d')||(y=='D')))   return true;


    if(((x=='o')||(x=='O'))&&((y=='u')||(y=='U')))   return true;     
    if(((x=='u')||(x=='U'))&&((y=='o')||(y=='O')))   return true;


    if(((x=='i')||(x=='I'))&&((y=='y')||(y=='Y')))   return true;     
    if(((x=='y')||(x=='Y'))&&((y=='i')||(y=='I')))   return true;  


   
            
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
