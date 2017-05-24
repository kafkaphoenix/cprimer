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

	Sales_item total;

	//0-201-78345-X 3 20.00
	//0-201-78345-X 2 25.00

	if(std::cin >> total){
		Sales_item trans;
		while(std::cin>>trans){
			if(total.isbn() == trans.isbn()){
				total += trans;
			}else{
				std::cout << total << std::endl;//endl libera el buffer
				total=trans;
			}
		}
	}else{
		std::cerr << "No data?!" << std::endl;
		return -1;
	}

	return 0;
}




