/*
	Author:  Justin Nguyen
	Created: 7/10/2016
*/

#include <iostream>
#include <cstding>

class RGBA {
	private:
		uint8_t red, green, blue, alpha;
	public:
		RGBA(red = 0, green = 0, blue = 0, alpha = 255)
		 : this->red { red }, this->green { green }
		   this->blue { blue }, this -> alpha { alpha }
		{
			
		}

		void print() {
			std::cout << "r = " << red << " "
					  << "g = " << green << " "
					  << "b = " << blue << " " 
					  << "a = " << alpha << "\n";
		}
};

int main() {
	RGBA teal;
	teal.print();

	RGBA color { 2, 42, 152 };
	color.print();
}
