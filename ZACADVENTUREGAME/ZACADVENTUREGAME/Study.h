#pragma once
#ifndef STUDY_H
#define STUDY_H
#include <string>
using namespace std;

class Study
{
private:
	string computerAnswer = "espresso";
	string safeAnswer = "28 61 03";
public:
	void onEnter();
};
#endif