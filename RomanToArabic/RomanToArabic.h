#pragma once
#include <iostream>
#include <string>
using namespace std;

class Converter{
private:
	string roman_numberal;
public:
	Converter(string rn);
	int RomanToArabic();
};

Converter::Converter(string rn){
	this->roman_numberal = rn;
}

int Converter::RomanToArabic(){
	int value[100];
	int n, i, number = 0;
	char* r_num = const_cast<char*>(roman_numberal.c_str());
	n = strlen(r_num);
	for (i = 0; i < n; i++) {
		if (r_num[i] == 'I' || r_num[i] == 'i') value[i] = 1;
		if (r_num[i] == 'V' || r_num[i] == 'v') value[i] = 5;
		if (r_num[i] == 'X' || r_num[i] == 'x') value[i] = 10;
		if (r_num[i] == 'L' || r_num[i] == 'l') value[i] = 50;
		if (r_num[i] == 'C' || r_num[i] == 'c') value[i] = 100;
		if (r_num[i] == 'D' || r_num[i] == 'd') value[i] = 500;
		if (r_num[i] == 'M' || r_num[i] == 'm') value[i] = 1000;
	}
	for (i = 0; i < n; i++) {
		if (i == n - 1) number += value[i];
		else if (value[i] >= value[i + 1]) number += value[i];
		else number -= value[i];
	}
	return number;
}
