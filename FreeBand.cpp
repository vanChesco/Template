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

	for (size_t i = 0; i < length; i++)
	{
		V[i] /= p[i];
	}

	return chunk;
}