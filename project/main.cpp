#include <iostream>
#include "utilities.h"
#include "jsonify.h"

int main(void) {
    std::string key {"Welcome Message"};
    std::string value {util::Hello()};
    std::cout << createJsonString(key, value);

    return EXIT_SUCCESS;
}