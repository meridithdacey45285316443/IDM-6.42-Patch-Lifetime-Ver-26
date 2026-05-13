#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
class Utility{
public:
    static int sum(const std::vector<int>& vec){
        return std::accumulate(vec.begin(), vec.end(), 0);
    }
    static double average(const std::vector<int>& vec){
        return vec.empty() ? 0 : static_cast<double>(sum(vec)) / vec.size();
    }
    static std::vector<int> sortAscending(std::vector<int> vec){
        std::sort(vec.begin(), vec.end());
        return vec;
    }
    static std::vector<int> sortDescending(std::vector<int> vec){
        std::sort(vec.rbegin(), vec.rend());
        return vec;
    }
    static void printVector(const std::vector<int>& vec){
        for(int num : vec){
            std::cout << num << ' ';
        }
        std::cout << std::endl;
    }
};
int main(){
    std::vector<int> numbers = {5, 3, 8, 6, 2};
    std::cout << "Sum: " << Utility::sum(numbers) << std::endl;
    std::cout << "Average: " << Utility::average(numbers) << std::endl;
    std::cout << "Sorted Ascending: ";
    Utility::printVector(Utility::sortAscending(numbers));
    std::cout << "Sorted Descending: ";
    Utility::printVector(Utility::sortDescending(numbers));
    return 0;
}
