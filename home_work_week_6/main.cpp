#include "dependies.h"
#include "Home_pet.h"

using namespace std;

int main() {
	Parrot a("kesha", "Ora", 5);
	//a.show_Info();
	Home_pet* point;
	point = &a;
	point->show_Info();
	return 0;
}