#include <iostream>
#include <vector>
#include <math.h>

double mean(std::vector<double> data){
	double sum = 0.0;
	for (int i = 0; i < data.size(); ++i)
	{
		sum+=data[i];
	}
	return sum/(double)data.size();
}
double stddev(std::vector<double> data){
	double meanValue = mean(data);
	double sum = 0.0;
	for (int i = 0; i < data.size(); ++i)
	{
		sum+=(meanValue-data[i])*(meanValue-data[i]);
	}
	return sqrt(sum)/(data.size()-1);
}

// int main(int argc, char const *argv[])
// {
// 	int n;
// 	double a;
// 	std::cin>>n;
// 	std::vector<double> v;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		std::cin>>a;
// 		v.push_back(a);
// 	}
// 	std::cout<<stddev(v)<<std::endl;

	
// 	return 0;
// }