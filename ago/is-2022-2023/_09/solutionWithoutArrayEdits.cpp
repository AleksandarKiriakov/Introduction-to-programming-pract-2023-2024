#include <iostream>

using std::cin;
using std::cout;

int findIndex(int row,int size,int offset)
{
    int proposedResult = (size - row - 1 - offset) % size;
    return (proposedResult >= 0) ? proposedResult : (size + proposedResult);
}

void inputMatrix(int** matrix, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

void printArray(int* arr, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void sortArray(int* arr, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                std::swap(arr[i], arr[j]);
            }
        }
    }
}

int main()
{
    int size;
    cin >> size;

    int** matrix = new int* [size];
    for (size_t i = 0; i < size; i++)
    {
        matrix[i] = new int[size];
    }
    inputMatrix(matrix, size);

    int offset;
    cin >> offset;

    int* result = new int[size];

    for (size_t i = 0; i < size; i++)
    {
        result[i] = matrix[i][findIndex(i, size, offset)];
    }
    
    sortArray(result, size);
    printArray(result, size);

    delete[] result;
    for (size_t i = 0; i < size; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
