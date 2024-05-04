// <6 kyu>

// Complete the solution so that it splits the string into pairs of two characters. If the string contains an odd number of characters then it should replace the missing second character of the final pair with an underscore ('_').

// Examples:

// * 'abc' =>  ['ab', 'c_']
// * 'abcdef' => ['ab', 'cd', 'ef']

#include <string>
#include <vector>

using namespace std;

vector<string> solution(const string &s)
{
  vector<string> res;
    for(int i = 0; i < s.size(); i += 2){
        if(i + 1 < s.size()){
            res.push_back(s.substr(i, 2));
        } else {
            res.push_back(s.substr(i, 1) + "_");
        }
    }
    return res;
}