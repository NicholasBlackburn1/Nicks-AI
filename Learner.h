#pragma once
#ifndef _Learner_H
#define _Learner_H


#include <iostream>
#include <fstream>
#include <voice.h>
using namespace std; 

class Learner {
public:
	void respond(string phrase); // used to ge or teach an responce 
	void say(string phrase); // Used to textually and audionily communacate 
	Voice voice;
};
#endif 
