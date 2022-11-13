#include "FreeBand.h"

using namespace Domains;

FreeBand::FreeBand() : amin{ 0 }, amax{ 0 } {};
FreeBand::FreeBand(double min, double max) : amin(min), amax(max) {};

template<class T>
/// <summary>
/// Szablon funkcji
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="V"></param>
/// <param name="p"></param>
/// <returns></returns>
std::vector<T> Domains::podziel(std::vector<T> V, std::vector<double> p)
{
	std::vector<T> chunk;

	Domains::FreeBand pp({ 34, 48 });
	chunk.push_back(pp);

	p.push_back(0);					

	int length{ 0 };
	if (V.size() < p.size())	length = V.size(); 
	else						length = p.size();

	for (int i = 0; i < length; i++)
	{
		V[i].amax /= p[i];
		V[i].amin /= p[i];
	}

	return chunk;
}	

void Domains::zrobTo()
{
	std::vector<FreeBand> vec, wynik;
	std::vector<double> dzielna;
	std::vector<float> vf(23, 055);

	int length = 20;

	for (size_t i = 0; i < length; i++)
	{
		vec.push_back({ double(i + 2), double(i + 8) });
		dzielna.push_back((double)i);
	}

	podziel(vec, dzielna);
}