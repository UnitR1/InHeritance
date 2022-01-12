#pragma once
#include "Transport.h"
#include <iostream>
#include <string>

using namespace std;

class AirTransport :public Transport						//класс Воздушный траспорт
{
private:
	int Count_Engine = 0;									//Кол-во двиг
	string model;										//Модель возд тс

public:
	AirTransport();
	AirTransport(int seet, float power, float Mspeed, int Count_Engine, string& model);

	int GetCountEngine()const;								//Кол-во двигателей

	void SetCountEngine(int Count_Engine);				//Задать кол-во двиг

	string GetNameModel()const;									//получить модель

	void SetNameModel(const string& model);					//задать модель

	void SetInfo(int Count_Engine, const string& model);

	string ToString()const;

	void Set(int seet, float power, float Mspeed, int Count_Engine, string model);

};