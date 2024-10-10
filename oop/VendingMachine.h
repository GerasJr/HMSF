#pragma once
#include "SnackSlot.h"

class VendingMachine
{
public:
	VendingMachine(int);
	void AddSlot(SnackSlot*);
	int GetEmptySlotsCount();
private:
	void ChangeSlotStatus(SnackSlot*);
	int slotCount;
	SnackSlot snackSlots[20];
};