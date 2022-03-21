cmake_minimum_required(VERSION 3.0)

if(CMAKE_BUILD_TYPE MATCHES Release)
	message("Release Build")
else(CMAKE_BUILD_TYPE MATCHES Release)
	message("Debug Build")
	
endif(CMAKE_BUILD_TYPE MATCHES Release)

add_definitions(-std=c++11)
set( CMAKE_CXX_COMPILER "/msys64/mingw64/bin/g++" )
set( CMAKE_C_COMPILER "/msys64/mingw64/bin/gcc" )
# une image PNG par frame: utiliser -DPNGFILES=ON


project(Matrice CXX)
add_executable(Matrice ..\examples\example_matrice.cpp ..\matrice.cpp)


    
