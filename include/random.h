#ifndef H_RANDOM
#define H_RANDOM

#include <random>
#include <common.h>

namespace myrand{

	//Randomly scrambles float values in place
	float* random_combination(std::mt19937& generator, float* input_combination, uint input_size);

}

#endif