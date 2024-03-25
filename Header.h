#pragma once

template <typename T>
double Scalar (T* M1,T* M2, int n)
{
	double S = 0;
	for (int i = 0; i < n; i++)
	{
		S += M1[i] * M2[i];
	}
	return S;
}

template <typename T>
double Length  (T* M1, int n)
{
	return sqrt(Scalar(M1, M1, n));
}







template <typename T>
double Angle (T* M1, T* M2, int n)
{
	return acos((Scalar(M1, M2, n)) / (Length(M1, n) * Length(M2, n)));
}













//double Length(double* M1, int n);
//
//double Scalar(double* M1, double* M2, int n);
//
//double Angle(double* M1, double* M2, int n);


/*
#include<cmath>
#include "Lenghtandangle.h";
double Length(double* M1, int n)
{
	return sqrt(Scalar(M1, M1, n));
}



double Scalar(double* M1, double* M2, int n)
{
	double S = 0;
	for (int i = 0; i < n; i++)
	{
		S += M1[i] * M2[i];
	}
	return S;
}

double Angle(double* M1, double* M2, int n)
{

	return acos((Scalar(M1, M2, n)) / (Length(M1, n) * Length(M2, n)));;
}
*/