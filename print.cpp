#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>

#include <utility>

template<typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v)
{
    for (auto& e : v)
    {
        os << e << ' ';
    }
    return os;
}
void print()
{
    std::array<int, 3> arr = {1,2,3};
    for (const auto& e : arr) std::cout << e << " ";
    std::cout << "\n";
    
    std::vector<int> v = {1,2,3};
    for (const auto& e : v) std::cout << e << " ";
    std::cout << "\n";
    
    std::list<int> l = {1,2,3};
    for (const auto& e : l) std::cout << e << " ";
    std::cout << "\n";
    
    std::set<int> s = {1,2,3};
    for (const auto& e : s) std::cout << e << " ";
    std::cout << "\n";
    
    std::unordered_set<int> us = {1,2,3};
    for (const auto& e : us) std::cout << e << " ";
    std::cout << "\n";

    std::map<int, int> m = {{1,2},{3,4},{4,5}};
    for (const auto& e : m) std::cout << e.first << ":" << e.second << " ";
    std::cout << "\n";
    
    //map with std::pair
    std::map<int, int> m1 = {{1,2},{3,4},{4,5}};
    for (const auto& e : m1) 
    {
        const auto& p = std::make_pair(e.first, e.second);
        std::cout << p.first << ":" << p.second << " ";
    }
    std::cout << "\n";
    
    std::unordered_map<int, int> um = {{1,2},{3,4},{4,5}};
    for (const auto& e : um) std::cout << e.first << ":" << e.second << " ";
    std::cout << "\n";    
    
    std::priority_queue<int> q;
    const auto data = {1,2,3};
    for (const auto& e : data) q.push(e);
    
    while(!q.empty()) {
        std::cout << q.top() << ' ';
        q.pop();
    }
    std::cout << '\n';    
}

int main()
{
    std::vector<std::string> vec = {
        "My", "GCC", "Version", "is:", __VERSION__, "!" 
    };
    std::cout << vec << std::endl;
    
    //Print all the modern data structure
    print();

}
