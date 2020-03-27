//
// Created by Ahmed Mahdy on 16-Mar-20.
//

#include <iostream>

using namespace std;


int section_6_challenge() {
    const double small_room_service_charge{25};
    const double large_room_service_charge{35};
    const double tax_rate{.06};
    const int validaty_of_estimation{30};
    int number_of_small_rooms{0};
    int number_of_large_rooms{0};
    double cost{0};
    double tax{0};
    double total_estimate{0};

    cout << "Estimate for carpet cleaning service\n";
    cout << "Number of small rooms";
    cin >> number_of_small_rooms;
    cout << "Number of large rooms";
    cin >> number_of_large_rooms;
    cout << "Price per small room:$" << small_room_service_charge;
    cout << "\nPrice per large room:$" << large_room_service_charge;

    cost = (number_of_small_rooms * small_room_service_charge) +
           (number_of_large_rooms * large_room_service_charge);
    cout << "\nCost:$" << cost;
    tax = cost * tax_rate;
    cout << "\nTax:$" << tax;
    total_estimate = cost + tax;
    cout << "\nTotal estimate:$" << total_estimate;
    cout << "\nThis estimate is valid for " << validaty_of_estimation
         << " days";
    return 0;

}