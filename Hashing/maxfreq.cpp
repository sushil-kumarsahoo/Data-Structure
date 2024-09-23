#include <bits/stdc++.h>
using namespace std;

int maxfreq(vector<int> &arr)
{
    unordered_map<int, int> count;
    int maxfreq = 0;
    int maxans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        count[arr[i]]++;
        maxfreq = max(maxfreq, count[arr[i]]);
    }

    cout << "Frequency of elements: " << endl;
    for (auto it : count)
    {
        cout << it.first << ": " << it.second << endl;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (maxfreq == count[arr[i]])
        {
            maxans = arr[i];
            break;
        }
    }
    return maxans;
}
int main()
{
    vector<int> arr = {1, 2, 2, 3, 1, 4, 2};
    cout << "Element with max frequency: " << maxfreq(arr) << endl;
    return 0;
}