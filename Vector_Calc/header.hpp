#pragma once
#include <iostream>


class Point
{
public:
	Point(double x, double y, double z); // �����������
		
	~Point(); //����������

	// ������
	double GetX();
	double GetY();
	double GetZ();

	// ������
	void SetX(double newX);
	void SetY(double newY);
	void SetZ(double newZ);

private:
	double x;
	double y;
	double z;
};

class Vector
{
public:
	Vector(Point p1, Point p2); //����������� �� ���� ������
	Vector(double x, double y, double z); // ����������� �� �����������
	Vector(); // ����������� ������� ������� (��������)

	~Vector(); //����������

	//������
	double GetV_X();
	double GetV_Y();
	double GetV_Z();

private:
	double v_x;
	double v_y;
	double v_z;
};

double Length_Vector(Vector v1); //����� �������
Vector Add_Vector(Vector v1, Vector v2); //�������� ��������
Vector Diff_Vector(Vector v1, Vector v2); // �������� ��������
Vector Reverse_Vector(Vector v1); // �������� ������
Vector Unit_Vector(Vector v1); // ��������� ������
Vector Double_Prod_Vector(Vector v1, double a); // ��������� ������� �� �����
Vector Prod_Vector(Vector v1, Vector v2); // ������������ ��������
double Mixed_Prod_Vector(Vector v1, Vector v2, Vector v3); // ��������� ������������ ��������
bool Is_Collinearity_Vector(Vector v1, Vector v2); // ����������� �� �������
bool Is_Complanarity_Vector(Vector v1, Vector v2, Vector v3); // ����������� �� �������
double Distance_Between_Vector(Vector v1, Vector v2); // ���������� ����� ����� ���������
double Angle_Between_Vector(Vector v1, Vector v2); // ���� ����� ����� ���������

int Privet(); // ����������� � ����� ����
void Create_Vector(Vector &v1); // �������� ������� � �������
void Operation(Vector v1, Vector v2, Vector v3, int i); // �������� � ��������� � ����������� �� ���������� ��������
void Out_vector(Vector v_final); // ����� �������
void Out_Double(double double_x); // ����� �����
void Out_Bool(bool bool_x); // ����� ��/���