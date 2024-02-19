//<8 kyu>

// Can you find the needle in the haystack?

// Write a function findNeedle() that takes an array full of junk but containing one "needle"

// After your function finds the needle it should return a message (as a string) that says:

// "found the needle at position " plus the index it found the needle, so:

// Example(Input --> Output)

// ["hay", "junk", "hay", "hay", "moreJunk", "needle", "randomJunk"] --> "found the needle at position 5"

#include <vector>
#include <string>
using namespace std;

string findNeedle(const vector<string>& haystack)
{
  int index=0;
  
    for(const auto& e:haystack){
      if(e=="needle"){
        break;
      }else{
        index++;
      }
    }
  
    return "found the needle at position " + to_string(index);
}