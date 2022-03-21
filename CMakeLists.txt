cmake_minimum_required(VERSION 2.8)

if(CMAKE_BUILD_TYPE MATCHES Release)
	message("Release Build")
else(CMAKE_BUILD_TYPE MATCHES Release)
	message("Debug Build")
	
endif(CMAKE_BUILD_TYPE MATCHES Release)

if(UNIX)
	add_definitions(-DLINUX=1)
	if(PROFILING)
		message("Option de profilage ajouté!")
		set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pg")
		set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -pg")
		set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -pg")
	endif(PROFILING)
endif(UNIX)


add_definitions(-std=c++11)

# une image PNG par frame: utiliser -DPNGFILES=ON


project(Matrice CXX C)
add_executable(Matrice examples/example_matrice.cpp matrice.cpp)


