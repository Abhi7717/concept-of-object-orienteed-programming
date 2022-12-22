#include <iostream>
using namespace std;
 template<class X> 
 void binarySearch(X a[], X Find)
{
    int low = 0, high = sizeof(a);
    int mid;
    // This below check covers all cases , so need to check
    // for mid=lo-(hi-lo)/2
    while (high - low > 1) {
        int mid = (high + low) / 2;
        if (a[mid] < Find) {
            low = mid + 1;
        }
        else {
            high = mid;
        }
    }
    if (a[low] == Find) {
        cout << "Found"
             << " At Index " << low << endl;
    }
    else if (a[high] == Find) {
        cout << "Found"
             << " At Index " << high << endl;
    }
    else {
        cout << "Not Found" << endl;
    }
}
 
int main()
{
     int v[] = { 1, 3, 4, 5, 6 };
    int Find = 1;
    binarySearch(v, Find);
    Find = 6;
    binarySearch(v, Find);
    Find = 4;
    binarySearch(v, Find);
    return 0;
}

// Found At Index 0
// Found At Index 4
// Found At Index 2