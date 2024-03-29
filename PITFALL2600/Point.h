#ifndef POINT_H_
#define POINT_H_
#include "glut.h"  //Custom glut.h fixed to work with stdlib.h 

/*****************************************************************************************
* Class: Point
* Description: A complete functional 2D vector class that holds 2 variables (_x and _y)
*			   which can be accessed by calling the x() and y() method,
*			   as well as most of the basics operations between two objects of this type
******************************************************************************************/
class Point
{
protected:
	GLint _x;
	GLint _y;
public:
	/********************************************************************
	* Method: Default Constructor
	* Description: Initializes a Point at x = 0 and y = 0
	********************************************************************/
	Point();

	/********************************************************************
	* Method: 2 Params Constructor
	* Description: Initializes a Point at the specified x and y position
	********************************************************************/
	Point(GLint x, GLint y);

	/********************************************************************
	* Method: Overloaded = operator
	* Description: Allows to use (Point)p1 =(Point)p2;
	********************************************************************/
	Point& operator=(const Point& p2);

	/********************************************************************
	* Method: Overloaded += operator
	* Description: Allows to use (Point p1 += (Point)p2;
	********************************************************************/
	Point& operator+=(const Point& p2);

	/********************************************************************
	* Method: Overloaded -= operator
	* Description: Allows to use (Point)p1 -= (Point)p2;
	********************************************************************/
	Point& operator-=(const Point& p2);

	/********************************************************************
	* Method: Overloaded + operator
	* Description: Allows to use (Point)p1 + (Point)p2;
	********************************************************************/
	const Point operator+(const Point& p2) const;

	/********************************************************************
	* Method: Overloaded + operator
	* Description: Allows to use (Point)p1 - (Point)p2;
	********************************************************************/
	const Point operator-(const Point& p2) const;

	/********************************************************************
	* Method Name: x
	* Description: Returns the x value
	********************************************************************/
	GLint x() const;

	/********************************************************************
	* Method Name: y
	* Description: Returns the y value
	********************************************************************/
	GLint y() const;

	/********************************************************************
	* Method Name: setX
	* Description: Sets the x value
	********************************************************************/
	void setX(GLint x);

	/********************************************************************
	* Method Name: setY
	* Description: Sets the y value
	********************************************************************/
	void setY(GLint y);

	void clear();
};
#endif