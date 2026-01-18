#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void generateRandom(int array[], int size)
{
    srand(time(0));
    for(int i = 0; i < size; i++)
        array[i] = rand() % 10 + 1;
}
int main()
{   
const int size = 8;
int numbers[size];
generateRandom(numbers, size);
for(int i = 0; i < size; i++)
    cout << numbers[i] << " ";    
return 0;
}
