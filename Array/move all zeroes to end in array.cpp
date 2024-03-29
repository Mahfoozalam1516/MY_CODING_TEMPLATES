#include<iostream>
#include<algorithm>
#include<vector>

void push_zeros_to_end(std::vector<int>& arr)
{
    std::stable_partition(arr.begin(), arr.end(), [](int n) {return n!= 0; });
}

int main()
{
    std::vector<int> arr{1,9,8,7,0,0,2,3,0,4,0,4};
    push_zeros_to_end(arr);

    for(const auto& i: arr)
        std::cout<<i<< "";

    std::cout<<"\n";
    return 0;
}
