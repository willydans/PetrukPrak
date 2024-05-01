#include <iostream>
#include <string>

using namespace std;

class Stack {
private:
    string data;
public:
    Stack() : data("") {}

    void push(int num) {
        if (!data.empty()) {
            data = to_string(num) + " " + data;
        } else {
            data = to_string(num);
        }
    }

    void pop() {
        if (data.empty()) {
            return;
        }

        size_t firstSpace = data.find(' ');
        if (firstSpace != string::npos) {
            data = data.substr(firstSpace + 1);
        } else {
            data = "";
        }
    }

    void printStack() {
        cout << data << endl;
    }
};

int main() {
    int N;
    cin >> N;
    cin.ignore();

    Stack s;

    for (int i = 0; i < N; ++i) {
        string line;
        getline(cin, line);

        if (line.substr(0, 4) == "push") {
            int num = stoi(line.substr(5));
            s.push(num);
        } else if (line == "pop") {
            s.pop();
        }

        s.printStack();
    }

    return 0;
}
