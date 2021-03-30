#include"../include/TaskSchedule.h"


bool TaskSchedule::compareDuration(Job &job_a, Job &job_b){
    if (job_a.deadline > job_b.deadline){
        return 1;
    }
    return -1;
}

void TaskSchedule::scheduleJobsMaximiseProfit(std::vector<Job> my_jobs) {

    // Sorting the tasks based on their profits alone, since
    // this is the most important thing to us to maximise
    // profits
    std::sort(my_jobs.begin(), my_jobs.end(),[](Job &a, Job &b) {
        return a.profit > b.profit;    // using C++11 lambda comparison
    });

    std::vector <int> days_occupied;

    // Variable to record the total profit

    int  total_profit;

    // Variable to add a day as a task is done and completed

    int curr_day=1;

    // To check if the task was skipped

    bool task_executed;
    for (Job curr_job_executed: my_jobs){

        // resetting task execution to false, to check if the task was skipped

        task_executed = false;

        // If the day is free and task can be done on that day

        if (!(std::find(days_occupied.begin(), days_occupied.end(), curr_job_executed.deadline)!=days_occupied.end())){
            std::cout << "Currently executing " << curr_job_executed.task << " whose deadline was " << curr_job_executed.deadline << std::endl;
            // Once the task is done, that day is blocked out
            days_occupied.push_back(curr_job_executed.deadline);
            // Profit is added
            total_profit+=curr_job_executed.profit;
            // Another day of task is added to the Current day
            curr_day+=1;
            //Task has been executed
            task_executed = true;
        }

        // If the current day is occupied, but an earlier task date was available

        else if (std::find(days_occupied.begin(), days_occupied.end(), curr_job_executed.deadline)!=days_occupied.end()){
            for(int i = curr_job_executed.deadline-1; i>0; i--){
                if (!(std::find(days_occupied.begin(), days_occupied.end(), i)!=days_occupied.end())){
                    std::cout << "Currently executing " << curr_job_executed.task << " on day " << i << std::endl;
                    // Once the task is done, that day is blocked out
                    days_occupied.push_back(i);
                    // Profit is added
                    total_profit+=curr_job_executed.profit;
                    // Another day of task is added to the Current day
                    curr_day+=1;
                    //Task has been executed
                    task_executed = true;
                    break;
                }
            }
        }

        // To show that the task was skipped

        if(!task_executed){
            std::cout << "Task "<< curr_job_executed.task << " skipped, because its deadline was " << curr_job_executed.deadline <<std::endl;
        }
    }

    std::cout << "Total Profit : " << total_profit << std::endl;
}
