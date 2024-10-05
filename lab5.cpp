//
// Created by lolsm on 10/4/2024.
//
#include <iostream>
#include <string>
#include <vector>
#include "StringData.h"
using namespace std;


int linearsearch(vector<string> v, string target) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == target) {
            return i;
        }
    }
    return -1;
}

int binarysearch(vector<string> v, string target) {
    int low = 0;
    int high = v.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (v[mid] == target) {
            return mid;
        }
        else if (v[mid] < target) {
            low = mid + 1;
        }else {
            high = mid - 1;

        }
    }
    return -1;
}
int main()
 {
    vector<string> s = getStringData();

    cout << "not_here:" << endl;
    cout << "linear search:" << endl;
    long long  x = systemTimeNanoseconds();
    cout << linearsearch(s, "not_here");
    cout << " Time: "<< systemTimeNanoseconds() - x << endl;

    cout << "binary search:" << endl;
    x = systemTimeNanoseconds();
    cout << binarysearch(s, "not_here");
    cout << " Time: " << systemTimeNanoseconds() - x << endl;

    cout << endl;

    cout << "mzzzz:" << endl;
    cout << "linear search:" << endl;
    x = systemTimeNanoseconds();
    cout << linearsearch(s, "mzzzz");
    cout << " Time: "<< systemTimeNanoseconds() - x << endl;

    cout << "binary search:" << endl;
    x = systemTimeNanoseconds();
    cout << binarysearch(s, "mzzzz");
    cout << " Time: " << systemTimeNanoseconds() - x << endl;

    cout << endl;

    cout << "aaaaa:" << endl;
    cout << "linear search:" << endl;
    x = systemTimeNanoseconds();
    cout << linearsearch(s, "aaaaa");
    cout << " Time: "<< systemTimeNanoseconds() - x << endl;

    cout << "binary search:" << endl;
    x = systemTimeNanoseconds();
    cout << binarysearch(s, "aaaaa");
    cout << " Time: " << systemTimeNanoseconds() - x << endl;

    cout << endl;
 }
