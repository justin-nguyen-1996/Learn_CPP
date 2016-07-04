#ifndef arithmetic_h
#define arithmetic_h

#include <functional>

struct Arithmetic {
	char op;
	std::function<int (int,int)> op_ptr;
};

#endif
