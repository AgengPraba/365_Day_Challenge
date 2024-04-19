// <7 kyu>

// Your team is writing a fancy new text editor and you've been tasked with implementing the line numbering.

// Write a function which takes a list of strings and returns each line prepended by the correct number.

// The numbering starts at 1. The format is n: string. Notice the colon and space in between.

// Examples: (Input --> Output)

// [] --> []
// ["a", "b", "c"] --> ["1: a", "2: b", "3: c"]

#include <string>
#include <vector>

using namespace std;

vector<string> number(const vector<string> &lines)
{
  string number;
  vector<string> res;
  
    if(lines.empty()){
      return res;
    }else{
      for(int i=0; i<lines.size(); i++){
        number+=to_string(i+1);
        number+=": ";
        number+=lines[i];
        res.push_back(number);
        number.clear();
        
      }
      return res;
    }
}