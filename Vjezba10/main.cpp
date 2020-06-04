#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>

auto above(int threshold)
{
    return [=](int value)
    {
        return value > threshold;
    };
};

void readWrite()
{
    std::vector<int> v;
    std::ifstream f("numbers.txt");
    if (!f.is_open())
    {
        throw 1;
    }
    std::istream_iterator<int> is(f), eos;
    std::vector<int>::iterator end;
    copy(is, eos, back_inserter(v));

    auto count = count_if(v.begin(), v.end(), above(500));

    std::cout << "counter: " << count << std::endl;

    std::cout << "min: " << *min_element(v.begin(), v.end()) << std::endl;

    std::cout << "max: " << *max_element(v.begin(), v.end()) << std::endl;

    v.erase(std::remove_if(v.begin(), v.end(), [](const int& el) {return el < 300; }), v.end());
    std::sort(v.begin(), v.end(), std::greater<int>());

    std::ostream_iterator<int> os(std::cout, ",");

    copy(v.begin(), v.end(), os);
}
int main()
{
    try
    {
        readWrite();
    }
    catch (int)
    {
        std::cout << "Error reading/opening the file" << std::endl;
    }
}