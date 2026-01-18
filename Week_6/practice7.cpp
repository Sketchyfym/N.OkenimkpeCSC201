#include<iostream>

using namespace std;

int linearSearch(const int list[], int key, int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        if (key == list[i])
            return i;
    }    
    return -1;
}
int main()
{
    int list[] = {1, 4, 4, 2, 5, -3, 6, 2};
    int i = linearSearch(list, 4, 8);
    int j = linearSearch(list, -4, 8);
    int k = linearSearch(list, -3, 8);
    cout << "Locations of 4, -4, and -3 are " << i << ", " << j << ", and " << k;
    return 0;
}
