#pragma once
#include "Transport.h"
#include <string>

using namespace std;

class GroundTransport:public Transport				// ласс наземный транспорт
{
private:
	int Count_Wheels = 0;					// олличество колес
	string Type_Lang_transport;			//“ип наземного транспорта

public:
	GroundTransport();
	GroundTransport(int seet, float power, float Mspeed, int Count_Wheels, string& Type_Land_transport);
	int GetCountWheels()const;							//получить  олличество колес

	void SetCountWheels(int Count_Wheels);			//задать колличество колес

	string GetTypeLangtransport()const;					//получить тип тс

	void SetTypeLangtransport(const string &Type_Lang_transport);	//задать тип тс		

	string ToString()const;

	void SetInfo(int Cout_Wheels, string& Type_Land_transport);

	void Set(int seet, float power, float Mspeed, int Count_Wheels, string Type_Land_transport);
};

