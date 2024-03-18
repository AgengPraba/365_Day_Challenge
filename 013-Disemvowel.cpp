//<7 Kyu>

// Trolls are attacking your comment section!
// A common way to deal with this situation is to remove all of the vowels from the trolls' comments, neutralizing the threat.
// Your task is to write a function that takes a string and return a new string with all vowels removed.
// For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".

#include <string>
using namespace std;

string disemvowel(const string& str) {
  string res=str;
    for(size_t i=0; i<res.length();){
      if(res[i]=='a' || res[i]=='A' || res[i]=='i' || res[i]=='I' || res[i]=='u' || res[i]=='U' || res[i]=='e' || res[i]=='E' || res[i]=='o' || res[i]=='O'){
        res.erase(i,1);
      }else{
        i++;
      }
  }
  return res;
}