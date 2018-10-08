#include "mystring.h"
#include <string.h>

string::string(){

}

string::~string() {

}

void string::resize(int size) {
    char *temp = new char[length];
    strcpy(temp, str);
}