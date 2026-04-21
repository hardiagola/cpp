#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void printVector(const vector<int>& v)
{
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}


void manualReverse(vector<int>& v)
{
    auto start = v.begin();
    auto end = v.end() - 1;

    while (start < end)
    {

        int temp = *start;
        *start = *end;
        *end = temp;

        ++start;
        --end;
    }
}

int main()
{
    vector<int> nums;
    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        nums.push_back(value);
    }


    cout << "\nOriginal vector: ";
    printVector(nums);


    vector<int> reversed1 = nums;
    reverse(reversed1.begin(), reversed1.end());

    cout << "Reversed using std::reverse(): ";
    printVector(reversed1);


    vector<int> reversed2 = nums;
    manualReverse(reversed2);

    cout << "Reversed manually using iterators: ";
    printVector(reversed2);
    cout<<"\nHardi Agola-25CE002\n";

    return 0;
}
