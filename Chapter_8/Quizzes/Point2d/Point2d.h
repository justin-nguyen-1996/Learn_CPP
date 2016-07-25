/*
 * Author:  Justin Nguyen
 * Created: 7/24/2016
 */

#ifndef POINT2D_H
#define POINT2D_H

#include <iostream>

class Point2d {
	private:
		double m_x = 0.0;
		double m_y = 0.0;
	public:
		Point2d();
		Point2d(double x, double y) : m_x(x), m_y(y) {}
		
		void print() const;
		
		double getX() const { return m_x; }
		double getY() const { return m_y; }
		void setX(double x) { m_x = x; }
		void setY(double y) { m_y = y; }
};

#endif
