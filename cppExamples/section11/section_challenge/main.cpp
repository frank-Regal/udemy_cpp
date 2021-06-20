#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void print_menu ();
void print_vector(vector <int>);
vector <int> add_int (vector <int>);
void get_mean (vector <int>);
void get_smallest (vector <int>);
void get_largest (vector <int>);

int main () {
    
    vector <int> user_vector {};
    char select {};
    
    
    do {
        print_menu();
        cout << "\nPlease enter a selection: ";
        cin >> select;
        
        // Do things based on input selection
        if (select == 'p' || select == 'P')
            print_vector(user_vector);
        
        else if (select == 'a' || select == 'A')
            user_vector = add_int(user_vector);
        
        else if (select == 'm' || select == 'M') 
            get_mean(user_vector);
        
        else if (select == 's' || select == 'S') 
            get_smallest(user_vector);
        
        else if (select == 'l' || select == 'L')
            get_largest(user_vector);
        
        else if (select == 'q' || select == 'Q')
            cout << "\nGoodbye..." << endl;
        else
            cout << "\n*** INVALID ENTRY ****\n\nTry Again...\n ";
    
        cout << endl;

    } while ( select != 'q' && select != 'Q');

    cout << endl;
    return 0;
}

void print_menu () 
{
        // Print Menu
        cout << "=========================" << endl;
        cout << "P - Print Numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the number" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
}

void print_vector(vector <int> user_vector) 
{
    if (user_vector.size() == 0) {
        cout << "\n[] - List is Empty" << endl;
    } 
    else {
        cout << "[ ";
        for (auto i: user_vector) {
            cout << i << " ";
        }
    cout << "]" << endl;
    }
}

vector <int> add_int (vector <int> user_vector)
{
    int int_addition {};
    cout << "Please enter integer: ";
    cin >> int_addition;
    user_vector.push_back(int_addition);
    cout << "\n" << int_addition << " was added!" << endl;
    return user_vector;
}
    
void get_mean (vector <int> user_vector)
{
     if (user_vector.size() == 0) 
         cout << "Unable to calculate the mean - no data" << endl;
    else {
        double sum{0}, average {0};
        for (auto i: user_vector) {
            sum += i;
        }
        average = sum / user_vector.size();
        cout << fixed << setprecision(2);
        cout << "Average of the current vector: " << average << endl;
    }
}

void get_smallest (vector <int> user_vector)
{
    if (user_vector.size() == 0) 
        cout << "Unable to calculate - no data" << endl;
    else {
        int smallest_int  {user_vector[0]};
        for (auto i: user_vector) {
            if (i < smallest_int)
                smallest_int = i;
        }
        cout << "Smallest Integer: " << smallest_int << endl;
    }
}

void get_largest (vector <int> user_vector )
{
    if (user_vector.size() == 0) 
        cout << "Unable to calculate - no data" << endl;
    else {
        int largest_int  {user_vector[0]};
        for (auto i: user_vector) {
            if (i > largest_int)
                largest_int = i;
        }
        cout << "Largest Integer: " << largest_int << endl;
    }
}