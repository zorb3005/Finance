



#include <iostream> 
#include <string>
#include <fstream>


using namespace std;


class Database {
public:
    void addUser(string name, string email, string password) {
        ofstream file;
        file.open("database.txt", ios::app);
        file << name << ", " << email << ", " << password << endl;
        file.close();
    }


    void getUsers() {
        ifstream file;
        file.open("database.txt");
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }
};


int main() {
    system("cls");
    Database db;


    db.addUser("lexa", "bobroff.com", "password1");
    db.addUser("daniil", "bugrov.com", "password2");


    db.getUsers();

    
    return 0;
    
}