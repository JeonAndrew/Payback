#include <vector>
#include <iostream>
#include <utility>

class User {
    public:
    User();
    std::string getName();
    int getUserId();
    void addFriend(User* f);
    void makeTransaction(int id, int amount, std::string memo);
    int findFriendIndex(int id);

    private:
    std::string name;
    int user_id;
    std::vector<User*> friends;
    std::vector<int> balances;
    std::vector<std::vector<std::pair<int, std::string>>> transactions;
};