#include "user.hpp"

User::User() {
    
}

std::string User::getName() {
    return name;
}

int User::getUserId() {
    return user_id;
}

void User::addFriend(User* f) {
    friends[f->getUserId()] = f;
    balances[f->getUserId()] = 0;
    transactions[f->getUserId()] = std::vector<std::pair<int, std::string>>();
}

void User::makeTransaction(int id, int amount, std::string memo) {
    User* fr = friends[id];

    // Adding the amount to your account balance while subtracting from friend's balance
    balances[id] = balances[id] + amount;
    fr->balances[user_id] = balances[user_id] - amount;

    // Add the transaction to your and your friend's logs
    transactions[id].push_back(std::pair<int, std::string>(amount, memo));
    fr->transactions[user_id].push_back(std::pair<int, std::string>(-1 * amount, memo));
}
