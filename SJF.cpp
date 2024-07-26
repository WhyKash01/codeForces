#include <bits/stdc++.h>
using namespace std;
struct Process
{
int id;
int arrivalTime;
int burstTime;
};
bool compareByArrivalTime(const Process &a, const Process &b)
{
return a.arrivalTime < b.arrivalTime;
}
void SJF(vector<Process> &processes)

{
int n = processes.size();
sort(processes.begin(), processes.end(), compareByArrivalTime);
int presentTime = 0;
vector<int> completionTime(n, 0);
vector<pair<int, int>> idle;
for (int i = 0; i < n; ++i)
{
if (processes[i].arrivalTime <= presentTime)
{
completionTime[i] = presentTime + processes[i].burstTime;
presentTime += processes[i].burstTime;
}
else
{
idle.push_back({presentTime, processes[i].arrivalTime});
presentTime = processes[i].arrivalTime;
completionTime[i] = presentTime + processes[i].burstTime;
presentTime += processes[i].burstTime;
}
}
int turnAroundTime = 0, waitingTime = 0;
for (int i = 0; i < n; i++)
{
turnAroundTime += (completionTime[i] - processes[i].arrivalTime);
waitingTime += (completionTime[i] - processes[i].arrivalTime) - processes[i].burstTime;
}
cout << "Process\tA.T\tB.T\tC.T\tT.A.T\tW.T" << endl;
for (int i = 0; i < n; ++i)
{
cout << processes[i].id << "\t" << processes[i].arrivalTime << "\t" << processes[i].burstTime << "\t"
<< completionTime[i] << "\t" << completionTime[i] - processes[i].arrivalTime << "\t" << (completionTime[i]
- processes[i].arrivalTime) - processes[i].burstTime << "\n";
}
cout << endl
<< "Average turn-around-time : " << double(double(turnAroundTime) / double(n)) << endl;
cout << "Average waiting time : " << double(double(waitingTime) / double(n)) << endl
<< endl;
for (int i = 0; i < idle.size(); i++)
{
cout << "CPU idle from " << idle[i].first << " to " << idle[i].second << endl;
}
}
int main()
{
vector<Process> processes;
int n;
cout << "Enter the number of processes: ";
cin >> n;
cout << "Enter process ID, arrival time, and burst time for each process:" << endl;
for (int i = 0; i < n; i++)
{
int temp1, temp2, s;
cout << "Process " << i + 1 << ":" << endl;
cout << "Process ID: ";
cin >> s;

cout << "Arrival time: ";
cin >> temp1;
cout << "Burst time: ";
cin >> temp2;
processes.push_back({s, temp1, temp2});
}
FCFS(processes);
return 0;
}