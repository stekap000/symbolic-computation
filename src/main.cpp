#include <iostream>
#include <string>
#include <vector>
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
	enum Type {
		num,
		op
		// ...
	};
	
	struct Symbol {
		Type type;
		std::string name;
	};

	struct Integer {
		std::vector<u64> blocks;

		Integer() {
			
		}
		
		Integer from_string(std::string value_str) {
			return Integer();
		}
	};

	//struct Real {
	//
	//};
}

int main() {
	std::cout << "Setup complete" << std::endl;
	
	return 0;
}
