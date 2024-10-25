//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cstdlib>
//#include <ctime>
//
//bool isSorted(const std::vector<int>& arr) {
//    for (size_t i = 1; i < arr.size(); ++i) {
//        if (arr[i - 1] > arr[i]) {
//            return false;
//        }
//    }
//    return true;
//}
//
//void bongoSort(std::vector<int>& arr) {
//    std::srand(static_cast<unsigned int>(std::time(nullptr))); // seed random number generator
//    while (!isSorted(arr)) {
//        std::random_shuffle(arr.begin(), arr.end());
//    }
//}
// 
//int main() {
//    std::vector<int> arr = { 3, 1, 4, 1, 5, 9, 2, 6, 5 ,12,32,45,76,78,89,29,23,44,33,22,11,213,25};
//
//    std::cout << "Original array: ";
//    for (int num : arr) {
//        std::cout << num << " ";
//    }
//    std::cout << std::endl;
//
//    bongoSort(arr);
//
//    std::cout << "Sorted array: ";
//    for (int num : arr) {
//        std::cout << num << " ";
//    }
//    std::cout << std::endl;
//
//    return 0;
//}
