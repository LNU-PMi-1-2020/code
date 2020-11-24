//
// Created by mymmrac on 24.11.20.
//

#ifndef LNU_READER_H
#define LNU_READER_H

#include <iostream>
#include <string>

using namespace std;

int readInt(const string &text);

int *readIntArray(const string &text, size_t &size);

double readDouble(const string &text);

double *readDoubleArray(const string &text, size_t &size);

string *readStringArray(const string &text, size_t &size);


#endif //LNU_READER_H
