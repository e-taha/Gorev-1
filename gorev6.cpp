#include <iostream>
#define _USE_MATH_DEFINES // M_PI
#include <cmath>

class RegularPolygon
{

public:
	RegularPolygon(int n){
		this->n=n;
		this->angle=2*(double)M_PI/n;
		counter++;
	}	
	~RegularPolygon(){
		counter--;
	}
	double area(double length){
		double triangleHeigth=length/(2*std::tan(angle/2));
		double triangleArea=length*triangleHeigth/2;
		return triangleArea*(double)n;

	}
	double length(double area){
		double triangleArea=area/(double)n;
		//tA=l*l*cot(angle/2)/4
		//4*tA/cot(angle/2)=l^2
		return 2*std::sqrt(triangleArea*std::tan(angle/2));
	}
private:
	int n;
	double angle;
	static int counter;
};

int RegularPolygon::counter=0;

int main(int argc, char const *argv[])
{


	return 0;
}