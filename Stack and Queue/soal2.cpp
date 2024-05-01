#include <iostream>
#include <string>

using namespace std;

const int MAX_SIZE = 1005;

class Queue {
private:
    int arr[MAX_SIZE];
    int frontIdx, rearIdx;
public:
    Queue() : frontIdx(-1), rearIdx(-1) {}

    void push(int num) {
        if (rearIdx == MAX_SIZE - 1) {
            cout << "Queue is full." << endl;
            return;
        }
        if (frontIdx == -1) {
            frontIdx = 0;
        }
        arr[++rearIdx] = num;
    }

    void pop() {
        if (frontIdx == -1 || frontIdx > rearIdx) {
            return;
        }
        ++frontIdx;
    }

    void printQueue() {
        if (frontIdx == -1 || frontIdx > rearIdx) {
            cout << endl;
            return;
        }
        for (int i = frontIdx; i <= rearIdx; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int N;
    cin >> N;
    cin.ignore(); 

    Queue q;

    for (int i = 0; i < N; ++i) {
        string line;
        getline(cin, line);

        if (line.substr(0, 4) == "push") {
            int num = stoi(line.substr(5));
            q.push(num);
        } else if (line == "pop") {
            q.pop();
        }

        q.printQueue();
    }

    return 0;
}
