//LEETCODE MEETING ROOM
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Interval {
    int start;
    int end;
};

// Function to compare two intervals based on their start times
bool compareIntervals(const Interval& a, const Interval& b) {
    return a.start < b.start;
}

// Function to determine if a person can attend all meetings without overlap
bool canAttendMeetings(vector<Interval>& intervals) {
    // Sort the intervals based on their start times
    sort(intervals.begin(), intervals.end(), compareIntervals);
    
    // Check for any overlapping intervals
    for (int i = 1; i < intervals.size(); ++i) {
        if (intervals[i].start < intervals[i - 1].end) {
            return false; // Overlapping meetings
        }
    }
    return true; // No overlap
}

int main() {
    // Example meetings
    vector<Interval> meetings = {{0, 30}, {5, 10}, {15, 20}};
    
    // Check if all meetings can be attended without overlap
    bool result = canAttendMeetings(meetings);
    
    // Output the result
    cout << (result ? "Can attend all meetings" : "Cannot attend all meetings") << endl;
    
    return 0;
}
