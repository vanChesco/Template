#include "FreeBand.h"

using namespace Domains;

template<class T>
std::vector<T> Domains::podziel(std::vector<T> V, std::vector<double> p)
{
    Domains::FreeBand pp{34, 48};
	std::vector<FreeBand> chunk;
	/*std::vector<FreeBand>*/ chunk.assign(3, { 3,3 });
    chunk.push_back(pp);

    p.push_back(0);

    const size_t length{V.size() < p.size() ? V.size() : p.size()};

    for (size_t i{}; i < length; ++i)
    {
        V[i] /= p[i];
    }

    return chunk;
}

void Domains::zrobTo()
{
	std::vector<FreeBand> vec, wynik;
	std::vector<double> dzielna;
	std::vector<float> vf(23, 055);

    constexpr int length = 20;

    for (int i{}; i < length; ++i)
	{
		vec.push_back({ double(i + 2), double(i + 8) });
		dzielna.push_back((double)i);
	}

    wynik = podziel(vec, dzielna);

    for (auto x : wynik)
    {
        std::cout << x.amin << ", " << x.amax << std::endl;
    }
}
