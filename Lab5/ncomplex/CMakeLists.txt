cmake_minimum_required(VERSION 2.8)

##varianta in care e folderul bibliotecii in folderul aplicatiei
	#project(dreptunghi)
	#ADD_LIBRARY( dreptunghiStaticLib STATIC dreptunghi.cpp )

##varianta in care folderele sunt pe acelasi nivel

project(ncomplex)

add_library(ncomplex ncomplex ncomplex.cpp)

install(TARGETS ncomplex DESTINATION lib)
install(FILES ncomplex.h DESTINATION include)