#pragma once
#include<iostream>
#include<vector>
#include<algorithm>

/**
 * QUESTION :
 *
 * Given a set of tasks, with deadlines and total profit earned on
 * completing a task, find maximum profit earned by executing the tasks
 * within the specified deadlines. Assume that a task takes one unit of
 * time to execute, and it can't execute beyond its deadline. Also, only
 * a single task will be executed at a time.
 */

struct Job{
    int task;
    int deadline;
    int profit;
};

class TaskSchedule{

public:
    bool compareDuration(Job &, Job & );
    void scheduleJobsMaximiseProfit(std::vector<Job>);
};

