#pragma once
#include "Snack.h"

class SnackSlot
{
public:
	SnackSlot(int);
	SnackSlot();
	void AddSnack(Snack*);
	void ChangeStatus(int);
	bool InMachine();
private:
	int inMachineKey;
	int slotAmount;
	bool inMachine;
	Snack snacks[20];
};