//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <iostream>
#include <ostream>
#include <vector>

std::unordered_map<int, int> find_divisors(int num){
    std::unordered_map<int, int> divisors;
    for(int i = 2; i < 21; i++){
        divisors[i] = 0;
    }
    while (num != 1){
        for (int i = 2; i < 20; i++){
            if (num % i == 0){
                num /= i;
                divisors[i] += 1;
                break;
            }
        }
    }
    return divisors;
}

int main(){
    // for (auto i : find_divisors(4)){
    //     std::cout << i.first << ": " << i.second << std::endl;
    // }

    std::unordered_map<int, int> nums;
    for(int i = 2; i < 21; i++){
        nums[i] = 0;
    }

    for (int i = 2; i < 21; i++){
        auto divisors_curr = find_divisors(i);
        for (int j = 2; j < 21; j++){
            if (divisors_curr[j] > nums[j]){
                nums[j] += 1;
            }
        }
    }

    int mult_result = 1;
    for (auto i : nums){
        if (i.second != 0)
            mult_result *= pow(i.first,i.second);
    }

    for (auto i : nums){
        std::cout << i.first << ": " << i.second << std::endl;
    }

    std::cout << mult_result << std::endl;
}