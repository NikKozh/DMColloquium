//
//  NaturalNumber.cpp
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#include "NaturalNumber.h"

// Задача N-3, группа: Кожевников Никита, Ташланов Андрей
NaturalNumber NaturalNumber::ADD_1N_N(){
	for (unsigned int i = 0; i < digitBlocks.size(); i++)
	{
		if (digitBlocks[i] != 999999999)
		{
			digitBlocks[i] += 1;
			break;
		}
		else
			digitBlocks[i] = 0;
	
		if ((i+1) == digitBlocks.size())
		{
			digitBlocks.push_back(1);
			break;
		}
	}

    return *this;
}
