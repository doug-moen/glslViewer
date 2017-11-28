#pragma once

#include <vector>

#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>

// #include <cctype>
// #include <iomanip>
// #include <math.h>

// #include <limits.h>
// #include <stdlib.h>

#include "glm/glm.hpp"

//  Return new string with all into lower letters 
std::string toLower(const std::string& _string);

//  Extract extrange characters from a string
void purifyString(std::string& _string);

// If match the first letters of stringA
bool beginsWith(const std::string &_stringA, const std::string &_stringB);

// Split a string into a vector of strings 
std::vector<std::string> split(const std::string &_string, char _sep);

bool isFloat(const std::string &_string);

//---------------------------------------- Conversions
bool toBool(const std::string &_string);
char toChar(const std::string &_string);
int toInt(const std::string &_string);
float toFloat(const std::string &_string);
double toDouble(const std::string &_string);

std::string toString(bool _bool);

template <class T>
std::string toString(const T& _value) {
    std::ostringstream out;
    out << _value;
    return out.str();
}

/// like sprintf "%4f" format, in this example precision=4
template <class T>
inline std::string toString(const T& _value, int _precision) {
    std::ostringstream out;
    out << std::fixed << std::setprecision(_precision) << _value;
    return out.str();
}

/// like sprintf "% 4d" or "% 4f" format, in this example width=4, fill=' '
template <class T>
inline std::string toString(const T& _value, int _width, char _fill) {
    std::ostringstream out;
    out << std::fixed << std::setfill(_fill) << std::setw(_width) << _value;
    return out.str();
}

/// like sprintf "%04.2d" or "%04.2f" format, in this example precision=2, width=4, fill='0'
template <class T>
inline std::string toString(const T& _value, int _precision, int _width, char _fill) {
    std::ostringstream out;
    out << std::fixed << std::setfill(_fill) << std::setw(_width) << std::setprecision(_precision) << _value;
    return out.str();
}

std::string toString(const glm::vec2 &_vec, char _sep = ',');
std::string toString(const glm::vec3 &_vec, char _sep = ',');
std::string toString(const glm::vec4 &_vec, char _sep = ',');

//-------------------------------------------------- << and >>
inline std::ostream& operator<<(std::ostream& os, const glm::vec3& vec);
inline std::istream& operator>>(std::istream& is, glm::vec3& vec);

