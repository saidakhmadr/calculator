#pragma once
#include <cstdint>
#include <cstdio>
using Word = int64_t;
namespace calc {
	enum Operation {
		Addition,
		Minus,
		Division,
		Multiplication,
		QUIT,
	};

	Word add();
	Word minus();
	Word devide();
	Word multiple();
	int8_t quit() {
			printf("Exiting Calculator, thanks for using!");
			return 0;
	}
}
