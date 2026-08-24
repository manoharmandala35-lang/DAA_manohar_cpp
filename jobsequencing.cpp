#include <iostream>
#include <algorithm>
using namespace std;

struct Job {
    char id;
    int deadline;
    int profit;
};

int main() {

    Job jobs[] = {
        {'A', 2, 100},
        {'B', 1, 190},
        {'C', 2, 27},
        {'D', 1, 215},
        {'E', 3, 15}
    };

    int n = 5;


    sort(jobs, jobs + n, [](Job a, Job b) {
        return a.profit > b.profit;
    });

   
    char slot[4] = {'-', '-', '-', '-'};

    int profit = 0;

   
    for (int i = 0; i < n; i++) {

      
        for (int j = jobs[i].deadline; j >= 1; j--) {

            if (slot[j] == '-') {
                slot[j] = jobs[i].id;
                profit += jobs[i].profit;
                break;
            }
        }
    }

   
    cout << "Job sequence: ";

    for (int i = 1; i <= 3; i++) {
        cout << slot[i] << " ";
    }

    cout << "\nMaximum Profit = " << profit;

    return 0;
}
