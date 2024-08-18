#include <iostream>
#include <vector>
#include <algorithm>

void v_func(std::vector<int>& value)
{
	std::sort(value.begin(), value.end(), [](int& a, int& b) 
	{
		return a < b;
	}
);

	auto it = std::unique(value.begin(), value.end());

	value.erase(it, value.end());

	
}
int main()
{

	std::vector<int> V_vector = { 1,1,2,5,6,1,2,4 };

	std::cout << "Before: " << std::endl;

	for (auto& temp : V_vector)
	{
		std::cout << temp << " ";
	}

	v_func(V_vector);

	std::cout << std::endl;

	std::cout << "After: " << std::endl;

	for (auto& temp : V_vector)
	{
		std::cout << temp << " ";
	}
	
}