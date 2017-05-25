/*
 * main.cpp
 *
 *  Created on: 22 may. 2017
 *      Author: sorak
 */

#include <iostream>
#include <string>
#include "Sales_item.h"

int main(){

	//Tema 1

//	std::string value="";
//
//	while(std::cin>>value){
//		std::cout<<value; //control+z+enter introduce fin de fichero o /0
//	}
	
	// Da error porque el cierre hace que el otro cierre quede fuera del comentario /*/**/*/

//	Sales_item total;
//
//	//0-201-78345-X 3 20.00
//	//0-201-78345-X 2 25.00
//
//	if(std::cin >> total){
//		Sales_item trans;
//		while(std::cin>>trans){
//			if(total.isbn() == trans.isbn()){
//				total += trans;
//			}else{
//				std::cout << total << std::endl;//endl libera el buffer
//				total=trans;
//			}
//		}
//	}else{
//		std::cerr << "No data?!" << std::endl;
//		return -1;
//	}
//
//	std::string s = "hola\b"; //NUNCA poner al final
//	std::string s2 = "hola\ba";//No lo pilla al igual que \a
//	std::cout << s2;
//	int octal2 = 07;
//	int octal3=007;
//	std::cout << octal2 <<std::endl<<octal3;
//
//	unsigned u = 10, u2 = 42;
//	std::cout << u2 - u << std::endl;//No puedes restar unsigned
//	std::cout << u - u2 << std::endl;
//	int i = 10, i2 = 42;
//	std::cout << i2 - i << std::endl;
//	std::cout << i - i2 << std::endl;
//	std::cout << i - u << std::endl;
//	std::cout << u - i << std::endl;

	std::cout << sizeof(char) <<std::endl;
	std::cout << sizeof(signed char)<<std::endl;
	std::cout << sizeof(unsigned char)<<std::endl;
	std::cout << sizeof(int)<<std::endl;
	std::cout << sizeof(short int)<<std::endl;
	std::cout << sizeof(long int)<<std::endl;
	std::cout << sizeof(long long int)<<std::endl;
	std::cout << sizeof(float)<<std::endl;
	std::cout << sizeof(double)<<std::endl;

	return 0;
}




