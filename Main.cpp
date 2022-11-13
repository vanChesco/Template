
#include "FreeBand.h"

using namespace Domains;

int main()
{
	std::vector<FreeBand> vec, wynik;
	std::vector<double> dzielna;

	int length = 20;

	for (size_t i = 0; i < length; i++)
	{
		vec.push_back({ double(i + 2), double(i + 8) });
		dzielna.push_back((double)i);
	}

	wynik = Domains::podziel(vec, dzielna);
	

	return 0;
}