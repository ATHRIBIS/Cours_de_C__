cmake_minimum_required(VERSION 3.17)
project(Cours)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(Tableaux)
add_subdirectory(Pointeur)
add_subdirectory(Flux)
add_subdirectory(TP_2_Mot_mystere)
add_subdirectory(POO)


add_executable(Cours main.cpp TP_1_Convertisseur_secondes/maths.cpp TP_1_Convertisseur_secondes/maths.h TP_1_Convertisseur_secondes/TP_1.cpp TP_1_Convertisseur_secondes/convertSeconds.cpp TP_1_Convertisseur_secondes/convertSeconds.h Tableaux/calculMoyenne.cpp Tableaux/calculMoyenne.h Tableaux/calculMoyenneVector.cpp Tableaux/calculMoyenneVector.h)
