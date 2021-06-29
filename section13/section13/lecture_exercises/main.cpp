// Declare classes and objects

#include <iostream>
#include <string>
#include <vector>

class Player {

public:
    // attributes
    std::string name;
    int health;
    int xp;
    
    // methods
    void talk(std::string text_to_say){
        std::cout << name << " says " << text_to_say << std::endl;
    }
    bool is_dead();
    
};

class Account {

public:
    // attributes
    std::string name;
    double balance;
    
    // methods
    bool deposit (double bal) {
        balance += bal;
        std::cout << "In deposit" << std::endl;
    }
    bool withdraw (double bal) {
        balance -= bal;
        std::cout << "In withdraw" << std::endl;
    }
};

int main () {
    
    Account frank_account;
    frank_account.name = "Frank's Account";
    frank_account.balance = 5000.0;
    std::cout << frank_account.balance << std::endl;
    
    frank_account.deposit(1000.0);
    std::cout << frank_account.balance << std::endl;
    frank_account.withdraw(500.0);
    std::cout << frank_account.balance << std::endl;
    

    Player frank;
    // Setting Attributes
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;    
    // Calling Method 
    frank.talk("hi there");
    
    
    // Pointer Example
    
    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    
    enemy->talk("I will destroy you");
    
    
//    Account frank_account;
//    Account jim_account;
//    
//    
//    Player frank;  // objects
//    Player hero;  // onjects
//    
//    Player players[] {frank, hero};
//    
//    vector<Player> player_vec {frank};
//    player_vec.push_back(hero);
//    
//    Player *enemy {nullptr};
//    enemy = new Player;
//    
//    delete enemy;
//    
    
    return 0;
}