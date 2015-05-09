//
//  Polynomial.cpp
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#include "Polynomial.h"

// Задача P-2, группа: Кожевников Никита, Ташланов Андрей
Polynomial Polynomial::SUB_PP_P(Polynomial SecondPoly)
{
	unsigned int i;

	if (coefficients.size() >= SecondPoly.coefficients.size()) // Если первый многочлен больше второго или равен ему
	{
		for (i = 0; i < SecondPoly.coefficients.size(); i++)
			coefficients[i] = coefficients[i].SUB_QQ_Q(SecondPoly.coefficients[i]);
	}
	else
	{
		for (i = 0; i < coefficients.size(); i++)
			coefficients[i] = coefficients[i].SUB_QQ_Q(SecondPoly.coefficients[i]);
		for (RationalNumber null; i < SecondPoly.coefficients.size(); i++) // Создаётся объект null рационального типа (дробь 0/1). Из него вычитаются коэффициенты второго многочлена в том случае, если первый многочлен оказался меньше и его дальнейшие коэффициенты, из которых нужно вычитать, отсутствуют.
			coefficients[i] = null.SUB_QQ_Q(SecondPoly.coefficients[i]);
	}

	return *this;
}
