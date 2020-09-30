/////////////////////////////////////////////////
// Đây là thư viện để sử dụng các phép toán trên mảng
// copyright by Cong Son. All rights reserved.
/////////////////////////////////////////////////

#include <iostream>
using namespace std;

#ifndef SON_ARRAY
#define SON_ARRAY
void merge(long long*, long, long, long);
void merge(long double* arr, long l, long m, long r);

// An Array that its member type is long long
class LongArray {
private:
    long long* array;
    long amount;
public:
    void Import_array() {
        //*******************************************
        // Client imports amount of elements via cin and then alternately all members of the array
        //*******************************************
        cin >> amount;
        array = new long long[amount];
        for (long i = 0; i < amount; i++)
        {
            cin >> array[i];
        }
    }

    void Export_array() {
        //*******************************************
        // Export alternately all elements in the array via cout
        //*******************************************
        long i;
        for (i = 0; i < amount - 1; i++)
            cout << array[i] << " ";
        cout << array[i] << endl;
    }

    void merge_sort(long l,long r,bool flag = 0) {
        if (flag == 1) r = amount-1;
        if (l < r)
        {
            // Tương tự (l+r)/2, nhưng cách này tránh tràn số khi l và r lớn
            long m = l + (r - l) / 2;

            // Gọi hàm đệ quy tiếp tục chia đôi từng nửa mảng
            merge_sort(l, m);
            merge_sort(m + 1, r);

            merge(array, l, m, r);
        }
    }

};

// An Array that its member type is long double
class LongDoubleArray {
private:
    long double* array;
    long amount;
public:
    void Import_array() {
        //*******************************************
        // Client imports amount of elements via cin and then alternately all members of the array
        //*******************************************
        cin >> amount;
        array = new long double[amount];
        for (long i = 0; i < amount; i++)
        {
            cin >> array[i];
        }
    }
    
    void Export_array() {
        //*******************************************
        // Export alternately all elements in the array via cout
        //*******************************************
        long i;
        for (i = 0; i < amount - 1; i++)
            cout << array[i] << " ";
        cout << array[i] << endl;
    }

    void merge_sort(long l, long r, bool flag = 0) {
        if (flag == 1) r = amount - 1;
        if (l < r)
        {
            // Tương tự (l+r)/2, nhưng cách này tránh tràn số khi l và r lớn
            long m = l + (r - l) / 2;

            // Gọi hàm đệ quy tiếp tục chia đôi từng nửa mảng
            merge_sort(l, m);
            merge_sort(m + 1, r);

            merge(array, l, m, r);
        }
    }
    

};

void merge(long long *arr, long l, long m, long r)
{
    long i, j, k;
    long n1 = m - l + 1;
    long n2 = r - m;

    // Create temporary arrays 
    
    long long* L = new long long[n1];
    long long* R = new long long[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // merge the two current arrays to arr
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy lefts members 
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void merge(long double* arr, long l, long m, long r)
{
    long i, j, k;
    long n1 = m - l + 1;
    long n2 = r - m;

    // Create temporary arrays 

    long double* L = new long double[n1];
    long double* R = new long double[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // merge the two current arrays to arr
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy lefts members 
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
#endif // !SON_ARRAY
