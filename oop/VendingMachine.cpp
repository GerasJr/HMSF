#include <iostream>
#include "VendingMachine.h"
#include "SnackSlot.h"

VendingMachine::VendingMachine(int SlotCount) 
{
	slotCount = SlotCount;
}

void VendingMachine::AddSlot(SnackSlot *slot) {

	for (int i = 0; i < slotCount; i++)
	{
		if (snackSlots[i].InMachine() == false) {
			ChangeSlotStatus(slot);
			snackSlots[i] = *slot;
			return;
		}
	}

	std::cout << "Machine is filled" << std::endl;
}

int VendingMachine::GetEmptySlotsCount() {
	int emptySlots = 0;

	for (int i = 0; i < slotCount; i++) {
		if (snackSlots[i].InMachine() == false) {
			emptySlots++;
		}
	}

	return emptySlots;
}

void VendingMachine::ChangeSlotStatus(SnackSlot *slot) {
	int key = 3421;
	slot->ChangeStatus(key);
}