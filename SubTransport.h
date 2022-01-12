#pragma once
#include "Transport.h"
#include <string>

using namespace std;

class SubTransport:public Transport					//����� ������ ���������
{
private:
	float Mass_Vessel = 0;								//����� �����
	string Name_Vessel;								//�������� �����

public:
	SubTransport();

	SubTransport(int seet, float power, float Mspeed, float Mass_Vessel, string& Name_Vessel);

	float GetMassVessel()const;							//�������� ����� ������

	void SetMassVessel(float Mass_Vessel);			//������ ����� �����

	string GetNameVessel()const;							//�������� �������� �����

	void SetNameVessel(const string &Name_Vessel);	//������ �������� �����

	string ToString()const;

	void SetInfo(float Mass_Vessel, string& Name_Vessel);

	void Set(int seet, float power, float Mspeed, float Mass_Vessel, string Name_Vessel);
	
};

