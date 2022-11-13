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

	//template<class T>
	std::vector<FreeBand> podziel(std::vector<FreeBand> V, std::vector<double> p);

	void zrobTo();

}