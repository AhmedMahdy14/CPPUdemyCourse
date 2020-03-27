#include <iostream>
#include <vector>

using namespace std;

int main() {
//    cout << "Hello, World!" << std::endl;
//    return 0;

    vector<int> vector1;
    vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);
    cout << "Value of first index in vector1 is " << vector1.at(0) << endl;
    cout << "Value of second index in vector1 is " << vector1.at(1) << endl;
    cout << "Size of vector1 is " << vector1.size() << endl;

    vector2.push_back(100);
    vector2.push_back(200);
    cout << "Value of first index in vector2 is " << vector2.at(0) << endl;
    cout << "Value of second index in vector2 is " << vector2.at(1) << endl;
    cout << "Size of vector2 is " << vector2.size() << endl;

    vector<vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "First element of vector1 inside vector_2d is "
         << vector_2d.at(0).at(0) << endl;

    cout << "Second element of vector1 inside vector_2d is "
         << vector_2d.at(0).at(1) << endl;


    cout << "First element of vector2 inside vector_2d is "
         << vector_2d.at(1).at(0) << endl;

    cout << "Second element of vector2 inside vector_2d is "
         << vector_2d.at(1).at(1) << endl;


    vector1.at(0) = 1000;

    cout << "First element of vector1 inside vector_2d is "
         << vector_2d.at(0).at(0) << endl;

    cout << "Second element of vector1 inside vector_2d is "
         << vector_2d.at(0).at(1) << endl;


    cout << "First element of vector2 inside vector_2d is "
         << vector_2d.at(1).at(0) << endl;

    cout << "Second element of vector2 inside vector_2d is "
         << vector_2d.at(1).at(1) << endl;


    cout << "First element of vector1 is " << vector1.at(0) << endl;

    cout << "Second element of vector1 is " << vector1.at(1) << endl;

    return 0;

}
