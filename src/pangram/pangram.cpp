#include "pangram.h"
#include <vector>

using namespace std;

bool pangram(const string text) {
  vector<char> seen;
  for(int i = 0; i < text.length(); ++i) {
    char current = tolower(text[i]);
    if(current != ' ') {
      bool char_not_seen = true;
      for(int j = 0; j < seen.size(); ++j) {
        if(seen[j] == current) {
          char_not_seen = false;
        }
      }
      if(char_not_seen) {
        seen.push_back(current);
      }
    }
  }
  return seen.size() == 26;  
}