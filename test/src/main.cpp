#include "Foo.h"
#include <vector>
#include <string>

int main() {
    Foo();

    std::vector<std::string> vec;
    vec.push_back("test_package");

    Foo_print_vector(vec);
}
