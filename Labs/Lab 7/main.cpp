#include <iostream>
#include <string>
#include <math.h>
using namespace std;

bool isSymmetric(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

void sum(int a[], int n)
{
    
    int temp = 0;

    cout << "The running sum is: ";
    
    for(int i = 0; i < n; i++)
    {
        temp += a[i];

        cout << temp << " ";
    }

}

void standardDeviation(int a[], int n)
{
    int sum = 0;
    int mean = 0;
    int variance = 0;
    int standardDeviation = 0;

    for(int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    mean = sum / n;

    for(int i = 0; i < n; i++)
    {
        variance += (a[i] - mean) * (a[i] - mean);
    }

    variance = variance / n;

    standardDeviation = sqrt(variance);

    cout << "The standard deviation is: " << standardDeviation << endl;
}

int main()
{
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int a[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if(isSymmetric(a,n))
    {
        cout << "The array is symmetric";
    }
    else
    {
        cout << "The array is not symmetric";
    }

    

    // cout << "\n" << endl;

    standardDeviation(a,n);

    cout << "Done.";

    return 0;

}