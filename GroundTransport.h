#pragma once
#include "Transport.h"
#include <string>

using namespace std;

class GroundTransport:public Transport				//����� �������� ���������
{
private:
	int Count_Wheels = 0;					//����������� �����
	string Type_Lang_transport;			//��� ��������� ����������

public:
	GroundTransport();
	GroundTransport(int seet, float power, float Mspeed, int Count_Wheels, string& Type_Land_transport);
	int GetCountWheels()const;							//�������� ����������� �����

	void SetCountWheels(int Count_Wheels);			//������ ����������� �����

	string GetTypeLangtransport()const;					//�������� ��� ��

	void SetTypeLangtransport(const string &Type_Lang_transport);	//������ ��� ��		

	string ToString()const;

	void SetInfo(int Cout_Wheels, string& Type_Land_transport);

	void Set(int seet, float power, float Mspeed, int Count_Wheels, string Type_Land_transport);
};

