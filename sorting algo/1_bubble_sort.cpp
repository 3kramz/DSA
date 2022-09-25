#include <iostream>
using namespace std;

void bubble_sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void displayArray(int data[], int size)
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "   " << data[i];
    }
    cout << endl;
}

int main()
{

    int arr[] = {3, 2, 5, 2, 5, 6,3534,65,74,4,3456,657,564775,23,423,5,575,6,354357,6789794,54634,23,4325,4756,899707,8,32,32,345,90,1234,678,789,34,12,32,4435,54667,7,8790,9800,9,564};
    int size = sizeof(arr) / sizeof(arr[0]);

    displayArray(arr, size);

    bubble_sort(arr, size);
    displayArray(arr, size);

    return 0;
}