#pragma once


#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include<stdlib.h>
#include<direct.h>
#include<fstream>
#include"º¯Êý01.h"
#include<Windows.h>
#include<synchapi.h>

//char zc[18446744073709551615];

void zql() {
	string zqls;
	cout << ">>>";
	getline(cin, zqls);

	process:
	
	unsigned long long int* p = new unsigned long long int;//length
	*p = zqls.length();
	
	/*for (unsigned long long int i = 0; i <=*p; i++)
	{
		zc[i] = zqls[i];
	}*/

	/*for (unsigned long long int i = 0; i <= *p; i++)
	{
		
	}*/


	/*unsigned long long int i = 0;

	while (zqls[i] != ' ') {
		zc[i] = zqls[i];
	}*/
	switch (zqls[0])
	{
	case 'u':
		switch (zqls[2])
		{
		case 's':
			switch (zqls[3])
			{
			case'e':
				if (zqls[5] = ' ') {
					//º¯ÊýÔ¤Áô
					break;
				}
			
			default:
				break;
			}
		
		default:
			break;
		}
	
	default:
		break;
	}
	

}