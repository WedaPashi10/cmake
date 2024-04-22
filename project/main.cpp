#include <iostream>
#include "utilities.h"
#include "jsonify.h"

int main(void) {
    std::cout << createJsonString("Welcome Message", util::Hello());
    return EXIT_SUCCESS;
}
