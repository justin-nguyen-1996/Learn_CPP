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
			stack_length += 1;
			num_list[stack_length] = num;
			return true;
		}

		int pop() {
			if (stack_length == 0) { return -1; }
			stack_length -= 1;
			return num_list[stack_length];
		}

		void print() {
			std::string delimiter = "";
			for (const auto &num : num_list) {
				std::cout << delimiter << num;
				delimiter = ", ";
			}
			std::cout << "\n";
		}
};

int main() {
	Stack stack;
	stack.reset();

	stack.print();

	stack.pop();
	stack.pop();

	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.print();

	stack.pop();
	stack.pop();
	stack.print();

	stack.pop();
	stack.print();

	stack.push(4);
	stack.print();

}
