#include "twice.h"

#include <iostream>
#include <vector>

// Exercise 0x051 && Exercise 0x052
std::string letter_seen_twice(std::string text) {
  for(int i = 0; i < text.length(); i++) {
    char c = text[i];
    for(int j = i + 1; j < text.length(); j++) {
      if(c == text[j]) {
        std::cout << "'" << c << "', found at index " << i << std::endl;
        std::cout << "'" << c << "', found at indices [" << i << ", " << j << "]" << std::endl;
        return std::to_string(c);
      }
    }
  }
  std::cout << "\'" + text + "\'" + " contains no duplicate letters" << std::endl;
  return "";
}