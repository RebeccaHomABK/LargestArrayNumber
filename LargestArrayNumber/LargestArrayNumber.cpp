#include <iostream>

void PopulateArray(int numbers[], int size);
int GetLargestNumber(int numbers[], int size);
void DisplayArray(int numbers[], int size);

int main()
{
    //  Sets the size of the array
    constexpr int size = 6;
    int numberArray[size] = { };
    
    PopulateArray(numberArray, size);
    DisplayArray(numberArray, size);
}

void PopulateArray(int numbers[], int size)
{
    int number;
    int index = 0;

    //  Populate the numbers array
    std::cout << "Enter " << size << " numbers to compare." << std::endl;
    do {
        std::cout << "Enter #" << (index + 1) << " out of " << size << ": ";
        std::cin >> number;
        if (std::cin.fail())
        {
            system("cls");
            std::cin.clear();
            std::cin.ignore(100, '\n');
            std::cout << "Invalid entry! Please enter a number." << std::endl;
        }
        else
        {
            system("cls");
            numbers[index] = number;
            index++;
        }
    } while (index < size);
}

int GetLargestNumber(int numbers[], int size)
{
    //  Gets the largest number in an array
    int largest = numbers[0];
    for (int i = 1; i < size; i++)
    {
        if (largest < numbers[i])
        {
            largest = numbers[i];
        }
    }
    return largest;
}

void DisplayArray(int numbers[], int size)
{
    std::cout << "The numbers you entered are: ";

    //  Displays all numbers in the array
    for (int i = 0; i < size; i++)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    //  Display the biggest number in the array
    std::cout << "The largest number in the array is " << GetLargestNumber(numbers, size) << std::endl;
}