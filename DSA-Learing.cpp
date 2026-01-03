#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int> num, int target)
{
    std::unordered_map<int, int> mp;

    for (int i = 0;i < num.size();i++)
    {
        int required = target - num[i];
        if (mp.find(required) != mp.end())
        {
            return { mp[required],i };
        }
        mp[num[i]] = i;
    }
    return {};
}

int main()
{
    std::vector<int> arr = { 4, 2, 6, 7, 8, 9, 1 };
    int target = 15;

    std::vector<int> result = twoSum(arr, target);

   std:: cout << "Indices: " << result[0] << " , " << result[1] <<std:: endl;
    std::cout << "Values: " << arr[result[0]] << " + "
        << arr[result[1]] << " = " << target << std::endl;

    return 0;
}

