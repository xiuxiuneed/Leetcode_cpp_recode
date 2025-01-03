#include <iostream>
#include <vector>

int main() {
    // 创建一个整数类型的vector
    std::vector<int> numbers;

    // 向vector中添加元素
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    // 输出vector中的元素
    std::cout << "Vector contents: ";
    for (int number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    return 0;
}
