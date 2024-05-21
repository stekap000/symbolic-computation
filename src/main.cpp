#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <cstdint>

#include "common.h"

// TODO: Implement basic field symbolic algebra.
// TODO: Implement basic symbolic derivation and integration.
// TODO: Allow arbitrary axiomatic rules.
// TODO: Introduce some kind of measure for expression compactness evaluation.
// TODO: Heuristics for speeding up theorem search within formal system.
// TODO: Axioms and rules specification via files.
// TODO: Bind with latex at later stages.

namespace repr {
	// 18446744073709551615
	using max_u64_digits_len = 20;

	// For operators and operands.
	enum Type {
		num,
		op,
		binop_plus,
		binop_minus,
		binop_mul,
		binop_div
		// ...
	};

	struct Symbol {
		Type type;
		std::string name;

		Symbol(Type t, std::string n) : type(t), name(n) {}
	};

	Symbol plus(binop_plus, "+");
	Symbol minus(binop_minus, "-");
	Symbol mul(binop_mul, "*");
	Symbol div(binop_div, "/");

	struct Integer {
		std::string digits;
		std::vector<u64> blocks;

		Integer() {}

		Integer(std::string digits) : digits(digits) {
			
		}
		
		Integer from_string(std::string digits) {
			return Integer();
		}
	};

	//struct Real {
	//
	//};
}

int main() {
	
	
	return 0;
}
