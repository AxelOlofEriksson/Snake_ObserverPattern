#include "Client.h"

void Client::update(float score)
{
	// Print the changed values
	std::cout << "---Observer (" << id << ") Data---\tScore: " << score << '\n';
	std::cout<<"hej";
}

Client::Client(int id) 
{
	this->id = id;
}