#pragma once
#include <string>
//общий класс транспорт

class Transport							//Класс транспорт, общий для всех
{
private:
	int seet = 0;
	float	Mspeed = 0, power = 0;				//колличество мест, макс мощь, макс скорость

public:
	Transport();

	Transport(int seet1, float power1, float Mspeed1);

	int GetNumSeats()const;					//Получить колл-во мест

	void SetNumSeats(int seet);			//Задать кол-во мест

	float GetEngPower()const;					//Получить макс мощь

	void SetEngPower(float power);		//Задать макс мощь

	float GetMaxSpeed()const;				//Получить макс. скорость

	void SetMaxSpeed(float Mspeed);		//Задать макс скорость

	virtual std::string ToString()const;

};

