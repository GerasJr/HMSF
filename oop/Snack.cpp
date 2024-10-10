#include "Snack.h"
#include <iostream>
#include <string>

using namespace std;
string Snack::ReturnName() {
	return name;
}

void Snack::SetName(string Name) {
	name = Name;
}

Snack::Snack(string Name) {
	name = Name;
}

Snack::Snack() {
	name = "empty";
}