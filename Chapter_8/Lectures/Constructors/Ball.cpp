/*
	Author:  Justin Nguyen
	Created: 7/10/2016
*/

#include <iostream>
#include <string>

class Ball {
	private:
		std::string color;
		double radius;
	public:
		Ball (double radius) {
			this -> radius = radius;
		}

		Ball (const std::string &color = "yellow", double radius = 4.0) {
			this -> color = color;
			this -> radius = radius;
		}

		void print() {
			std::cout << "color: " << color << "\t"
					  << "radius: " << radius << "\n";
		}
};

int main() {
	Ball ball;
	ball.print();

	Ball blue { "blue" };
	blue.print();

	Ball twenty { 20.0 };
	twenty.print();

	Ball blue_twenty { "blue", 20.0 };
	blue_twenty.print();
}


