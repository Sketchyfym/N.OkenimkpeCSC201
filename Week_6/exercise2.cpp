#include <iostream>
using namespace std;

//Sort
void sort(int list[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < size; j++)
        {
            if (list[j] < list[minIndex])
                minIndex = j;
        }

        // swap
        int temp = list[i];
        list[i] = list[minIndex];
        list[minIndex] = temp;
    }
}

// binary search
int binarySearch(const int list[], int key, int size)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (list[mid] == key)
            return mid;
        else if (key < list[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    int list[] = {1, 4, 4, 2, 5, -3, 6, 2};
    int size = 8;

    // Sort
    sort(list, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
        cout << list[i] << " ";
    cout << endl;

    //binary search
    int key = 4;
    int index = binarySearch(list, key, size);

    if (index != -1)
        cout << key << " found at index " << index << endl;
    else
        cout << key << " not found" << endl;

    return 0;
}
