#include <iostream>
#include "tv.h"

bool Tv::volume_up() {
	if (volume < MAX_VOLUME) {
		volume++;
		return true;
	}
	else return false;
}

bool Tv::volume_down() {
	if (volume > MIN_VOLUME) {
		volume--;
		return true;
	}
	else return false;
}

void Tv::channel_up() {
	if (channel < max_channel) channel++;
	else channel = 1;
}

void Tv::channel_down() {
	if (channel > 1) channel--;
	else channel = max_channel;
}

void Tv::settings() const {
	using std::cout;
	using std::endl;

	cout << "TV = " << (on ? "ON" : "OFF") << endl; 
	//3항연산자 ( 조건 ?  1 : 2 ) 조건이 true일때 1, 조건이 false 일때 2
	if (on) {
		cout << "볼륨 = " << volume << endl;
		cout << "채널 = " << channel << endl;
		cout << "모드 = " << (mode == ANTENNA ? "지상파방송" : "케이블 방송") << endl;
		cout << "입력 = " << (input == TV ? "TV" : "DVD") << endl;
	}
}



