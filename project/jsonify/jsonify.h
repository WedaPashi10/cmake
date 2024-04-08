#ifndef JSONIFY_H
#define JSONIFY_H

#include <iostream>
#include <string>
#include <sstream>
#include <type_traits>

std::string createJsonString(const std::string& key, const std::string& value);
std::string createJsonString(const std::string& key, const double& value);
std::string createJsonString(const std::string& key, const int& value);
std::string createJsonString(const std::string& key, const bool& value);

#endif // JSONIFY_H
