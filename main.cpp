/** 
* Spring 2023 - Lab 04
* Last name: Cataluna
* First name: Kert Harvey
* GitHub username: kertharv
* Instructor: Genady Maryash
* Recitation Instructor: Prof. Zamansky
*/

#include <iostream>
#include "funcs.h"

int main()
{
    // Box Task A
    std::cout << "Task A \n";
    std::cout << "Box width = 5, height = 4 \n";
    box(5, 4);
    std::cout << "Box width = 8, height = 4 \n";
    box(8, 4);
    std::cout << "Box width = 13, height = 16 \n";
    box(13, 16);
    std::cout << "\n------------------\n";

    // Checkerboard Task B
    std::cout << "Task B \n";
    std::cout << "Checkerboard width = 13, height = 5 \n";
    checkerboard(5,13);
    std::cout << "Checkerboard width = 3, height = 8 \n";
    checkerboard(8,3);
    std::cout << "Checkerboard width = 25, height = 14 \n";
    checkerboard(14,25);
    std::cout << "\n------------------\n";

    // Cross Task C
    std::cout << "Task C \n";
    std::cout << "Cross size = 6 \n";
    cross(6);
    std::cout << "Cross size = 4 \n";
    cross(4);
    std::cout << "Cross size = 10 \n";
    cross(10);
    std::cout << "\n------------------\n";

    // Lower Triangle Task D
    std::cout << "Task D \n";
    std::cout << "Size = 6 \n";
    lower(6);
    std::cout << "Size = 2 \n";
    lower(2);    
    std::cout << "Size = 10 \n";
    lower(10);
    std::cout << "\n------------------\n";

    // Upper Triangle Task E
    std::cout << "Task E \n";
    std::cout << "size = 6 \n";
    upper(6);
    std::cout << "size = 7 \n";
    upper(7);
    std::cout << "size = 3 \n";
    upper(3);
    std::cout << "\n------------------\n";

    // Trapezoid Task F
    std::cout << "Task F \n";
    std::cout << "Trapezoid height = 5, width = 12 \n";
    trapezoid(5,12);
    std::cout << "Trapezoid height = 3, width = 5 \n";
    trapezoid(3,5);
    std::cout << "Trapezoid height = 7, width = 12 \n";
    trapezoid(7,12);
    std::cout << "\n------------------\n";

    // Checkerboard 3x3 Task G
    std::cout << "Task G \n";
    std::cout << "Checkerboard3x3, height = 11, width= 16 \n";
    checkerboard3x3(11, 16);
    std::cout << "Checkerboard3x3, height = 27, width= 27 \n";
    checkerboard3x3(27, 27);
    std::cout << "Checkerboard3x3, height = 5, width= 10 \n";
    checkerboard3x3(5, 10);
}


