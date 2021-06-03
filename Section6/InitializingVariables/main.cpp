#include <iostream>

using namespace std;

int main() {
    
    const int small_room_price {25};
    const int large_room_price {35};
    const float sales_tax {0.06};
    const int valid_days {30};
    
    int num_small_rooms {0};
    cout << "How many SMALL rooms would you like cleaned? ";
    cin >> num_small_rooms;
    
    int num_large_rooms {0};
    cout << "\nHow many LARGE rooms would you like cleaned? ";
    cin >> num_large_rooms;
    
    cout << "\nEstimate for carpet cleaning service:" << endl;
    cout << "Number of small rooms: " << num_small_rooms << endl;
    cout << "Number of large rooms: " << num_large_rooms << endl;
    cout << "Price per small room: $" << small_room_price << endl;
    cout << "Price per large room: $" << large_room_price << endl;
    cout << "Cost: $" << (num_small_rooms * small_room_price) + (num_large_rooms * large_room_price) << endl;
    cout << "Tax: $" << ((num_small_rooms * small_room_price) + (num_large_rooms * large_room_price)) * sales_tax << endl;
    cout << "=============================\n";
    cout << "Total estimate: $" 
            << (((num_small_rooms * small_room_price) + (num_large_rooms * large_room_price)) * sales_tax) + 
                    ((num_small_rooms * small_room_price) + (num_large_rooms * large_room_price) ) 
            << endl;
    cout << "This estimate is valid for " << valid_days << " days\n";
    
    
 
}
