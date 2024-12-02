#pragma once
#ifndef GENERAL_H
#define GENERAL_H

//common headers

#include <cmath>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <memory>

//C++ std usings

using std::make_shared;
using std::shared_ptr;

//constants

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

//utility functions

inline double degrees_to_radians(double degrees) {
	return degrees * pi / 180.0;
}

inline double random_double() {
	//returns a random real in [0,1)
	return std::rand() / (RAND_MAX + 1.0);
}

inline double random_double(double min, double max) {
	//Returns a random real in [min, max)
	return min + (max - min) * random_double();
}

//common Headers

#include "color.h"
#include "interval.h"
#include "ray.h"
#include "vec3.h"
#include "camera.h"
#include "material.h"

#endif // !GENERAL_H
