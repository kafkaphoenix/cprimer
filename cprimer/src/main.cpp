/*
 * main.cpp
 *
 *  Created on: 22 may. 2017
 *      Author: sorak
 */

#include <iostream>
#include <string>
#include "Sales_item.h"
#include "constantes.h"
#include "assert.h"

int main(){

	//Tema 1

//	std::string value="";
//
//	while(std::cin>>value){
//		std::cout<<value; //control+z+enter introduce fin de fichero o /0
//	}
//
//	// Da error porque el cierre hace que el otro cierre quede fuera del comentario /*/**/*/
//
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
//
//	std::cout << sizeof(char) <<std::endl;
//	std::cout << sizeof(signed char)<<std::endl;
//	std::cout << sizeof(unsigned char)<<std::endl;
//	std::cout << sizeof(int)<<std::endl;
//	std::cout << sizeof(short int)<<std::endl;
//	std::cout << sizeof(long int)<<std::endl;
//	std::cout << sizeof(long long int)<<std::endl;
//	std::cout << sizeof(float)<<std::endl;
//	std::cout << sizeof(double)<<std::endl;
//
//
//	int i = 0, &r1 = i;
//	double d = 0, &r2 = d;
//	r2 = 3.14159;
//	r2 = r1;
//	r1=r2;
//	i = r2;
//	r1 = d;
//
//	int i, &ri = i;
//	i = 5;
//	std::cout << i << " " << ri << std::endl;
//	ri = 10;
//	std::cout << i << " " << ri << std::endl;
//
//	int x=0, x1=2, *p;
//	p = & x;
//	std::cout << *p << std::endl;
//	*p= 5;
//	std::cout << *p << std::endl;
//	p = &x1;
//	std::cout << *p << std::endl;
//
//	int i = 42;
//	double d = 30.0;
//	int *p1 = &i;
//	*p1 = *p1 * *p1;
//	std::cout << *p1 << std::endl;
//
//	int *p=nullptr;
//	if(p==nullptr){
//		std::cout << "No apunta a un objeto válido";
//	}
//
//	//void *p2 = &i;
//	//std::cout << *p2 << std::endl;
//	//p2 = &d;
//	//	We cannot use a void* to operate on the
//	//	object it addresses—we don’t know that object’s type, and the type determines what
//	//	operations we can perform on the object.
//	//std::cout << *p2 << std::endl;
//	int ival = 1024;
//	int *pi =  &ival;
//	int **ppi = &pi;
//	std::cout << **ppi << std::endl;
//	//A reference is not an object, hence we may not have a pointer to a reference
//	//const int i = get_size();//Initialized at run time
//
//	extern const int bufSize;
//	std::cout << "Tamaño del buffer extern: " << bufSize <<std::endl;
//	//To share a const object among multiple files, you must define the variable
//	//as extern
//
//	int i = 20;
//	const int nop = i;
//	std::cout << nop << std::endl;
//	i = 10;//No cambia la constante
//	std::cout << nop << std::endl;
//	//Exceptions
//	//In particular, we can bind a reference to
//	//const to a nonconst object, a literal, or a more general expression
//	const int &r1 = i;//we can bind a cont int& to a plain int object
//	i=12;
//	std::cout << r1 << std::endl;
//	const int &r2 = 42;//reference to const
//	const int &r3 = r1 * 2;//reference to const
//	double dval = 3.14;
//	const int &ri = dval;
//	//const int temp = dval; // create a temporary const int from the double
//	//const int &ri = temp; // bind ri to that temporary
//	//Exceptions
//	const double *cptr = &dval;
//	//there is no guarantee that an object pointed
//	//to by a pointer to const won’t change.
//	dval=4.0;
//	std::cout << *cptr << std::endl;
//
//	int x = 5;
//	bool b = (x == 5) ? true : false;
//	std::cout << b << std::endl;
//	assert(x==6);
//	//Top level const indicates that an object itself is constant
//	const int CTE = 10;
//	const int *const p3 = &CTE;//We cant change p3
//	//Low-level const appears in the base type of compound types
//	//such as pointers or references.
//	const int * p4 = &CTE;//We can change p4
//	//When we copy an object, top-level consts are ignored
//	//Copying an object doesn’t change the copied object. As a result, it is immaterial
//	//whether the object copied from or copied into is const.
//	// low-level const is never ignored
//
	const int v2 = 0;
	int v1 = v2;
	int *p1 = &v1;
	int &r1 = v1;
	const int *p2 = &v2;//low level
	const int *const p3 = &v2;//top level
	const int &r2 = v2;//low level

	return 0;
}




