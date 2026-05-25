#include <iostream>
#include <cstring>

using namespace std;

void login(const char* input) {
    char username[16];

    strcpy(username, input);

    cout << "Logged in as: " << username << endl;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Usage: ./demo <username>" << endl;
        return 1;
    }

    login(argv[1]);
    return 0;
}