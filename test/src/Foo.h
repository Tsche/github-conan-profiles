#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define FOO_EXPORT __declspec(dllexport)
#else
  #define FOO_EXPORT
#endif

FOO_EXPORT void Foo();
FOO_EXPORT void Foo_print_vector(const std::vector<std::string> &strings);
