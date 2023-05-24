#include <iostream>

// Function template for iter
template <typename T, typename Func>
void iter(T* arr, size_t length, Func function) {
    for (size_t i = 0; i < length; ++i) {
        function(arr[i]);
    }
}

// Example function template to be used with iter
template <typename T>
void print(const T& value) {
    std::cout << value << " ";
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Printing intArray: ";
    iter<int>(intArray, intArrayLength, print);
    std::cout << std::endl;

    std::string strArray[] = {"Hello", "World", "!"};
    size_t strArrayLength = sizeof(strArray) / sizeof(strArray[0]);

    std::cout << "Printing strArray: ";
    iter<std::string>(strArray, strArrayLength, print);
    std::cout << std::endl;

    return 0;
}
