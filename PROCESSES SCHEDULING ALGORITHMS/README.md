
# SCHEDULING ALGORITHMS

Scheduling algorithms are the workhorses behind the scenes in computer systems, especially operating systems. They determine which processes get to use the CPU and for how long. Each algorithm has its own strengths and weaknesses, making it suitable for different situations. Here's a breakdown of the common ones you mentioned:

### 1. First Come First Served (FCFS):

Simplest algorithm to implement.
Processes are served in the order they arrive.
Fair for long-running processes, but short ones might wait a long time.
Not very efficient for unpredictable process arrival times.
### 2. Shortest Job First (SJF):

Prioritizes processes with the shortest execution time.
Minimizes average waiting time.
Requires knowing the execution time of processes upfront (often not possible).
### 3. Shortest Remaining Time (SRT):

Preemptive version of SJF.
Schedules the process with the shortest remaining time.
Leads to even shorter waiting times than SJF.
Requires frequent context switching between processes, which can be overhead.
### 4. Round Robin (RR):

Processes are allocated a fixed time slice (quantum).
A running process is preempted after its time slice is over and added back to the queue.
Ensures fairness and responsiveness for interactive systems.
Good for processes with unpredictable execution times.
Might lead to starvation for long-running processes if the time quantum is too small.
### 5. Priority Scheduling:

Processes are assigned priorities.
Higher priority processes get served first.
Useful for real-time systems where some processes are critical.
Can lead to starvation for lower priority processes if high priority ones are abundant.
Choosing the right scheduling algorithm depends on your specific needs. FCFS is easy to implement but might not be efficient. SJF and SRT are good for minimizing waiting times but have limitations. Round Robin offers a balance between fairness and responsiveness. Priority scheduling is crucial for real-time systems.




## How to run

```bash
Run like any cpp file.

start with menu.cpp
```
    