cmake_minimum_required(VERSION 3.15)
project(Foo CXX)



add_executable(Foo src/Foo.cpp src/main.cpp)



install(TARGETS Foo DESTINATION "."
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )
