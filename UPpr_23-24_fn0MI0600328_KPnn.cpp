/**
*
* Solution to course project # 8
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2023/2024
*
* @author Yoan Desislavov Baychev
* @idnumber 0MI0600328
* @compiler VC
*
* Geometric calculator for elementary calculations in planimetry
*
*/

#include <iostream>

const int MAX_SIZE = 100;

int sizeOfStr(char* str)
{
    int index = 0;
    int size = 0;


    while (str[index] != '\0') //Count everything up to the terminating zero
    {

        size++;
        index++;

    }

    return size;

}
int validationForNames(char* nameOfLine, char* nameOfPoint, int sizeOfNameOfLine, int sizeOfNameOfPoint)
{

    bool a = true;
    //Checking names for things other than numbers, Latin letters, and "_"
    for (int i = 0; i < sizeOfNameOfLine; i++)
    {

        if (!((nameOfLine[i] >= '0' && nameOfLine[i] <= '9') || (nameOfLine[i] >= 'a' && nameOfLine[i] <= 'z') || (nameOfLine[i] >= 'A' && nameOfLine[i] <= 'Z') || (nameOfLine[i] == '_')))
        {

            a = false;

        }

    }
    for (int i = 0; i < sizeOfNameOfPoint; i++)
    {

        if (!((nameOfPoint[i] >= '0' && nameOfPoint[i] <= '9') || (nameOfPoint[i] >= 'a' && nameOfPoint[i] <= 'z') || (nameOfPoint[i] >= 'A' && nameOfPoint[i] <= 'Z') || (nameOfPoint[i] == '_')))
        {

            a = false;

        }

    }

    return a;

}
void determiningTheTypeOfQuadrilateral(double A1, double B1, double C1, double A2, double B2, double C2, double A3, double B3, double C3, double A4, double B4, double C4)
{

    if ((A1 == A2 && B1 == B2 && C1 == C2) || (A1 == A3 && B1 == B3 && C1 == C3) || (A1 == A4 && B1 == B4 && C1 == C4) || (A2 == A3 && B2 == B3 && C2 == C3) || (A2 == A4 && B2 == B4 && C2 == C4) || (A3 == A4 && B3 == B4 && C3 == C4))
    {
        //Checking for matching lines                                               
        std::cout << "Invalid input" << std::endl;

    }

    if (((A1 == A2 && B1 == B2) && (A1 == A3 && B1 == B3)) || ((A1 == A2 && B1 == B2) && (A1 == A4 && B1 == B4)) || ((A1 == A3 && B1 == B3) && (A1 == A4 && B1 == B4)) || ((A2 == A3 && B2 == B3) && (A2 == A4 && B2 == B4)))
    {
        //Checking for line parallel to other two
        std::cout << "Invalid input" << std::endl;

    }

    if ((A1 == A2 && B1 == B2) || (A1 == A3 && B1 == B3) || (A1 == A4 && B1 == B4) || (A2 == A3 && B2 == B3) || (A2 == A4 && B2 == B4) || (A3 == A4 && B3 == B4))
    {
        //We consider all permutations for parallelism between four different lines
        if ((A3 == A4 && B3 == B4) && ((A3 == B1) && (B3 == -A1)))
        {

            std::cout << "Their intersection points form a rectangle/square " << std::endl;

        }
        if ((A3 == A4 && B3 == B4) && ((A3 != B1) && (B3 != -A1)))
        {

            std::cout << "Their intersection points form a parallelogram" << std::endl;

        }
        if ((A3 != A4 && B3 != B4))
        {

            std::cout << "Their intersection points form a trapezoid" << std::endl;

        }
        if ((A2 == A4 && B2 == B4) && ((A2 == B1) && (B2 == -A1)))
        {

            std::cout << "Their intersection points form a rectangle/square " << std::endl;

        }
        if ((A2 == A4 && B2 == B4) && ((A2 != B1) && (B2 != -A1)))
        {

            std::cout << "Their intersection points form a parallelogram" << std::endl;

        }
        if ((A2 != A4 && B2 != B4))
        {

            std::cout << "Their intersection points form a trapezoid" << std::endl;

        }
        if ((A2 == A3 && B2 == B3) && ((A2 == B1) && (B2 == -A1)))
        {

            std::cout << "Their intersection points form a rectangle/square " << std::endl;

        }
        if ((A2 == A3 && B2 == B3) && ((A2 != B1) && (B2 != -A1)))
        {

            std::cout << "Their intersection points form a parallelogram" << std::endl;

        }
        if ((A2 != A3 && B2 != B3))
        {

            std::cout << "Their intersection points form a trapezoid" << std::endl;

        }
        if ((A2 == A3 && B2 == B3) && ((A2 == B1) && (B2 == -A1)))
        {

            std::cout << "Their intersection points form a rectangle/square " << std::endl;

        }
        if ((A2 == A3 && B2 == B3) && ((A2 != B1) && (B2 != -A1)))
        {

            std::cout << "Their intersection points form a parallelogram" << std::endl;

        }
        if ((A2 != A3 && B2 != B3))
        {

            std::cout << "Their intersection points form a trapezoid" << std::endl;

        }
        if ((A1 == A4 && B1 == B4) && ((A1 == B2) && (B1 == -A2)))
        {

            std::cout << "Their intersection points form a rectangle/square " << std::endl;

        }
        if ((A1 == A4 && B1 == B4) && ((A1 == B2) && (B1 == -A2)))
        {

            std::cout << "Their intersection points form a parallelogram" << std::endl;

        }
        if ((A1 != A4 && B1 != B4))
        {

            std::cout << "Their intersection points form a trapezoid" << std::endl;

        }
        if ((A1 == A3 && B1 == B3) && ((A1 == B2) && (B1 == -A2)))
        {

            std::cout << "Their intersection points form a rectangle/square " << std::endl;

        }
        if ((A1 == A3 && B1 == B3) && ((A1 == B2) && (B1 == -A2)))
        {

            std::cout << "Their intersection points form a parallelogram" << std::endl;

        }
        if ((A1 != A3 && B1 != B3))
        {

            std::cout << "Their intersection points form a trapezoid" << std::endl;

        }
        if ((A1 == A2 && B1 == B2) && ((A1 == B3) && (B1 == -A3)))
        {

            std::cout << "Their intersection points form a rectangle/square " << std::endl;

        }
        if ((A1 == A2 && B1 == B2) && ((A1 == B3) && (B1 == -A3)))
        {

            std::cout << "Their intersection points form a parallelogram" << std::endl;

        }
        if ((A1 != A2 && B1 != B2))
        {

            std::cout << "Their intersection points form a trapezoid" << std::endl;

        }

    }
    else
    {
        //There are no parallel lines
        std::cout << "Their intersection points form a quadrilateral" << std::endl;

    }

}
void findingTangent(double x, double y, double A, double B, double C)
{

    if ((A * x * x + B * x + C != y) || A == 0) //We check if the point lies on the parabola
    {

        std::cout << "The point does not lie on the parabola or this is not parabola" << std::endl;

    }
    else
    {

        double firstCoefficent = 2 * A * x + B; //We use the formula y = f(x0) + (f1(x0)) * (x - x0)
        double secondCoefficent = -1;
        double freeTerm = (-2 * A * x * x) - (B * x) + y;

        if (firstCoefficent != 0)
        {

            if (freeTerm > 0)
            {

                std::cout << firstCoefficent << "x" << secondCoefficent << "y+" << freeTerm << "=0" << std::endl;


            }
            if (freeTerm < 0)
            {

                std::cout << firstCoefficent << "x" << secondCoefficent << "y" << freeTerm << "=0" << std::endl;


            }
            if (freeTerm == 0)
            {

                std::cout << firstCoefficent << "x" << secondCoefficent << "y" << "=0" << std::endl;

            }

        }
        else
        {

            if (freeTerm > 0)
            {

                std::cout << "x" << secondCoefficent << "y+" << freeTerm << "=0" << std::endl;


            }
            if (freeTerm < 0)
            {

                std::cout << "x" << secondCoefficent << "y" << freeTerm << "=0" << std::endl;


            }
            if (freeTerm == 0)
            {

                std::cout << "x" << secondCoefficent << "y" << "=0" << std::endl;

            }

        }

    }

}
void findingHeights(double x1, double y1, double x2, double y2, double x3, double y3)
{
    //We determine the coefficients in front of "x" and "y", and the free term for a line defined by two points
    double firstCoefficent1 = x1 - x2;
    double secondCoefficent1 = -(y2 - y1);
    double freeTerm1 = (-secondCoefficent1) * y3 - firstCoefficent1 * x3;

    double firstCoefficent2 = x3 - x2;
    double secondCoefficent2 = -(y2 - y3);
    double freeTerm2 = (-secondCoefficent2) * y1 - firstCoefficent2 * x1;

    double firstCoefficent3 = x1 - x3;
    double secondCoefficent3 = -(y3 - y1);
    double freeTerm3 = (-secondCoefficent3) * y2 - firstCoefficent3 * x2;

    if ((x1 * y2 + x2 * y3 + x3 * y1 - x3 * y2 - x2 * y1 - x1 * y3) == 0) //Checking if a triangle exists using the third-order determinant
    {

        std::cout << "Incorrect input" << std::endl;

    }
    else
    {

        std::cout << "The equation of the first height is : ";

        if (firstCoefficent1 != 0)
        {

            if (secondCoefficent1 > 0)
            {

                if (freeTerm1 > 0)
                {

                    std::cout << firstCoefficent1 << "x+" << secondCoefficent1 << "y+" << freeTerm1 << "=0" << std::endl;

                }
                if (freeTerm1 < 0)
                {

                    std::cout << firstCoefficent1 << "x+" << secondCoefficent1 << "y" << freeTerm1 << "=0" << std::endl;

                }
                if (freeTerm1 == 0)
                {

                    std::cout << firstCoefficent1 << "x+" << secondCoefficent1 << "y" << "=0" << std::endl;

                }

            }
            if (secondCoefficent1 < 0)
            {

                if (freeTerm1 > 0)
                {

                    std::cout << firstCoefficent1 << "x" << secondCoefficent1 << "y+" << freeTerm1 << "=0" << std::endl;

                }
                if (freeTerm1 < 0)
                {

                    std::cout << firstCoefficent1 << "x" << secondCoefficent1 << "y" << freeTerm1 << "=0" << std::endl;

                }
                if (freeTerm1 == 0)
                {

                    std::cout << firstCoefficent1 << "x" << secondCoefficent1 << "y" << "=0" << std::endl;

                }

            }
            if (secondCoefficent1 == 0)
            {

                if (freeTerm1 > 0)
                {

                    std::cout << firstCoefficent1 << "x" << freeTerm1 << "=0" << std::endl;

                }
                if (freeTerm1 < 0)
                {

                    std::cout << firstCoefficent1 << "x" << freeTerm1 << "=0" << std::endl;

                }
                if (freeTerm1 == 0)
                {

                    std::cout << firstCoefficent1 << "x" << "y" << "=0" << std::endl;

                }

            }

        }
        else
        {

            if (secondCoefficent1 > 0)
            {

                if (freeTerm1 > 0)
                {

                    std::cout << secondCoefficent1 << "y+" << freeTerm1 << "=0" << std::endl;

                }
                if (freeTerm1 < 0)
                {

                    std::cout << secondCoefficent1 << "y" << freeTerm1 << "=0" << std::endl;

                }
                if (freeTerm1 == 0)
                {

                    std::cout << secondCoefficent1 << "y" << "=0" << std::endl;

                }

            }
            if (secondCoefficent1 < 0)
            {

                if (freeTerm1 > 0)
                {

                    std::cout << secondCoefficent1 << "y+" << freeTerm1 << "=0" << std::endl;

                }
                if (freeTerm1 < 0)
                {

                    std::cout << secondCoefficent1 << "y" << freeTerm1 << "=0" << std::endl;

                }
                if (freeTerm1 == 0)
                {

                    std::cout << secondCoefficent1 << "y" << "=0" << std::endl;

                }

            }
            if (secondCoefficent1 == 0)
            {

                if (freeTerm1 > 0)
                {

                    std::cout << freeTerm1 << "=0" << std::endl;

                }
                if (freeTerm1 < 0)
                {

                    std::cout << freeTerm1 << "=0" << std::endl;

                }
                if (freeTerm1 == 0)
                {

                    std::cout << "y" << "=0" << std::endl;

                }

            }

        }

        std::cout << "The equation of the second height is : ";

        if (firstCoefficent2 != 0)
        {

            if (secondCoefficent2 > 0)
            {

                if (freeTerm2 > 0)
                {

                    std::cout << firstCoefficent2 << "x+" << secondCoefficent2 << "y+" << freeTerm2 << "=0" << std::endl;

                }
                if (freeTerm2 < 0)
                {

                    std::cout << firstCoefficent2 << "x+" << secondCoefficent2 << "y" << freeTerm2 << "=0" << std::endl;

                }
                if (freeTerm2 == 0)
                {

                    std::cout << firstCoefficent2 << "x+" << secondCoefficent2 << "y" << "=0" << std::endl;

                }

            }
            if (secondCoefficent2 < 0)
            {

                if (freeTerm2 > 0)
                {

                    std::cout << firstCoefficent2 << "x" << secondCoefficent2 << "y+" << freeTerm2 << "=0" << std::endl;

                }
                if (freeTerm2 < 0)
                {

                    std::cout << firstCoefficent2 << "x" << secondCoefficent2 << "y" << freeTerm2 << "=0" << std::endl;

                }
                if (freeTerm2 == 0)
                {

                    std::cout << firstCoefficent2 << "x" << secondCoefficent2 << "y" << "=0" << std::endl;

                }

            }
            if (secondCoefficent2 == 0)
            {

                if (freeTerm2 > 0)
                {

                    std::cout << firstCoefficent2 << "x" << freeTerm2 << "=0" << std::endl;

                }
                if (freeTerm2 < 0)
                {

                    std::cout << firstCoefficent2 << "x" << freeTerm2 << "=0" << std::endl;

                }
                if (freeTerm2 == 0)
                {

                    std::cout << firstCoefficent2 << "x" << "y" << "=0" << std::endl;

                }

            }

        }
        else
        {

            if (secondCoefficent2 > 0)
            {

                if (freeTerm2 > 0)
                {

                    std::cout << secondCoefficent2 << "y+" << freeTerm2 << "=0" << std::endl;

                }
                if (freeTerm2 < 0)
                {

                    std::cout << secondCoefficent2 << "y" << freeTerm2 << "=0" << std::endl;

                }
                if (freeTerm2 == 0)
                {

                    std::cout << secondCoefficent2 << "y" << "=0" << std::endl;

                }

            }
            if (secondCoefficent2 < 0)
            {

                if (freeTerm2 > 0)
                {

                    std::cout << secondCoefficent2 << "y+" << freeTerm2 << "=0" << std::endl;

                }
                if (freeTerm2 < 0)
                {

                    std::cout << secondCoefficent2 << "y" << freeTerm2 << "=0" << std::endl;

                }
                if (freeTerm2 == 0)
                {

                    std::cout << secondCoefficent2 << "y" << "=0" << std::endl;

                }

            }
            if (secondCoefficent2 == 0)
            {

                if (freeTerm2 > 0)
                {

                    std::cout << freeTerm2 << "=0" << std::endl;

                }
                if (freeTerm2 < 0)
                {

                    std::cout << freeTerm2 << "=0" << std::endl;

                }
                if (freeTerm2 == 0)
                {

                    std::cout << "y" << "=0" << std::endl;

                }

            }

        }

        std::cout << "The equation of the third height is : ";

        if (firstCoefficent3 != 0)
        {

            if (secondCoefficent3 > 0)
            {

                if (freeTerm3 > 0)
                {

                    std::cout << firstCoefficent3 << "x+" << secondCoefficent3 << "y+" << freeTerm3 << "=0" << std::endl;

                }
                if (freeTerm3 < 0)
                {

                    std::cout << firstCoefficent3 << "x+" << secondCoefficent3 << "y" << freeTerm3 << "=0" << std::endl;

                }
                if (freeTerm3 == 0)
                {

                    std::cout << firstCoefficent3 << "x+" << secondCoefficent3 << "y" << "=0" << std::endl;

                }

            }
            if (secondCoefficent3 < 0)
            {

                if (freeTerm3 > 0)
                {

                    std::cout << firstCoefficent3 << "x" << secondCoefficent3 << "y+" << freeTerm3 << "=0" << std::endl;

                }
                if (freeTerm3 < 0)
                {

                    std::cout << firstCoefficent3 << "x" << secondCoefficent3 << "y" << freeTerm3 << "=0" << std::endl;

                }
                if (freeTerm3 == 0)
                {

                    std::cout << firstCoefficent3 << "x" << secondCoefficent3 << "y" << "=0" << std::endl;

                }

            }
            if (secondCoefficent3 == 0)
            {

                if (freeTerm3 > 0)
                {

                    std::cout << firstCoefficent3 << "x" << freeTerm3 << "=0" << std::endl;

                }
                if (freeTerm3 < 0)
                {

                    std::cout << firstCoefficent3 << "x" << freeTerm3 << "=0" << std::endl;

                }
                if (freeTerm3 == 0)
                {

                    std::cout << firstCoefficent3 << "x" << "y" << "=0" << std::endl;

                }

            }

        }
        else
        {

            if (secondCoefficent3 > 0)
            {

                if (freeTerm3 > 0)
                {

                    std::cout << secondCoefficent3 << "y+" << freeTerm3 << "=0" << std::endl;

                }
                if (freeTerm3 < 0)
                {

                    std::cout << secondCoefficent3 << "y" << freeTerm3 << "=0" << std::endl;

                }
                if (freeTerm3 == 0)
                {

                    std::cout << secondCoefficent3 << "y" << "=0" << std::endl;

                }

            }
            if (secondCoefficent3 < 0)
            {

                if (freeTerm3 > 0)
                {

                    std::cout << secondCoefficent3 << "y+" << freeTerm3 << "=0" << std::endl;

                }
                if (freeTerm3 < 0)
                {

                    std::cout << secondCoefficent3 << "y" << freeTerm3 << "=0" << std::endl;

                }
                if (freeTerm3 == 0)
                {

                    std::cout << secondCoefficent3 << "y" << "=0" << std::endl;

                }

            }
            if (secondCoefficent3 == 0)
            {

                if (freeTerm3 > 0)
                {

                    std::cout << freeTerm3 << "=0" << std::endl;

                }
                if (freeTerm3 < 0)
                {

                    std::cout << freeTerm3 << "=0" << std::endl;

                }
                if (freeTerm3 == 0)
                {

                    std::cout << "y" << "=0" << std::endl;

                }

            }

        }

    }

}
void findingMedians(double x1, double y1, double x2, double y2, double x3, double y3)
{
    //We determine the coefficients in front of "x" and "y", and the free term for a line defined by two points
    //We take the midpoint between any two adjacent ones
    double midx1 = (x1 + x2) / 2;
    double midy1 = (y1 + y2) / 2;
    double firstCoefficent1 = y3 - midy1;
    double secondCoefficent1 = midx1 - x3;
    double freeTerm1 = x3 * midy1 - midx1 * y3;

    double midx2 = (x2 + x3) / 2;
    double midy2 = (y2 + y3) / 2;
    double firstCoefficent2 = y1 - midy2;
    double secondCoefficent2 = midx2 - x1;
    double freeTerm2 = x1 * midy2 - midx2 * y1;

    double midx3 = (x1 + x3) / 2;
    double midy3 = (y1 + y3) / 2;
    double firstCoefficent3 = y2 - midy3;
    double secondCoefficent3 = midx3 - x2;
    double freeTerm3 = x2 * midy3 - midx3 * y2;

    if ((x1 * y2 + x2 * y3 + x3 * y1 - x3 * y2 - x2 * y1 - x1 * y3) == 0) //Checking if a triangle exists using the third-order determinant
    {

        std::cout << "";

    }
    else
    {

        std::cout << "The equation of the line of the first median is : ";

        if (firstCoefficent1 != 0)
        {

            if (secondCoefficent1 > 0)
            {

                if (freeTerm1 > 0)
                {

                    std::cout << firstCoefficent1 << "x+" << secondCoefficent1 << "y+" << freeTerm1 << "=0" << std::endl;

                }
                if (freeTerm1 < 0)
                {

                    std::cout << firstCoefficent1 << "x+" << secondCoefficent1 << "y" << freeTerm1 << "=0" << std::endl;

                }
                if (freeTerm1 == 0)
                {

                    std::cout << firstCoefficent1 << "x+" << secondCoefficent1 << "y" << "=0" << std::endl;

                }

            }
            if (secondCoefficent1 < 0)
            {

                if (freeTerm1 > 0)
                {

                    std::cout << firstCoefficent1 << "x" << secondCoefficent1 << "y+" << freeTerm1 << "=0" << std::endl;

                }
                if (freeTerm1 < 0)
                {

                    std::cout << firstCoefficent1 << "x" << secondCoefficent1 << "y" << freeTerm1 << "=0" << std::endl;

                }
                if (freeTerm1 == 0)
                {

                    std::cout << firstCoefficent1 << "x" << secondCoefficent1 << "y" << "=0" << std::endl;

                }

            }
            if (secondCoefficent1 == 0)
            {

                if (freeTerm1 > 0)
                {

                    std::cout << firstCoefficent1 << "x+" << freeTerm1 << "=0" << std::endl;

                }
                if (freeTerm1 < 0)
                {

                    std::cout << firstCoefficent1 << "x" << freeTerm1 << "=0" << std::endl;

                }
                if (freeTerm1 == 0)
                {

                    std::cout << firstCoefficent1 << "x" << std::endl;

                }

            }

        }
        else
        {

            if (secondCoefficent1 > 0)
            {

                if (freeTerm1 > 0)
                {

                    std::cout << secondCoefficent1 << "y+" << freeTerm1 << "=0" << std::endl;

                }
                if (freeTerm1 < 0)
                {

                    std::cout << secondCoefficent1 << "y" << freeTerm1 << "=0" << std::endl;

                }
                if (freeTerm1 == 0)
                {

                    std::cout << secondCoefficent1 << "y" << "=0" << std::endl;

                }

            }
            if (secondCoefficent1 < 0)
            {

                if (freeTerm1 > 0)
                {

                    std::cout << secondCoefficent1 << "y+" << freeTerm1 << "=0" << std::endl;

                }
                if (freeTerm1 < 0)
                {

                    std::cout << secondCoefficent1 << "y" << freeTerm1 << "=0" << std::endl;

                }
                if (freeTerm1 == 0)
                {

                    std::cout << secondCoefficent1 << "y" << "=0" << std::endl;

                }

            }
            if (secondCoefficent1 == 0)
            {

                if (freeTerm1 > 0)
                {

                    std::cout << freeTerm1 << "=0" << std::endl;

                }
                if (freeTerm1 < 0)
                {

                    std::cout << freeTerm1 << "=0" << std::endl;

                }
                if (freeTerm1 == 0)
                {

                    std::cout << "Invalid input" << std::endl;

                }

            }

        }

        std::cout << "The equation of the line of the second median is : ";

        if (firstCoefficent2 != 0)
        {

            if (secondCoefficent2 > 0)
            {

                if (freeTerm2 > 0)
                {

                    std::cout << firstCoefficent2 << "x+" << secondCoefficent2 << "y+" << freeTerm2 << "=0" << std::endl;

                }
                if (freeTerm2 < 0)
                {

                    std::cout << firstCoefficent2 << "x+" << secondCoefficent2 << "y" << freeTerm2 << "=0" << std::endl;

                }
                if (freeTerm2 == 0)
                {

                    std::cout << firstCoefficent2 << "x+" << secondCoefficent2 << "y" << "=0" << std::endl;

                }

            }
            if (secondCoefficent2 < 0)
            {

                if (freeTerm2 > 0)
                {

                    std::cout << firstCoefficent2 << "x" << secondCoefficent2 << "y+" << freeTerm2 << "=0" << std::endl;

                }
                if (freeTerm2 < 0)
                {

                    std::cout << firstCoefficent2 << "x" << secondCoefficent2 << "y" << freeTerm2 << "=0" << std::endl;

                }
                if (freeTerm2 == 0)
                {

                    std::cout << firstCoefficent2 << "x" << secondCoefficent2 << "y" << "=0" << std::endl;

                }

            }
            if (secondCoefficent2 == 0)
            {

                if (freeTerm2 > 0)
                {

                    std::cout << firstCoefficent2 << "x+" << freeTerm2 << "=0" << std::endl;

                }
                if (freeTerm2 < 0)
                {

                    std::cout << firstCoefficent2 << "x" << freeTerm2 << "=0" << std::endl;

                }
                if (freeTerm2 == 0)
                {

                    std::cout << firstCoefficent2 << "x" << std::endl;

                }

            }

        }
        else
        {

            if (secondCoefficent2 > 0)
            {

                if (freeTerm2 > 0)
                {

                    std::cout << secondCoefficent2 << "y+" << freeTerm2 << "=0" << std::endl;

                }
                if (freeTerm2 < 0)
                {

                    std::cout << secondCoefficent2 << "y" << freeTerm2 << "=0" << std::endl;

                }
                if (freeTerm2 == 0)
                {

                    std::cout << secondCoefficent2 << "y" << "=0" << std::endl;

                }

            }
            if (secondCoefficent2 < 0)
            {

                if (freeTerm2 > 0)
                {

                    std::cout << secondCoefficent2 << "y+" << freeTerm2 << "=0" << std::endl;

                }
                if (freeTerm2 < 0)
                {

                    std::cout << secondCoefficent2 << "y" << freeTerm2 << "=0" << std::endl;

                }
                if (freeTerm2 == 0)
                {

                    std::cout << secondCoefficent2 << "y" << "=0" << std::endl;

                }

            }
            if (secondCoefficent2 == 0)
            {

                if (freeTerm2 > 0)
                {

                    std::cout << freeTerm2 << "=0" << std::endl;

                }
                if (freeTerm2 < 0)
                {

                    std::cout << freeTerm2 << "=0" << std::endl;

                }
                if (freeTerm2 == 0)
                {

                    std::cout << "Invalid input" << std::endl;

                }

            }

        }

        std::cout << "The equation of the line of the third median is : ";

        if (firstCoefficent3 != 0)
        {

            if (secondCoefficent3 > 0)
            {

                if (freeTerm3 > 0)
                {

                    std::cout << firstCoefficent3 << "x+" << secondCoefficent3 << "y+" << freeTerm3 << "=0" << std::endl;

                }
                if (freeTerm3 < 0)
                {

                    std::cout << firstCoefficent3 << "x+" << secondCoefficent3 << "y" << freeTerm3 << "=0" << std::endl;

                }
                if (freeTerm3 == 0)
                {

                    std::cout << firstCoefficent3 << "x+" << secondCoefficent3 << "y" << "=0" << std::endl;

                }

            }
            if (secondCoefficent3 < 0)
            {

                if (freeTerm3 > 0)
                {

                    std::cout << firstCoefficent3 << "x" << secondCoefficent3 << "y+" << freeTerm3 << "=0" << std::endl;

                }
                if (freeTerm3 < 0)
                {

                    std::cout << firstCoefficent3 << "x" << secondCoefficent3 << "y" << freeTerm3 << "=0" << std::endl;

                }
                if (freeTerm3 == 0)
                {

                    std::cout << firstCoefficent3 << "x" << secondCoefficent3 << "y" << "=0" << std::endl;

                }

            }
            if (secondCoefficent3 == 0)
            {

                if (freeTerm3 > 0)
                {

                    std::cout << firstCoefficent3 << "x+" << freeTerm3 << "=0" << std::endl;

                }
                if (freeTerm3 < 0)
                {

                    std::cout << firstCoefficent3 << "x" << freeTerm3 << "=0" << std::endl;

                }
                if (freeTerm3 == 0)
                {

                    std::cout << firstCoefficent3 << "x" << std::endl;

                }

            }

        }
        else
        {

            if (secondCoefficent3 > 0)
            {

                if (freeTerm3 > 0)
                {

                    std::cout << secondCoefficent3 << "y+" << freeTerm3 << "=0" << std::endl;

                }
                if (freeTerm3 < 0)
                {

                    std::cout << secondCoefficent3 << "y" << freeTerm3 << "=0" << std::endl;

                }
                if (freeTerm3 == 0)
                {

                    std::cout << secondCoefficent3 << "y" << "=0" << std::endl;

                }

            }
            if (secondCoefficent3 < 0)
            {

                if (freeTerm3 > 0)
                {

                    std::cout << secondCoefficent3 << "y+" << freeTerm3 << "=0" << std::endl;

                }
                if (freeTerm3 < 0)
                {

                    std::cout << secondCoefficent3 << "y" << freeTerm3 << "=0" << std::endl;

                }
                if (freeTerm3 == 0)
                {

                    std::cout << secondCoefficent3 << "y" << "=0" << std::endl;

                }

            }
            if (secondCoefficent3 == 0)
            {

                if (freeTerm3 > 0)
                {

                    std::cout << freeTerm3 << "=0" << std::endl;

                }
                if (freeTerm3 < 0)
                {

                    std::cout << freeTerm3 << "=0" << std::endl;

                }
                if (freeTerm3 == 0)
                {

                    std::cout << "Invalid input" << std::endl;

                }

            }

        }


    }

}
void findIntersectionPointsOfParabolaAndLine(double A1, double B1, double C1, double A2, double B2, double C2)
{

    if ((A1 == 0) || (A2 == 0 && B2 == 0)) //Checking if parabola and line are entered
    {
        std::cout << "Invalid input" << std::endl;
    }
    else
    {
        if (B2 != 0)
        {
            //We take their slope coefficients and compose a system that is determined by the solution of a quadratic equation
            double slopeCoefficient1 = -(A2 / B2);
            double slopeCoefficient2 = -(C2 / B2);

            double firstCoefficent = A1;
            double secondCoefficent = (B1 - slopeCoefficient1);
            double thirdCoefficent = (C1 - slopeCoefficient2);

            double discriminant = secondCoefficent * secondCoefficent - 4 * firstCoefficent * thirdCoefficent;

            if (discriminant > 0)
            {

                double x1 = (-secondCoefficent + sqrt(discriminant)) / (2 * firstCoefficent);
                double x2 = (-secondCoefficent - sqrt(discriminant)) / (2 * firstCoefficent);

                double y1 = (-A2 * x1 - C2) / B2;
                double y2 = (-A2 * x2 - C2) / B2;

                std::cout << "The intersection points are with coordinates" << std::endl;
                std::cout << "(" << x1 << "," << y1 << ")" << std::endl;
                std::cout << "(" << x2 << "," << y2 << ")" << std::endl;

            }
            else if (discriminant == 0)
            {

                double x1 = -secondCoefficent / (2 * firstCoefficent);
                double y1 = (-A2 * x1 - C2) / B2;

                std::cout << "The intersection point is with coordinates" << std::endl;
                std::cout << "(" << x1 << "," << y1 << ")" << std::endl;

            }
            else
            {

                std::cout << "Does not exist" << std::endl;

            }

        }
        else
        {

            double x1 = -(C2 / A2);
            double y1 = A1 * x1 * x1 + B1 * x1 + C1;

            std::cout << "(" << x1 << "," << y1 << ")" << std::endl;

        }

    }

}
void findIntersectionPointOfTwoLines(double A1, double B1, double C1, double A2, double B2, double C2)
{

    if ((A1 == 0 && B1 == 0) || (A2 == 0 && B2 == 0)) //We check if they are entered lines
    {

        std::cout << "Incorrect input" << std::endl;

    }
    else
    {
        //We take their angular coefficients and make an equation based on them
        double slopeCoefficient1 = -(A1 / B1);
        double freeTerm1 = -(C1 / B1);

        double slopeCoefficient2 = -(A2 / B2);
        double freeTerm2 = -(C2 / B2);

        if (slopeCoefficient1 == slopeCoefficient2)
        {
            std::cout << "The lines are parallel" << std::endl;
        }
        else
        {

            double x = -(freeTerm1 - freeTerm2) / (slopeCoefficient1 - slopeCoefficient2);
            double y = slopeCoefficient1 * x + freeTerm1;

            std::cout << "The cordinates of the intersection point are" << std::endl;
            std::cout << "(" << x << "," << y << ")" << std::endl;

        }

    }

}
void perpendicularLineThroughPoint(double x, double y, double A, double B, double C)
{
    if (A == 0 && B == 0) //We check if it is entered a line
    {
        std::cout << "Incorrect input" << std::endl;
    }
    else
    {
        //We check if the point lies on the line
        if (A * x + B * y + C == 0)
        {
            //We determine the coefficients of a perpendicular line by inverting those given and putting "-" optionally
            double freeTerm = A * y - B * x;
            double firstCoeficent = B;
            double secondCoeficent = -A;

            if (A > 0 && freeTerm < 0)
            {

                std::cout << B << "x-" << A << "y" << freeTerm << "=0" << std::endl;

            }
            if (A > 0 && freeTerm > 0)
            {

                std::cout << B << "x-" << A << "y+" << freeTerm << "=0" << std::endl;

            }
            if (A > 0 && freeTerm == 0)
            {

                std::cout << B << "x-" << A << "y" << "=0" << std::endl;

            }
            if (A < 0 && freeTerm < 0)
            {

                std::cout << B << "x" << A << "y" << freeTerm << "=0" << std::endl;

            }
            if (A < 0 && freeTerm > 0)
            {

                std::cout << B << "x" << A << "y+" << freeTerm << "=0" << std::endl;

            }
            if (A < 0 && freeTerm == 0)
            {

                std::cout << B << "x" << A << "y" << "=0" << std::endl;

            }
            if (A == 0 && freeTerm > 0)
            {

                std::cout << B << "x+" << freeTerm << "=0" << std::endl;

            }
            if (A == 0 && freeTerm > 0)
            {

                std::cout << B << "x+" << freeTerm << "=0" << std::endl;

            }
            if (A == 0 && freeTerm == 0)
            {

                std::cout << B << "x" << "=0" << std::endl;

            }
            if (B == 0 && freeTerm == 0)
            {

                std::cout << A << "y" << "=0" << std::endl;

            }
            if (B == 0 && freeTerm > 0)
            {

                std::cout << A << "y+" << freeTerm << "=0" << std::endl;

            }
            if (B == 0 && freeTerm < 0)
            {

                std::cout << A << "y" << freeTerm << "=0" << std::endl;

            }

        }
        else
        {

            std::cout << "The point does not lie on the line" << std::endl;

        }

    }

}
void findingBisectors(double x1, double y1, double x2, double y2, double x3, double y3)
{

    double firstCoefficent1 = y2 - y1;
    double secondCoefficent1 = x1 - x2;
    double freeTerm1 = y1 * x2 - x1 * y2;
    double midx1 = (x1 + x2) / 2.0;
    double midy1 = (y1 + y2) / 2.0;

    double firstCoefficent2 = y2 - y3;
    double secondCoefficent2 = x3 - x2;
    double freeTerm2 = x2 * y3 - x3 * y2;
    double midx2 = (x2 + x3) / 2.0;
    double midy2 = (y2 + y3) / 2.0;

    double firstCoefficent3 = y3 - y1;
    double secondCoefficent3 = x1 - x3;
    double freeTerm3 = y1 * x3 - x1 * y3;
    double midx3 = (x1 + x3) / 2.0;
    double midy3 = (y1 + y3) / 2.0;

    if ((x1 * y2 + x2 * y3 + x3 * y1 - x3 * y2 - x2 * y1 - x1 * y3) == 0)
    {

        std::cout << "";

    }
    else
    {

        std::cout << "The line of the first bisector is : ";
        perpendicularLineThroughPoint(midx1, midy1, firstCoefficent1, secondCoefficent1, freeTerm1);

        std::cout << "The line of the second bisector is : ";
        perpendicularLineThroughPoint(midx2, midy2, firstCoefficent2, secondCoefficent2, freeTerm2);

        std::cout << "The line of the third bisector is : ";
        perpendicularLineThroughPoint(midx3, midy3, firstCoefficent3, secondCoefficent3, freeTerm3);

    }

}
void parallelLineThroughPoint(double x, double y, double A, double B, double C)
{
    if (A == 0 && B == 0) //We check if it is entered à line
    {
        std::cout << "Incorrect input";
    }
    else
    {
        //We keep the first two coefficients and calculate the free term using an expression relative to the point that lies on the new line
        double firstCoefficent = A;
        double secondCoefficent = B;
        double freeTerm = -(A * x + B * y);

        if (firstCoefficent != 0 && secondCoefficent != 0)
        {

            if (secondCoefficent > 0 && freeTerm > 0)
            {
                std::cout << firstCoefficent << "x+" << secondCoefficent << "y+" << freeTerm << "=0" << std::endl;

            }
            if (secondCoefficent > 0 && freeTerm < 0)
            {

                std::cout << firstCoefficent << "x+" << secondCoefficent << "y" << freeTerm << "=0" << std::endl;

            }
            if (secondCoefficent < 0 && freeTerm < 0)
            {

                std::cout << firstCoefficent << "x" << secondCoefficent << "y" << freeTerm << "=0" << std::endl;

            }
            if (secondCoefficent < 0 && freeTerm > 0)
            {

                std::cout << firstCoefficent << "x" << secondCoefficent << "y+" << freeTerm << "=0" << std::endl;

            }
            if (secondCoefficent > 0 && freeTerm == 0)
            {

                std::cout << firstCoefficent << "x+" << secondCoefficent << "y" << "=0" << std::endl;

            }
            if (secondCoefficent < 0 && freeTerm == 0)
            {

                std::cout << firstCoefficent << "x" << secondCoefficent << "y" << "=0" << std::endl;

            }

        }
        if (firstCoefficent == 0 && secondCoefficent != 0)
        {

            if (freeTerm > 0)
            {

                std::cout << secondCoefficent << "y+" << freeTerm << "=0" << std::endl;

            }
            if (freeTerm < 0)
            {

                std::cout << secondCoefficent << "y" << freeTerm << "=0" << std::endl;

            }
            if (freeTerm == 0)
            {

                std::cout << secondCoefficent << "y" << "=0" << std::endl;

            }

        }
        if (firstCoefficent != 0 && secondCoefficent == 0)
        {

            if (freeTerm > 0)
            {

                std::cout << firstCoefficent << "x+" << freeTerm << "=0" << std::endl;

            }
            if (freeTerm < 0)
            {

                std::cout << firstCoefficent << "x" << freeTerm << "=0" << std::endl;

            }
            if (freeTerm == 0)
            {

                std::cout << firstCoefficent << "x" << "=0" << std::endl;

            }

        }

    }

}
bool isPointOnLine(double x, double y, double A, double B, double C)
{
    //Direct check if a point lies on line
    return A * x + B * y + C == 0;

}
int main()
{

    while (true)
    {

        std::cout << "Select an option:" << std::endl;
        std::cout << "1. Checking if a point lies on a line" << std::endl;
        std::cout << "2. Equation of a line parallel to a given line and passing through a point" << std::endl;
        std::cout << "3. Equation of a line perpendicular to a given line and passing through a point on the same line" << std::endl;
        std::cout << "4. Intersection of two lines" << std::endl;
        std::cout << "5. Equations of altitudes, medians, and bisectors of a triangle (given by three points)" << std::endl;
        std::cout << "6. Equation of the tangent to the parabola at a corresponding point on it" << std::endl;
        std::cout << "7. Intersection point/s of parabola and equation, if they exist" << std::endl;
        std::cout << "8. Determining the type of quadrilateral whose points are defined by the intersection of four lines" << std::endl;
        std::cout << "0. Exit" << std::endl;

        int choice = 0;
        std::cin >> choice;

        if (choice == 0)
        {

            break;

        }
        switch (choice)
        {

        case 1:
        {
            char nameOfPoint[MAX_SIZE] = "";
            char nameOfLine[MAX_SIZE] = "";

            std::cout << "Enter the name of the point" << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.getline(nameOfPoint, MAX_SIZE);

            std::cout << "Enter the name of the line" << std::endl;
            std::cin.getline(nameOfLine, MAX_SIZE);


            int sizeOfNameOfPoint = sizeOfStr(nameOfPoint);
            int sizeOfNameOfLine = sizeOfStr(nameOfLine);

            bool hypothesis1 = validationForNames(nameOfLine, nameOfPoint, sizeOfNameOfLine, sizeOfNameOfPoint);

            if(hypothesis1 == 0)
            {

                std::cout << "Invalid name/s for the point/line" << std::endl;
                return false;

            }

            double x = 0;
            double y = 0;

            std::cout << "Enter the coordinates of the point " << nameOfPoint <<std::endl;
            std::cin >> x;
            std::cin >> y;

            double A = 0;
            double B = 0;
            double C = 0;

            std::cout << "Enter the coefficients of the line " << nameOfLine << std::endl;
            std::cin >> A;
            std::cin >> B;
            std::cin >> C;

            bool hypothesis2 = isPointOnLine(x, y, A, B, C);

            if (hypothesis2 == 1)
            {

                std::cout << "The point "<< nameOfPoint <<" lies on the line "<< nameOfLine << std::endl;

            }
            else
            {

                std::cout << "The point does not " << nameOfPoint << " lies on the line " << nameOfLine << std::endl;

            }
            break;

        }
        case 2:
        {

            char nameOfPoint[MAX_SIZE] = "";
            char nameOfLine[MAX_SIZE] = "";

            std::cout << "Enter the name of the point" << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.getline(nameOfPoint, MAX_SIZE);

            std::cout << "Enter the name of the line" << std::endl;
            std::cin.getline(nameOfLine, MAX_SIZE);


            int sizeOfNameOfPoint = sizeOfStr(nameOfPoint);
            int sizeOfNameOfLine = sizeOfStr(nameOfLine);

            bool hypothesis1 = validationForNames(nameOfLine, nameOfPoint, sizeOfNameOfLine, sizeOfNameOfPoint);

            if (hypothesis1 == 0)
            {

                std::cout << "Invalid name/s for the point/line" << std::endl;
                return false;

            }

            double x = 0;
            double y = 0;

            std::cout << "Enter the coordinates of the point " << nameOfPoint << std::endl;
            std::cin >> x;
            std::cin >> y;

            double A = 0;
            double B = 0;
            double C = 0;

            std::cout << "Enter the coefficients of the line " << nameOfLine << std::endl;
            std::cin >> A;
            std::cin >> B;
            std::cin >> C;

            std::cout << "The equation of the parallel line by " << nameOfLine << " through point " << nameOfPoint << " is" << std::endl;
            parallelLineThroughPoint(x, y, A, B, C);
            break;

        }
        case 3:
        {

            char nameOfPoint[MAX_SIZE] = "";
            char nameOfLine[MAX_SIZE] = "";

            std::cout << "Enter the name of the point" << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.getline(nameOfPoint, MAX_SIZE);

            std::cout << "Enter the name of the line" << std::endl;
            std::cin.getline(nameOfLine, MAX_SIZE);


            int sizeOfNameOfPoint = sizeOfStr(nameOfPoint);
            int sizeOfNameOfLine = sizeOfStr(nameOfLine);

            bool hypothesis1 = validationForNames(nameOfLine, nameOfPoint, sizeOfNameOfLine, sizeOfNameOfPoint);

            if (hypothesis1 == 0)
            {

                std::cout << "Invalid name/s for the point/line" << std::endl;
                return false;

            }

            double x = 0;
            double y = 0;

            std::cout << "Enter the coordinates of the point " << nameOfPoint << std::endl;
            std::cin >> x;
            std::cin >> y;

            double A = 0;
            double B = 0;
            double C = 0;

            std::cout << "Enter the coefficients of the line " << nameOfLine << std::endl;
            std::cin >> A;
            std::cin >> B;
            std::cin >> C;

            std::cout << "The equation of the perpendicular line by " << nameOfLine << " through point " << nameOfPoint << " is" << std::endl;
            perpendicularLineThroughPoint(x, y, A, B, C);
            break;

        }
        case 4:
        {

            char nameOfLine1[MAX_SIZE] = "";
            char nameOfLine2[MAX_SIZE] = "";

            std::cout << "Enter the name of the first line" << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.getline(nameOfLine1, MAX_SIZE);

            std::cout << "Enter the name of the second line" << std::endl;
            std::cin.getline(nameOfLine2, MAX_SIZE);


            int sizeOfNameOfLine1 = sizeOfStr(nameOfLine1);
            int sizeOfNameOfLine2 = sizeOfStr(nameOfLine2);

            bool hypothesis1 = validationForNames(nameOfLine2, nameOfLine1, sizeOfNameOfLine2, sizeOfNameOfLine1);

            if (hypothesis1 == 0)
            {

                std::cout << "Invalid name/s for the line/s" << std::endl;
                return false;

            }

            double A1 = 0;
            double B1 = 0;
            double C1 = 0;

            std::cout << "Enter the coefficients of the first line " << nameOfLine1 << std::endl;
            std::cin >> A1;
            std::cin >> B1;
            std::cin >> C1;

            double A2 = 0;
            double B2 = 0;
            double C2 = 0;

            std::cout << "Enter the coefficients of the second line " << nameOfLine2 << std::endl;
            std::cin >> A2;
            std::cin >> B2;
            std::cin >> C2;

            findIntersectionPointOfTwoLines(A1, B1, C1, A2, B2, C2);
            break;

        }
        case 5:
        {

            char nameOfPoint1[MAX_SIZE] = "";
            char nameOfPoint2[MAX_SIZE] = "";
            char nameOfPoint3[MAX_SIZE] = "";

            std::cout << "Enter the name of the first point" << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.getline(nameOfPoint1, MAX_SIZE);

            std::cout << "Enter the name of the second point" << std::endl;
            std::cin.getline(nameOfPoint2, MAX_SIZE);

            std::cout << "Enter the name of the third point" << std::endl;
            std::cin.getline(nameOfPoint3, MAX_SIZE);


            int sizeOfNameOfPoint1 = sizeOfStr(nameOfPoint1);
            int sizeOfNameOfPoint2 = sizeOfStr(nameOfPoint2);
            int sizeOfNameOfPoint3 = sizeOfStr(nameOfPoint3);

            bool hypothesis1 = validationForNames(nameOfPoint2, nameOfPoint1, sizeOfNameOfPoint2, sizeOfNameOfPoint1);

            if (hypothesis1 == 0)
            {

                std::cout << "Invalid name/s for the point/s" << std::endl;
                return false;

            }

            bool hypothesis2 = validationForNames(nameOfPoint2, nameOfPoint3, sizeOfNameOfPoint2, sizeOfNameOfPoint3);

            if (hypothesis2 == 0)
            {

                std::cout << "Invalid name/s for the point/s" << std::endl;
                return false;

            }

            double x1 = 0;
            double y1 = 0;

            double x2 = 0;
            double y2 = 0;

            double x3 = 0;
            double y3 = 0;

            std::cout << "Enter the cordinates of first point " << nameOfPoint1 << std::endl;
            std::cin >> x1 >> y1;

            std::cout << "Enter the cordinates of second point " << nameOfPoint2 << std::endl;
            std::cin >> x2 >> y2;

            std::cout << "Enter the cordinates of third point " << nameOfPoint3 << std::endl;
            std::cin >> x3 >> y3;

            findingHeights(x1, y1, x2, y2, x3, y3);
            std::cout << std::endl;

            findingMedians(x1, y1, x2, y2, x3, y3);
            std::cout << std::endl;

            findingBisectors(x1, y1, x2, y2, x3, y3);
            std::cout << std::endl;

            break;

        }
        case 6:
        {

            char nameOfPoint[MAX_SIZE] = "";
            char nameOfParabola[MAX_SIZE] = "";

            std::cout << "Enter the name of the point" << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.getline(nameOfPoint, MAX_SIZE);

            std::cout << "Enter the name of the parabola" << std::endl;
            std::cin.getline(nameOfParabola, MAX_SIZE);


            int sizeOfNameOfPoint = sizeOfStr(nameOfPoint);
            int sizeOfNameOfParabola = sizeOfStr(nameOfParabola);

            bool hypothesis1 = validationForNames(nameOfParabola, nameOfPoint, sizeOfNameOfParabola, sizeOfNameOfPoint);

            if (hypothesis1 == 0)
            {

                std::cout << "Invalid name/s for the point/parabola" << std::endl;
                return false;

            }

            double x = 0;
            double y = 0;

            std::cout << "Enter the coordinates of the point " << nameOfPoint << std::endl;
            std::cin >> x;
            std::cin >> y;

            double A = 0;
            double B = 0;
            double C = 0;

            std::cout << "Enter the coefficients of the parabola " << nameOfParabola << std::endl;
            std::cin >> A;
            std::cin >> B;
            std::cin >> C;

            findingTangent(x, y, A, B, C);
            break;

        }
        case 7:
        {

            char nameOfLine[MAX_SIZE] = "";
            char nameOfLParabola[MAX_SIZE] = "";

            std::cout << "Enter the name of the parabola" << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.getline(nameOfLParabola, MAX_SIZE);

            std::cout << "Enter the name of the point" << std::endl;
            std::cin.getline(nameOfLine, MAX_SIZE);

            int sizeOfNameOfLine = sizeOfStr(nameOfLine);
            int sizeOfNameOfParabola = sizeOfStr(nameOfLParabola);

            bool hypothesis1 = validationForNames(nameOfLParabola, nameOfLine, sizeOfNameOfParabola, sizeOfNameOfLine);

            if (hypothesis1 == 0)
            {

                std::cout << "Invalid name/s for the line/parabola" << std::endl;
                return false;

            }

            double A1 = 0;
            double B1 = 0;
            double C1 = 0;

            std::cout << "Enter the coefficients of the parabola "<< nameOfLParabola << std::endl;
            std::cin >> A1;
            std::cin >> B1;
            std::cin >> C1;

            double A2 = 0;
            double B2 = 0;
            double C2 = 0;

            std::cout << "Enter the coefficients of the line " << nameOfLine << std::endl;
            std::cin >> A2;
            std::cin >> B2;
            std::cin >> C2;


            findIntersectionPointsOfParabolaAndLine(A1, B1, C1, A2, B2, C2);
            break;

        }
        case 8:
        {

            char nameOfLine1[MAX_SIZE] = "";
            char nameOfLine2[MAX_SIZE] = "";
            char nameOfLine3[MAX_SIZE] = "";
            char nameOfLine4[MAX_SIZE] = "";

            std::cout << "Enter the name of the first line" << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.getline(nameOfLine1, MAX_SIZE);

            std::cout << "Enter the name of the second line" << std::endl;
            std::cin.getline(nameOfLine2, MAX_SIZE);

            std::cout << "Enter the name of the third line" << std::endl;
            std::cin.getline(nameOfLine3, MAX_SIZE);

            std::cout << "Enter the name of the fourth line" << std::endl;
            std::cin.getline(nameOfLine4, MAX_SIZE);

            int sizeOfNameOfLine1 = sizeOfStr(nameOfLine1);
            int sizeOfNameOfLine2 = sizeOfStr(nameOfLine2);
            int sizeOfNameOfLine3 = sizeOfStr(nameOfLine3);
            int sizeOfNameOfLine4 = sizeOfStr(nameOfLine4);

            bool hypothesis1 = validationForNames(nameOfLine2, nameOfLine1, sizeOfNameOfLine2, sizeOfNameOfLine1);

            if (hypothesis1 == 0)
            {

                std::cout << "Invalid name/s for the line/s" << std::endl;
                return false;

            }
            bool hypothesis2 = validationForNames(nameOfLine4, nameOfLine3, sizeOfNameOfLine4, sizeOfNameOfLine3);

            if (hypothesis2 == 0)
            {

                std::cout << "Invalid name/s for the line/s" << std::endl;
                return false;

            }

            double A1 = 0;
            double B1 = 0;
            double C1 = 0;

            std::cout << "Enter the coefficients of the first line " << nameOfLine1 << std::endl;
            std::cin >> A1;
            std::cin >> B1;
            std::cin >> C1;

            double A2 = 0;
            double B2 = 0;
            double C2 = 0;

            std::cout << "Enter the coefficients of the second line " << nameOfLine2 << std::endl;
            std::cin >> A2;
            std::cin >> B2;
            std::cin >> C2;

            double A3 = 0;
            double B3 = 0;
            double C3 = 0;

            std::cout << "Enter the coefficients of the third line " << nameOfLine4 << std::endl;
            std::cin >> A3;
            std::cin >> B3;
            std::cin >> C3;

            double A4 = 0;
            double B4 = 0;
            double C4 = 0;

            std::cout << "Enter the coefficients of the fourth line " << nameOfLine4 << std::endl;
            std::cin >> A4;
            std::cin >> B4;
            std::cin >> C4;


            determiningTheTypeOfQuadrilateral(A1, B1, C1, A2, B2, C2, A3, B3, C3, A4, B4, C4);
            break;

        }
        default:

            std::cout << "Incorrect input" << std::endl;
            break;

        }
    }

    return 0;

}
