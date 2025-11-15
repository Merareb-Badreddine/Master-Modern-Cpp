#include <array>
#include <iostream>
#include <algorithm>

int main() {
    // Declare a std::array of size 5
    std::array<int, 5> numbers = {1, 2, 3, 4, 5};

    // Access elements using iterators
    std::array<int,5>::iterator first_element_it = numbers.begin(); 
    std::array<int,5>::iterator last_element_it = numbers.end() - 1; 
    std::cout << "First element: " << *first_element_it << std::endl;
    std::cout << "Last element: " << *last_element_it << std::endl; // make sure end is pointing to place after last element 

    // Iterate over the array using a range-based for loop
    std::cout << "Array elements: ";
    for (const auto& num : numbers) { // range based for loop 
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Iterate over the array using a traditional for loop and iterators
    std::cout << "Array elements (iterator): ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    try {
        numbers.at(10);
    } catch (const std::out_of_range& e) {
        std::cout << "Invalid Access: " << e.what() << std::endl;
    }

    // Reverse the array using std::reverse
    std::reverse(numbers.begin(), numbers.end());
    std::cout << "Reversed array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Sort the array using std::sort
    std::sort(numbers.begin(), numbers.end());
    std::cout << "Sorted array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Check if the array is empty
    std::cout << "Array is empty? " << (numbers.empty() ? "true" : "false") << std::endl;

    // Get the size of the array
    std::cout << "Array size: " << numbers.size() << std::endl;

    // Get the maximum size of the array
    std::cout << "Array max size: " << numbers.max_size() << std::endl;

    return 0;
}
