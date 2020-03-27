//
// Created by Ahmed Mahdy on 16-Mar-20.
//

//

#include <iostream>
#include <vector>

using namespace std;


int section_7_practice() {

    char vowels[]{'a', 'e', 'i', 'o', 'u'};
    cout << "\n the first vowel is " << vowels[0];
    cout << "\n the last vowel is " << vowels[4];
    cin >> vowels[7];
    return 0;
}


// quiz
vector<int> use_array() {
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    int arr[10]{0};
    arr[0] = 100;
    arr[9] = 1000;

    //-----WRITE YOUR ABOVE THIS LINE----
    //-----DO NOT CHANGE THE CODE BELOW THIS LINE----
    vector<int> v(arr, arr + sizeof arr / sizeof arr[0]);
    return v;
}


//quiz
vector<int> use_vector() {
    //----WRITE YOUR CODE BELOW THIS LINE----
    vector<int> vec{10, 20, 30, 40, 50};

    vec.at(0) = 100;
    vec.at(4) = 1000;
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----NO NOT MODIFY THE CODE BELOW THIS LINE----
    return vec;
}


int section7_challenge() {
    vector<int> vector1;
    vector<int> vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    cout << "Value of first index in vector1"<<vector1.at(0);
    cout << "Value of second index in vector1"<<vector1.at(1);
    cout << "Size of vector1 is "<<vector1.size();
    return 0;
}