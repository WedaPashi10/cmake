#include <iostream>
#include <string>
#include <sstream>
#include "jsonify.h"

template<typename T>
std::string keyValueToJson(const std::string& key, const T& value) {
    std::ostringstream oss;
    oss << "\"" << key << "\": ";
    if constexpr (std::is_same_v<T, std::string>) {
        oss << "\"" << value << "\"";
    } else {
        oss << value;
    }
    return oss.str();
}

std::string createJsonString(const std::string& key, const std::string& value) {
    return "{" + keyValueToJson(key, value) + "}";
}

std::string createJsonString(const std::string& key, const double& value) {
    return "{" + keyValueToJson(key, value) + "}";
}

std::string createJsonString(const std::string& key, const int& value) {
    return "{" + keyValueToJson(key, value) + "}";
}

std::string createJsonString(const std::string& key, const bool& value) {
    std::string val {"false"};
    if(value) {
        val = "true";
    }
    return "{" + keyValueToJson(key, value) + "}";
}
