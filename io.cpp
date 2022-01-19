/* 
Objective: 1. Read a sentence from the console.
2. Break the sentence into words using the space characer as a delimiter.
3. Iterate over each word, if the word is a numeric value then print its value
doubled, otherwise print out the word, with each output on its own line.
 */

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    float val;
    string str;
    string temp;
    getline(cin, str);

    stringstream streamer(str);

    while(getline(streamer, temp, ' ')){
        stringstream stream(temp);
        if (stream >> val)
            cout << 2*val << endl;
        else
            cout << temp << endl;
    }

    return EXIT_SUCCESS;
}
