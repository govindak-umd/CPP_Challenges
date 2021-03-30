#pragma once
#include<vector>

struct Job{
    int task;
    int deadline;
    int profit;
};

class TaskSchedule{

public:
    void scheduleJobsMaximiseProfit(std::vector<Job>);
};

