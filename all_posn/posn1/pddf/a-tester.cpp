#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int main() {
    // Example with a vector of integers
    std::vector<int> nums = {1, 3, 2};
    std::cout << "Original vector: 1 3 2" << std::endl;

    bool found_next = std::next_permutation(nums.begin(), nums.end());

    if (found_next) {
        std::cout << "Next permutation: ";
        for (int x : nums) {
            std::cout << x << " ";
        }
        std::cout << std::endl; // Output: Next permutation: 2 1 3
    } else {
        std::cout << "No next permutation. Sequence is now smallest possible." << std::endl;
    }

    std::cout << "------------------------" << std::endl;

    // Example with a string to generate all permutations
    std::string s = "bac";
    // Must start with the smallest (sorted) permutation to generate all
    std::sort(s.begin(), s.end()); 
    std::cout << "Starting string: " << s << std::endl;

    do {
        std::cout << s << std::endl;
    } while (std::next_permutation(s.begin(), s.end())); 
    // The loop continues as long as a next permutation is found.
    // The output will be all permutations: abc, acb, bac, bca, cab, cba
    
    return 0;
}
