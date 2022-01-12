#pragma once
#include "Transport.h"
#include <string>

using namespace std;

class SubTransport:public Transport					//Класс водный транспорт
{
private:
	float Mass_Vessel = 0;								//масса лодки
	string Name_Vessel;								//название лодки

public:
	SubTransport();

	SubTransport(int seet, float power, float Mspeed, float Mass_Vessel, string& Name_Vessel);

	float GetMassVessel()const;							//Получить массу лодкки

	void SetMassVessel(float Mass_Vessel);			//Задать массу лодки

	string GetNameVessel()const;							//Получить название лодки

	void SetNameVessel(const string &Name_Vessel);	//Задать название лодки

	string ToString()const;

	void SetInfo(float Mass_Vessel, string& Name_Vessel);

	void Set(int seet, float power, float Mspeed, float Mass_Vessel, string Name_Vessel);
	
};

