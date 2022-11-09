#include <iostream>
#include <vector>

template <class T> std::vector<std::vector<T> > create_matrix(T value, int column, int row){
	std::vector<std::vector<T> > ret(row);
	for (int i = 0; i < row; ++i)
	{
		ret[i].resize(column,value);
	}
	return ret;
}



int main(int argc, char const *argv[])
{


	
	return 0;
}