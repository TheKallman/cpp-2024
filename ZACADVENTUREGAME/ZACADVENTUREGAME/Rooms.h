#pragma once
#ifndef ROOMS_H
#define ROOMS_H
#include <string>

using namespace std;

class Rooms
{
private:
	string roomName; //name of room player is in

public:
	Rooms(string n)
	{
		roomName = n;
	}
};
#endif ROOMS_H
