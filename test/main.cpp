#include <iostream>
#include <string>
#include <fstream>
using namespace std;


void stringIntoFile (string text, string file) {
    ofstream outputFile (file.c_str(), ios::out);
    if (outputFile.good()) {
        outputFile << text;
        outputFile.close();
    }
}

int main () {
    stringIntoFile("asd", "C:\\Users\\WilcoDeBoer\\Documents\\Winamp\\nowplaying.txt");
    return 0;
}
