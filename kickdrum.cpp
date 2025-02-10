#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Input number of tasks
    int N;
    cin >> N;

    // Input the task durations
    vector<int> tasks(N);
    for (int i = 0; i < N; ++i) {
        cin >> tasks[i];
    }

    // Sort the task durations in descending order
    sort(tasks.rbegin(), tasks.rend());

    // Calculate the total production time
    long long totalProductionTime = 0;
    for (int i = 0; i < N; ++i) {
        totalProductionTime += tasks[i];
        // Add maintenance time except for the last task
        if (i != N - 1) {
            totalProductionTime += 15;
        }
    }

    // Output the result
    cout << totalProductionTime << endl;

    return 0;
}
