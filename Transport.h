#pragma once
#include <string>
//����� ����� ���������

class Transport							//����� ���������, ����� ��� ����
{
private:
	int seet = 0;
	float	Mspeed = 0, power = 0;				//����������� ����, ���� ����, ���� ��������

public:
	Transport();

	Transport(int seet1, float power1, float Mspeed1);

	int GetNumSeats()const;					//�������� ����-�� ����

	void SetNumSeats(int seet);			//������ ���-�� ����

	float GetEngPower()const;					//�������� ���� ����

	void SetEngPower(float power);		//������ ���� ����

	float GetMaxSpeed()const;				//�������� ����. ��������

	void SetMaxSpeed(float Mspeed);		//������ ���� ��������

	virtual std::string ToString()const;

};

