/*
	Author:  Justin Nguyen
	Created: 7/10/2016
*/

#include <iostream>
#include <cstdint>

class RGBA {
	private:
		uint8_t red, green, blue, alpha;
	public:
		RGBA(uint8_t red = 0, uint8_t green = 0, uint8_t blue = 0, uint8_t alpha = 255)
		 : red { red }, green { green }, blue { blue }, alpha { alpha }
		{
			
		}

		void print() {
			std::cout << "r = " << static_cast<int>(red) << " "
					  << "g = " << static_cast<int>(green) << " "
					  << "b = " << static_cast<int>(blue) << " " 
					  << "a = " << static_cast<int>(alpha) << "\n";
		}
};

int main() {
	RGBA teal;
	teal.print();

	RGBA color { 2, 42, 152 };
	color.print();
}
