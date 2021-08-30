#include <iostream>
using namespace std;

int insertion_sort(int data[], int n)
{
    int i, j, tmp, swaps = 0;

    for (i = 1; i < n; i++)
    {
        j = i;
        tmp = data[i];
        while (j > 0 && tmp < data[j - 1])
        {
            data[j] = data[j - 1];
            j--;
        }
        data[j] = tmp;
        swaps++;
    }
    return swaps;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        char input[1000];
        cin >> input;
        int array[t], k = 0;
        for (int j = 0; j < t; j++)
        {
            array[j] = 0;
        }
        for (int j = 0; input[j] != '\0'; j++)
        {
            if (input[j] == ' ')
            {
                k++;
            }
            else
            {
                array[k] = array[k] * 10 + (input[j] - 48);
            }
        }
        int swaps = insertion_sort(array, t);
        cout << swaps << endl;
    }
}