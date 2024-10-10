#include "Snack.h"
#include "SnackSlot.h"
#include <iostream>

SnackSlot::SnackSlot(int SlotAmount) {
	slotAmount = SlotAmount;
	inMachineKey = 3421;
	inMachine = false;
}

SnackSlot::SnackSlot() {
	inMachine = false;
}

void SnackSlot::AddSnack(Snack *snack) {
	
	for (int i = 0; i < slotAmount; i++) {
		if (snacks[i].ReturnName() == "empty") {
			snacks[i] = *snack;
			return;
		}
	}
	
	std::cout << "Slot is filled" << std::endl;
}

bool SnackSlot::InMachine()
{
	return inMachine;
}

void SnackSlot::ChangeStatus(int Key) {
	if (Key == inMachineKey) {
		inMachine = true;
	}
}