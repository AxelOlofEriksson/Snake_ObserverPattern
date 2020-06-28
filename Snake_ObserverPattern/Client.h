#pragma once
#ifndef OBSERVER_PATTERN_CLIENT_1_HPP
#define OBSERVER_PATTERN_CLIENT_1_HPP

#include <iostream>
#include "Observer.h"

// A client that implements the Observer interface
class Client : public Observer 
{
	int id;

public:
	Client(int id);

	virtual void update(float score) override;
};

#endif 