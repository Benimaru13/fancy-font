// This program takes in user input and stylizes the input accordingly

#include <iostream>
#include <string>
#include <unordered_map>
#include <functional>
#include "fontFunc.h"
using namespace std;

void stylize(char);
void parse(string);

const unordered_map<char, function<void()>> fonts = {
                                                        {'A', letterA},
                                                        {'B', letterB},
                                                        {'C', letterC},
                                                        {'D', letterD},
                                                        {'E', letterE},
                                                        {'F', letterF},
                                                        {'G', letterG},
                                                        {'H', letterH},
                                                        {'I', letterI},
                                                        {'J', letterJ},
                                                        {'K', letterK},
                                                        {'L', letterL},
                                                        {'M', letterM},
                                                        {'N', letterN},
                                                        {'O', letterO},
                                                        {'P', letterP},
                                                        {'Q', letterQ},
                                                        {'R', letterR},
                                                        {'S', letterS},
                                                        {'T', letterT},
                                                        {'U', letterU},
                                                        {'V', letterV},
                                                        {'W', letterW},
                                                        {'X', letterX},
                                                        {'Y', letterY},
                                                        {'Z', letterZ},
                                                        {' ', space}
                                                    };

int main () {
    string message;
    cout << "Welcome to the Font Stylzer Program!" << endl;
    cout << "Please input the text you would like to stylize: " << endl;
    getline(cin, message);

    cout << endl << endl; 
    cout << "Processing..." << endl;

    parse(message);

    return 0;
}

void parse(string info) {
    for (char ch: info) {
        stylize(ch);
        cout << endl << endl;
    }

}

void stylize(char ch) {
    if (fonts.find(ch) != fonts.end())
        fonts.at(ch)();

}