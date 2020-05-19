#include <iostream>
#include <string>
#include <cstdlib>

using std::string;

void convertString(int stringID, char* argv) {
  string stringToConvert = string(argv);

  size_t counter = 0; 
  for (size_t i = 0; i < stringToConvert.size(); i++) {
    if (isalpha(stringToConvert[i])) { 
        if (counter % 2 == 0) {
          stringToConvert[i] = tolower(stringToConvert[i]); 
        } else {
          stringToConvert[i] = toupper(stringToConvert[i]);
        }
      counter++;
    }
  }
  // Copy to clipboard instead
  std::cout << stringToConvert << std::endl;
}
		  

int main(int argc, char* argv[]) {
  // argv[i] is one string and is whatever is highlighted
  for (size_t i = 1; i < argc; i++) {
    convertString(i, argv[i]); 
  }
}
