// Linear search
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter Elements of array ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements are : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    int target;
    bool flag = false;
    cout << "Enter Element To be search: ";
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            flag = true;
            cout << "Element "<<arr[i]<<" found at index " << i;
            break;
        }
    }
    if (flag == false)
    {
        cout << "Element "<<target <<"not found";
    }
}