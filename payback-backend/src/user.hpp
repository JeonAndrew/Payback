#include <vector>
#include <iostream>
#include <utility>
#include <map>

class User {
    public:
    User();
    std::string getName();
    int getUserId();
    void addFriend(User* f);
    void makeTransaction(int id, int amount, std::string memo);

    private:
    std::string name;
    int user_id;
    std::map<int, User*> friends;
    std::map<int, int> balances;
    std::map<int, std::vector<std::pair<int, std::string>>> transactions;
};