#include <iostream>
#include <string>
#include <vector>

int main()
{
    // Construct a vector
    std::vector<double> vec = {1.2,3.4,5.6};
    // print out the vector size (3)
    std::cout << vec.size() << std::endl;

    //add a few elements
    vec.push_back(7.8);
    vec.push_back(9.1);
    // vector size
    std::cout << vec.size() << std::endl;
    // remove an element
    vec.pop_back();

    std::cout << vec.size() << std::endl;

    // loop over the vector using an index couter
    for (size_t i(0); i < vec.size(); i++)
    {
        std::cout << "Index: " << i <<" " << vec[i]<< std::endl;
    }

    
}