/*
 * veiculo.cpp
 *
 *  Created on: 18 de set. de 2023
 *      Author: Julia Didra
 */

#include <iostream>
using namespace std;
#include "veiculo.h"

#ifndef VEICULO_CPP_
#define VEICULO_CPP_


void Terrestre::setCap_Pass(int capacidade_pass){
	this->cap_pass = capacidade_pass;
}

int Terrestre::getCap_Pass(){
	return this->cap_pass;
}



void Aquatico::setCarga_Max(float carga_maxima){
	this->carga_max = carga_maxima;
}

float Aquatico::getCarga_Max(){
	return carga_max;
}


void Aereo::setVel_Max(float velocidade_max){
	this->vel_max = velocidade_max;
}

float Aereo::getVel_Max(){
	return vel_max;
}

void Veiculo::mover(){
	cout<< "o veiculo de nome " << this->nome << " se moveu" << endl;
}

void Terrestre::mover(){

	cout<<"o veiculo terrestre de nome " << this->nome << " se moveu"<< endl;
}

void Aquatico::mover(){
	cout<<"o veiculo aquatico de nome " << this->nome << " se moveu"<< endl;
}

void Aereo::mover(){
	cout<<"o veiculo aereo de nome " << this->nome << " se moveu"<< endl;
}



#endif

