#pragma once

#include <iostream>
#include <vector>

namespace Domains
{
	class FreeBand
	{
	public:
        double amin{}, amax{};

        FreeBand() = default;
        FreeBand(double min, double max) : amin(min), amax(max) {}

        FreeBand& operator/=(const double d)
        {
            amin /= d;
            amax /= d;
            return *this;
        }
	};

    template<class T>
    std::vector<T> podziel(std::vector<T> V, std::vector<double> p);

	void zrobTo();
}
