/*
 * pratica02.cpp
 *
 *  Created on: 18 de set. de 2023
 *      Author: Julia Didra
 */

#include <iostream>
using namespace std;

#include "veiculo.h"

int main(){
	/*Veiculo v1 ("v1");
	Terrestre t1 ("t1");
	Aquatico q1 ("q1");
	Aereo a1 ("a1");
	Terrestre t1;
	Aereo a1;
	Aquatico q1;*/

	//Veiculo * terr, * aqua, * aereo;
	//terr = new Terrestre("VT1");
	Veiculo * terr = new Terrestre("VT1");
	dynamic_cast <Terrestre*>(terr)->setCap_Pass(45);
	  //((Terrestre *)terr)->setCap_Pass(45);

	Veiculo * aqua = new Aquatico("VQ1");
	dynamic_cast <Aquatico*>(aqua)->setCarga_Max(12.5);
	//((Aquatico *)aqua)->setCarga_Max(12.5);

	 Veiculo * aereo = new Aereo("VA1");
	 ((Aereo *)aereo)->setVel_Max(1040.5);

	 Anfibio * anf = new Anfibio("AF1");

	 cout << "Terrestre: Capacidade de Passageiros: " << dynamic_cast <Terrestre*>(terr)->getCap_Pass() << endl;
	 cout << "Aquatico: Carga máxima: " << dynamic_cast <Aquatico*>(aqua)->getCarga_Max() << endl;
	 cout << "Aereo: Velocidade máxima: " << ((Aereo*)aereo)->getVel_Max() << endl;

	 terr->mover();
	 aqua->mover();
	 aereo->mover();
	 anf->mover();


	 delete terr;
	 delete aqua;
	 delete aereo;
	 delete anf;
	return 0;

}



