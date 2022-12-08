#include <iostream> 
#include <string.h> 
using namespace std;

int main(){ 
  string str; 
  int count;  
  cout<<"Enter the string : \n"; 
  getline(cin,str);

  cout<<"Duplicate characters in a given string: \n"; 
  //Counts each character present in the string 

  int l=str.length();
  for(int i = 0; i <l; i++) { 
    count = 1; //Updates the count again to 1 for every new character

    for(int j = i+1; j < l; j++) {
      if(str[i] == str[j] && str[i] != ' ') { 
      count++; 
     //Set string[j] to 0 to avoid printing the visited character 
     str[j] = '0'; 
    } 
  }

  //A character is considered as duplicate if count is greater than 1

  if(count > 1 && str[i] != '0') 
    cout<<str[i]; 
  }

  return 0; 
 }