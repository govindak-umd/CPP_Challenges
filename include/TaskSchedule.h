#pragma once
#include<iostream>
#include<vector>
#include<algorithm>

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

