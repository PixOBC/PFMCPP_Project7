cmake_minimum_required(VERSION 3.19)
project(PFMCPP_Project7)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(PFMCPP_Project7
        AttackItem.cpp
        AttackItem.h
        Character.cpp
        Character.h
        DefensiveItem.cpp
        DefensiveItem.h
        Dragon.cpp
        Dragon.h
        DragonSlayer.cpp
        DragonSlayer.h
        Dwarf.cpp
        Dwarf.h
        HelpfulItem.cpp
        HelpfulItem.h
        Item.h
        main.cpp
        Paladin.cpp
        Paladin.h
        Utility.cpp
        Utility.h)
