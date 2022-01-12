#pragma once
#include "Transport.h"
#include <iostream>
#include <string>

using namespace std;

class AirTransport :public Transport						//����� ��������� ��������
{
private:
	int Count_Engine = 0;									//���-�� ����
	string model;										//������ ���� ��

public:
	AirTransport();
	AirTransport(int seet, float power, float Mspeed, int Count_Engine, string& model);

	int GetCountEngine()const;								//���-�� ����������

	void SetCountEngine(int Count_Engine);				//������ ���-�� ����

	string GetNameModel()const;									//�������� ������

	void SetNameModel(const string& model);					//������ ������

	void SetInfo(int Count_Engine, const string& model);

	string ToString()const;

	void Set(int seet, float power, float Mspeed, int Count_Engine, string model);

};