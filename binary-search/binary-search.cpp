#include <iostream>
#include <string>
using namespace std;

int binarySearch(int arr[], int p, int r, int num)
{
    if (p <= r)
    {
        int mid = (p + r) / 2;
        if (arr[mid] == num)
            return mid;
        if (arr[mid] > num)
            return binarySearch(arr, p, mid - 1, num);
        if (arr[mid] < num)
            return binarySearch(arr, mid + 1, r, num);
    }
    return -1;
}
int main(void)
{
    int n, q;
    cin >> n >> q;
    char input[100000];
    cin >> input;
    int array[n], j = 0;
    for (int i = 0; i < n; i++)
    {
        array[i] = 0;
    }
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i])
        {
            j++;
        }
        else
        {
            array[j] = array[j] * 10 + stoi(&input[i]);
        }
    }
    for (int i = 0; i < q; i++)
    {
        int num;
        cin >> num;
        int index = binarySearch(array, 0, n - 1, num);
        cout << index << endl;
    }
}