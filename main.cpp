
#include <iostream>
#include "git.h"
#include <cassert>

int main() {
	assert(IsYearOfApocalypse(1992));
	assert(!(IsYearOfApocalypse(2003)));
}
