/*
	Author:  Justin Nguyen
	Created: 7/9/2016
*/

#include <iostream>
#include <array>

class Stack {
	private:
		std::array<int, 10> num_list {};
		int stack_length = 0;
	public:
		void reset() {
			stack_length = 0;
			num_list = {};
		}

		bool push(int num) {
			if (stack_length == 10) { return false; }
			num_list[stack_length + 1] = num;
		}

		int pop(int num) {
			if (stack_length == 0) { return -1; }
			return num_list[stack_length];
		}

		void print() {
			static std::string delimiter = "";
			for (const auto &num : num_list) {
				std::cout << delimiter << num;
				delimiter = ", ";
			}
			std::cout << "\n";
		}
};

int main() {
	
}
