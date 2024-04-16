#include <iostream>
#include <stdlib.h> 
#include <limits>
#include "algos\sjf_scheduling.cpp"
#include "algos\srtf_scheduling.cpp"
#include "algos\fcfs_scheduling.cpp"
#include "algos\roundrobin_scheduling.cpp"
#include "algos\nonpreemptive_priority.cpp"


using namespace std;

int main() {
  int choice;

  do {
    system("cls");  
    cout << "\n\t\t\tScheduling Algorithm Menu\n\n";
    cout << "\t\t1. FCFS (First Come First Served)\n";
    cout << "\t\t2. SJF (Shortest Job First)\n";
    cout << "\t\t3. SRT (Shortest Remaining Time)\n";
    cout << "\t\t4. RR (Round Robin)\n";
    cout << "\t\t5. Priority (Non-preemptive)\n";
    cout << "\t\t6. Exit\n\n";
    cout << "\tEnter your choice: ";

    // Get user input and handle invalid input
    if (!(cin >> choice)) {
      cout << "Invalid input. Please enter a number." << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    switch (choice) {
      case 1:
        system("cls");
        fcfs();
        break;
      case 2:
        system("cls");
        sjf();
        break;
      case 3:
        system("cls");
        srtf();
        break;
      case 4:
        system("cls");
        rr();
        break;
      case 5:
        system("cls");
        prior();
        break;
      case 6:
          cout << "\tExiting";
          for(int i=0; i<3 ; i++)
          {
              cout<<".";
              _sleep(500);
          }
          break;
      default:
          cout << "\tInvalid choice!\n";
    }
  } while (choice != 6);

  return 0;
}
