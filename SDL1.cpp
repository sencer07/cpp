#include <SDL2/SDL.h>
#include <iostream>
int main(int argc,char* argv[]){
	if(SDL_Init(SDL_INIT_EVERYTHING) < 0){std::cout<<"SDL YUKLENEMEDI"<<SDL_GetError();}
	else{std::cout<<"\n\nSDL BASARILI SEKILDE YUKLENDI\n";}
	return 0;	


}
