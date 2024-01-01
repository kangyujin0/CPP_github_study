#include <iostream>
template <typename T, size_t size>
T Max(T(&arr)[size])
{
    T max = arr[0];
    for (size_t i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
template <typename T>
size_t MaxLengthIndex(T* arr, size_t size)
{
    size_t maxLength = 0;
    size_t maxIndex = 0;
    for (size_t i = 0; i < size; i++) {
        size_t length = arr[i].length();
        if (length > maxLength) {
            maxLength = length;
            maxIndex = i;
        }
    }
    return maxIndex;
}
template <typename T>
T add(T data[], int n)
{
    T sum = 0;
    for (int i = 0; i < n; i++) {
        sum += data[i];
    }
    return sum;
}
template <typename T>
T avr(T data[], int n)
{
    T sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (double)data[i];
    }
    T average = sum / n;
    return average;
}

int main()
{
    int arr1[] = { 5, 25, 15, 20, 10 };
    double arr2[] = { 5.3, 2.5, 1.5, 3.5, 4.5 };
    std::string str[] = { "tigger", "cat", "rabbit", "wolf", "dolphin" };

    int maxint = Max(arr1);
    double maxdouble = Max(arr2);
    size_t maxStrIndex = MaxLengthIndex(str, sizeof(str) / sizeof(str[0]));

    std::cout << "정수형 최댓값: " << maxint << std::endl;
    std::cout << "실수형 최댓값: " << maxdouble << std::endl;
    std::cout << "최대 길이의 문자열: " << str[maxStrIndex] << std::endl;
    std::cout << "정수와 실수 배열의 합:" << add(arr1, 5) << ", " << add(arr2, 5) << std::endl;
    std::cout << "정수와 실수 배열의 평균:" << avr(arr1, 5) << ", " << avr(arr2, 5) << std::endl;

    return 0;
}