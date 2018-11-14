cmake_minimum_required(VERSION 2.8)

##varianta in care e folderul bibliotecii in folderul aplicatiei
	#project(test)
	#add_subdirectory(dreptunghi)
	#add_executable(test main.cpp)
	#target_link_libraries(test dreptunghiStaticLib)

##varianta in care folderele sunt pe acelasi nivel
	project(test)
	add_executable(test main.cpp)
	target_link_libraries(test ncomplex)
	#install(TARGETS test DESTINATION bin)
