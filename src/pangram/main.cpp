#include <iostream>
#include <string>

#include "pangram.h"

using namespace std;

int main(int argc, char** argv) {

  // Test strings
  std::string case_0 = "A quick brown fox jumps over the lazy dog";
  std::string case_1 = "When zombies arrive quickly, fax judge Pat";
  std::string case_2 = "The five boxing wizards jump quickly";
  std::string case_3 = "Amazingly few discotheques provide jukeboxes";

  for(string s : vector<string> {case_0, case_1, case_2, case_3}) {
    cout << "\"" + s + "\"" + " is " + (pangram(s) ? "" : "not ") + "a pangram" << endl;
  }
  
  return 0;
}
  