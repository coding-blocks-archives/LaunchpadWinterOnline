#include <iostream>
#include <algorithm>
using namespace std;

class Movie{
    public:
    string title;
    int release_year;
};

int main(){
    int arr[] = {5, 4, 3, 2,1 };
    int n = 5;

    // sort(&arr[0], &arr[5]);
    // sort(arr, arr + 5);

    

    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }

}