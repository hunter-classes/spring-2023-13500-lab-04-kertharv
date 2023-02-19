/** 
* Spring 2023 - Lab 04
* Last name: Cataluna
* First name: Kert Harvey
* GitHub username: kertharv
* Instructor: Genady Maryash
* Recitation Instructor: Prof. Zamansky
*/

#include <iostream>
#include <cmath>
#include "funcs.h"

// Box Width Task A
void box(int width, int height)
{
    for(int i = 0; i < height; i++)
    {
        for(int x = 0; x < width; x++)
        {
            std::cout<<"* ";
        }
        std::cout<<"\n";
    }
}

// Checkerboard Task B
void checkerboard(int height, int width)
{
    for(int row = 0; row < height; row++)
    {
        for(int col = 0; col < width; col += 2)
        {
            if(row % 2 != 0)
            {
                std::cout << " *";
            }
            else
            {
                std::cout << "* ";
            }
        }
        std::cout << "\n";
    }
}

// Cross Task C
void cross(int size)
{
    for(int row = 1; row <= size; row++)
    {
        for(int col = 1; col <= size; col++)
        {
            if(col == row || col == (size + 1) - row)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
}

// Lower Triangle Task D
void lower(int length)
{
    for(int row = 0; row <= length; row++)
    {
        for(int col = 0; col < row; col++)
        {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
}

// Upper Triangle Task E
void upper(int length)
{
    for(int row = length; row > 0; row--)
    {
        for(int spc = length - row; spc > 0; spc--)
        {
            std::cout << " ";
        }
        for(int col = row; col > 0; col--)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

// Trapezoid Task F
void trapezoid(int height, int width)
{
     for(int row = 0; row < height; row++)
    {
        if(height % 6 == 1)
        {
            std::cout << "Impossible shape!" << std::endl;
            break;
        }
        for(int spc = 0; spc < row; spc++)
        {
            std::cout << " ";
        }
        for(int col = width; col > 0; col--)
        {
            std::cout << "*";
        }
            width = width - 2;
            std::cout << "\n";
    }
}

// Checkerboard 3x3 Task G
void checkerboard3x3(int height, int width)
{
    for(int row = 0; row < height; row++)
    {
        for(int col = 0; col < width; col++)
        {
            if((row / 3) % 2 != 0)
            {
                if((col / 3) % 2 != 0)
                {
                    std::cout << "*";
                }
                else
                {
                    std::cout << " ";
                }
            }
            else
            {
                if((col / 3) % 2 != 0) 
                {
                    std::cout << " ";
                }
                else
                {
                    std::cout << "*";
                }
            }
        }
        std::cout << "\n";
    }
}