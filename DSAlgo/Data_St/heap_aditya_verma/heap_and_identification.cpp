// Heap can be represented using stack.
// It is of a fixed size

// Identification
// 1. Find the keywrd "k" in the question
// 2. To find smallest or largest

// Heap can be applied in such a question which can satisfy both these conditions

// Which heap to choose:
// 1. Min Heap ( k + largest)
// 2. Max Heap (k + smallest)

// example of kth largest element
// to find the kth largest element in the given array
// so we will construct a min heap for this question
// all the smaller elements from the kth largest element will come on the top of the kth element.
// we will pop all the smaller elements fromm the stack one by one.
// we will be left with a min heap whose top will be the kth largest element of the given array.

// questions of heap mostly consist of SORTING 
// if k is given the complexity changes from nlogn to nlogk.

// example: kth smallest element. (max heap )
// given array : 7 10 4 3 20 15
// k = 3
// to find 3rd smallest element....we will sort the array uptil only 3 elements coz other elements are never used.


// syntax of max heap and min heap using stl are givn below:


#include <bits/stdc++.h>
using namespace std;


int main(){

    //MAX HEAP:
    priority_queue<int> maxH;

    //MIN HEAP:
    priority_queue<int, vector<int>, greater<int>>;    
    
    
    
    //MIN HEAP:
    priority_queue<int, vector<int>, greater<int>>;    


    return 0;
}