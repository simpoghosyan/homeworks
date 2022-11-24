#include <iostream>
#include "engine.h"
void Engine::Run(){
	std::cout<<voice<<std::endl;
}

Engine::Engine(std::string v){
	voice = v;

}
