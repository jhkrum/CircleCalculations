/****************************************************************
 <br>
 <br> Subject:            Circle Calculations
 <br> Project:            Exam1
 <br> Author:             Justin H. Krum
 <br> Creation Date:      October 4, 2017
 <br> Last Modification:  October 4, 2017

 ****************************************************************/

 /****************************************************************
 VAR NAME           TYPE        PURPOSE

 PI                 float       To serve as a constant for the calculation of values related to circles
 p1                 float[]     To store both x1 and y1 within indexes 0 and 1, respectively
 p2                 float[]     To store both x2 and y2 within indexes 0 and 1, respectively
 pMidpoint          float[]     To store both xMidpoint and yMidpoint within indexes 0 and 1, respectively
 pCircle            float[]     To store both xCircle and yCircle within indexes 0 and 1, respectively
 radius             float       To calculate the area and perimeter of the circle
 circleArea         float       To store and display the value of the area of the circle
 circlePerim        float       To store and display the value of the perimeter of the circle

 ****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //definition of constants
    const float PI = 3.1415;

    //Course Info Output
    printf("COP2271C - 03\tExam 1\t\tDr. Rangel\tJustin Krum");

    //Point 1 (p1) declaration

    float p1[2];        //Index 0 is x, Index 1 is y
    p1[0] = 12.5;
    p1[1] = 20.0;

    //Point 2 (p2) declaration

    float p2[2];        //Index 0 is x, Index 1 is y
    p2[0] = -10.0;
    p2[1] = 5.0;

    //Output of p1 and p2

    printf("\n\np1(x1,y1) -->\tx1 = %.2f\ty1 = %.2f", p1[0], p1[1]);
    printf("\np2(x2,y2) -->\tx2 = %.2f\ty2 = %.2f", p2[0], p2[1]);

    //Calculation of midpoint (pMidpoint)

    float pMidpoint[2];        //Index 0 is x, Index 1 is y

    pMidpoint[0] = (p1[0] + p2[0])/2;
    pMidpoint[1] = (p1[1] + p2[1])/2;

    //Output of pMidpoint

    printf("\npMidpoint(xM,yM) -->\txM = %.2f\tyM = %.2f", pMidpoint[0], pMidpoint[1]);

    //Input of point3 coordinates (p3)

    float p3[2];

    printf("\n\nx3 = ");
    scanf("%f", &p3[0]);
    printf("y3 = ");
    scanf("%f", &p3[1]);


    //Calculation of distance formula for radius (dist betweeen pMidpoint and p3)

    //radius = sqrt( (x2-x1)^2 + (y2 - y1)^2 )
    float radius = sqrt(pow((p3[0] - pMidpoint[0]),2) + pow((p3[1] - pMidpoint[1]),2));

    /*printf("distance = %.3f", radius);
     Allows for debugging later      */

    //Definition of center of circle coordinates

     float pCircle[2];        //Index 0 is x, Index 1 is y
     pCircle[0] = (p1[0] * pow(2,2)) - (pow(3,2) / p2[0]);      //xCircle = (x1 * 2^2) - (3^2 / x2)
     pCircle[1] = p1[1] * ((p2[1]+2)/(pMidpoint[1] - 3));       //yCircle = y1 * ((y2 + 2) / (yMidpoint - 3))

     //Circle Calculations -- Area, Perimeter

     float circleArea = PI * pow(radius,2);
     float circlePerim = 2 * PI * radius;

     //Display Information About Circle

     printf("\n\nCircle Area = %.2f", circleArea);
     printf("\nCircle Perimeter = %.2f", circlePerim);
     printf("\n\nCircle Coordinates \n(xC,yC) -->\txC = %.2f\tyC = %.2f", pCircle[0], pCircle[1]);
     printf("\n\n");

}
