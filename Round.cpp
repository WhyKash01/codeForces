#include <iostream>

using namespace std;

int main() {
    int ts, pid[10], need[10], wt[10], tat[10], n, n1;
    int bt[10], flag[10], ttat = 0, twt = 0;
    float awt, atat;

    cout << "\t\t ROUND ROBIN SCHEDULING \n";
    cout << "Enter the number of Processors: ";
    cin >> n;
    n1 = n;

    cout << "\nEnter the Timeslice: ";
    cin >> ts;

    for (int i = 1; i <= n; i++) {
        cout << "\nEnter the process ID for process " << i << ": ";
        cin >> pid[i];
        cout << "Enter the Burst Time for the process: ";
        cin >> bt[i];
        need[i] = bt[i];
    }

    for (int i = 1; i <= n; i++) {
        flag[i] = 1;
        wt[i] = 0;
    }

    while (n != 0) {
        for (int i = 1; i <= n; i++) {
            if (need[i] >= ts) {
                for (int j = 1; j <= n; j++) {
                    if ((i != j) && (flag[i] == 1) && (need[j] != 0))
                        wt[j] += ts;
                }

                need[i] -= ts;

                if (need[i] == 0) {
                    flag[i] = 0;
                    n--;
                }
            } else {
                for (int j = 1; j <= n; j++) {
                    if ((i != j) && (flag[i] == 1) && (need[j] != 0))
                        wt[j] += need[i];
                }

                need[i] = 0;
                n--;
                flag[i] = 0;
            }
        }
    }

    for (int i = 1; i <= n1; i++) {
        tat[i] = wt[i] + bt[i];
        twt += wt[i];
        ttat += tat[i];
    }

    awt = (float)twt / n1;
    atat = (float)ttat / n1;

    cout << "\n\n ROUND ROBIN SCHEDULING ALGORITHM \n\n";
    cout << "\n\n Process \t Process ID \t Burst Time \t Waiting Time \t Turnaround Time \n";

    for (int i = 1; i <= n1; i++) {
        cout << "\n " << i << "\t\t " << pid[i] << "\t\t " << bt[i] << "\t\t " << wt[i] << "\t\t " << tat[i] << "\n";
    }

    cout << "\n The average Waiting Time= " << awt;
    cout << "\n The average Turn around Time= " << atat;

    return 0;
}