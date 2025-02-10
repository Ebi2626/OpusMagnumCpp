cmake_minimum_required(VERSION 3.30)  # Poprawiona wersja
project(OpusMagnumCpp)                # Nazwa projektu

set(CMAKE_CXX_STANDARD 17)             # Ustawienie standardu C++17
set(CMAKE_CXX_STANDARD_REQUIRED True)  # Wymaganie wsparcia dla standardu
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "./build") # Ustawienie katalogu wyjściowego dla plików wykonywalnych

add_executable(embedded_types_limits metadata/embedded_types_limits.cpp)  # Budowanie pliku z rozmiarami typów danych
