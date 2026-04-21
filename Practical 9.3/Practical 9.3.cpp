#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    set<int> uniqueNumbers;

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        uniqueNumbers.insert(value);
    }


    cout << "\nUnique elements (sorted):\n";
    for (auto it = uniqueNumbers.begin(); it != uniqueNumbers.end(); it++) {
        cout << *it << " ";
    }


    vector<int> vec(uniqueNumbers.begin(), uniqueNumbers.end());

    cout << "\n\nElements copied to vector:\n";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
cout<<"\nhardi Agola-25CE002\n";
    return 0;
}
