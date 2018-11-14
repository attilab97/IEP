cmake_minimum_required(VERSION 2.8)

##varianta in care e folderul bibliotecii in folderul aplicatiei
	#project(dreptunghi)
	#ADD_LIBRARY( dreptunghiStaticLib STATIC dreptunghi.cpp )

##varianta in care folderele sunt pe acelasi nivel

project(dreptunghi)

add_library(dreptunghi dreptunghi dreptunghi.cpp)

install(TARGETS dreptunghi DESTINATION lib)
install(FILES dreptunghi.h DESTINATION include)