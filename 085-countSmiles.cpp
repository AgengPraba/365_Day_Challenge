// <6 kyu>

// Given an array (arr) as an argument complete the function countSmileys that should return the total number of smiling faces.

// Rules for a smiling face:

// Each smiley face must contain a valid pair of eyes. Eyes can be marked as : or ;
// A smiley face can have a nose but it does not have to. Valid characters for a nose are - or ~
// Every smiling face must have a smiling mouth that should be marked with either ) or D
// No additional characters are allowed except for those mentioned.

// Valid smiley face examples: :) :D ;-D :~)
// Invalid smiley faces: ;( :> :} :]

// Example
// countSmileys([':)', ';(', ';}', ':-D']);       // should return 2;
// countSmileys([';D', ':-(', ':-)', ';~)']);     // should return 3;
// countSmileys([';]', ':[', ';*', ':$', ';-D']); // should return 1;

#include <vector>
#include <string>
using namespace std;

int countSmileys(vector<string> arr)
{
  
  int count=0;
  vector<string> smiles = {":)",":D",";)",";D",":-)",":-D",";-)",";-D",":~)",":~D",";~)",";~D"};
  
  for(auto e:arr ){
    for(auto smile:smiles){
      if(e==smile){
        count++;
      }
    }
  }
  return count;
}