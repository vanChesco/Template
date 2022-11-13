#pragma once

#include <iostream>
#include <vector>

namespace Domains
{
	class FreeBand
	{
	public:
		double amin{ 0 }, amax{ 0 };

		FreeBand();
		FreeBand(double min, double max);

	};

	template<class T>
	std::vector<T> podziel(std::vector<T> V, std::vector<double> p);

}
