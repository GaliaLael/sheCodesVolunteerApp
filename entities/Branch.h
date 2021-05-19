#ifndef BRANCH_H
#define BRANCH_H
#include <string>
using namespace std;

enum week {
	SUNDAY = 1,
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY
};

class Branch {
public:
	Branch(string address, int start_time, int day);
	~Branch();

	string getAddress();
	int getStartTime();
	int getDay();

private:
	string address;
	int start_time;
	week day;
	//string description;
	//pointer to volunteers
	//pointer to courses
	//missing roles in branch
};

#endif

