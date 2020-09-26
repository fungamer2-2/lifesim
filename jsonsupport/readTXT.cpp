#include <readTXT.h>
#include <fstream>

const char * readTXT(const char * path, short int pos) {
    std::ifstream in(path);
    short int lineNumber = 0;
    std::string line;
    while (lineNumber != pos) {
        getline(in, line);
        lineNumber++;
    }
    getline(in, line);
    in.close();
    return line.c_str();
}