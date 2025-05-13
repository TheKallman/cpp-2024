#pragma once
#ifndef LIVINGROOM_H
#define LIVINGROOM_H
#include <string>

class LivingRoom
{
private:
	string anim1Ans = "lion";
	string anim2Ans = "cat";
	string anim3Ans = "turtle";
	string anim4Ans = "chicken";
public:
	void onEnter();
};
#endif
