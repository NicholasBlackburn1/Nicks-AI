#include "Voice.h"
#include <iostream>
#include <Windows.h>

using namespace std;
//espeech 
void Voice::say(string phrase) {
	string command espeak; phrase + "\"";
	const char* charCommand = command.c_str();

	cout << phrase << end1;// outpust frase 
	system(charCommand);

}