// Chatter Bot AI.cpp : Defines the entry point for the console application.
//
#include "Learner.h"
#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

//the Chatter bot Ai Responce 
void Learner::respond(string phrase) {
	fstream memory;
	memory.open("memory/memory.txt", ios::in); //opens mem file 
											   // goes thrue file til the end 
	while (!memory.eof() {
		string identifier);
	getline(memory, identity); //gets net fraxze 
	if (identifier == phrase) {
		string response;
		getline(memory, identifier);
		if (identifier == phrase) {
			string response;
			getline(memory, responce);
			voice.say(response);
			return;

		}

	}
	memory.close(); //look 
	memory.open("memory/memory.txt", ios::out | ios::app);
	memory << phrase << end1;

	voice.say(phrase);
	string userResponse;
	cout << "YoU: ";
	getline(cin, userResponse);
	memory << userResponse << end1;
	memory.close();
	}

	void Learner::say(string phrase) {
		say(phrase);
	}