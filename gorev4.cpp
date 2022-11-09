#include <iostream>
#include <vector>
#include <string>
struct Province;

struct Country
{
	std::string name;
	Province* capital;
};

struct Province
{
	std::string name;
	Country* domain;
};

int main(int argc, char const *argv[])
{
	Province istanbul,ankara;
	Country turkiye;
	istanbul.name = "Istanbul";
	ankara.name = "Ankara";
	turkiye.name = "Turkiye";

	istanbul.domain = &turkiye;
	ankara.domain = &turkiye;
	turkiye.capital = &ankara;

	std::cout<<istanbul.domain->capital->name<<std::endl;


	
	return 0;
}