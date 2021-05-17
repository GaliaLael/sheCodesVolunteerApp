#ifndef VOLUNTEER_H
#define VOLUNTEER_H
#include <string>
using namespace std;

class Volunteer {
public:
	Volunteer();
	Volunteer(string name);
	~Volunteer();

	void LinkWithDirectSupervisor(string role, string branch);

private:
	string name;
	string role;
	string branch;
};

#endif
