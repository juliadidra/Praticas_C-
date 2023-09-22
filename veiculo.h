/*
 * veiculo.h
 *
 *  Created on: 18 de set. de 2023
 *      Author: Julia Didra
 */
#include <iostream>
using namespace std;

#ifndef VEICULO_H_
#define VEICULO_H_

class Veiculo {
	protected:
	string nome;


	public:

	Veiculo(const char * nome){
		this->nome = string(nome);
	}

	virtual void mover() = 0;
	virtual ~Veiculo(){
		cout<<"o objeto "<<this->nome<<" foi destruído"<<endl;
	}


};

class Terrestre: public virtual Veiculo{
	protected:
	Terrestre() : Veiculo("Veiculo Terrestre Padrão") {

	    }
	private:
	int cap_pass = 5;

	public:
	Terrestre(const char * nome):Veiculo( nome){

		cout << "o objeto terrestre foi construido" << endl;

	}

	void mover() override;
	void setCap_Pass(int cap_pass);
	int getCap_Pass();

	virtual ~Terrestre(){
		//cout<<"o objeto"<<this->nome<<"foi destruído"<<endl;
	}
};

class Aquatico: public virtual Veiculo{
	protected:
	Aquatico() : Veiculo("Veiculo Aquatico Padrão") {

	    }


	private:
	float carga_max = 10;

	public:
	Aquatico(const char * nome):Veiculo( nome){

		cout << "o objeto aquatico foi construido" << endl;

	}
	void mover() override;
	void setCarga_Max(float carga_max);
	float getCarga_Max();

	virtual ~Aquatico(){
			//cout<<"o objeto"<<this->nome<<"foi destruído"<<endl;
		}
};

class Aereo: public Veiculo{
	private:
	float vel_max = 100;

	public:
	Aereo(const char * nome):Veiculo( nome){

		cout << "o objeto aereo foi construido" << endl;

	}
	void mover() override;
	void setVel_Max(float vel_max);
	float getVel_Max();

	virtual ~Aereo(){
			//cout<<"o objeto"<<this->nome<<"foi destruído"<<endl;
		}


};

class Anfibio: public Terrestre, public Aquatico{
	public:
	Anfibio(const char* nome) : Veiculo(nome), Terrestre(), Aquatico() {
	        std::cout << "o objeto anfibio foi construído" << std::endl;
	    }

	void mover() override {
	        Terrestre::mover(); // Chama o método mover() de Terrestre
	        Aquatico::mover();  // Chama o método mover() de Aquatico
	    }

	};



#endif /* VEICULO_H_ */
