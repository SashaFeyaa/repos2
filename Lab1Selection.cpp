#include <iostream>
#include<bits.h>
#include <sstream> 
using namespace std;

void selectionSort(int array[], int size)
{

    for (int i = 0; i < (size - 1); i++)
    {
        int min_indx = i;
        int min = array[i];
        for (int j = i + 1; j < (size); j++)
        {
            if (min > array[j])
            {
                min_indx = j;
                min = array[j];
            }
        }
        int temp = array[i];
        array[i] = array[min_indx];
        array[min_indx] = temp;
    }
}

void printElements(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
}
void getRandomArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        arr[i] = rand() % 1000;
}

int main(int argc, char* argv[]) {
    time_t t = clock();

    int size = 100000;
    int* arr = new int[size];
    getRandomArray(arr, size);
    selectionSort(arr, size);


    t = clock() - t;
    double time_taken = ((double)t) / CLOCKS_PER_SEC;
    cout << time_taken;
    return 0;
}
