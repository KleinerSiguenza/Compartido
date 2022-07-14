#include <stdio.h>
int main () {
	char username [8];
	int allow = 0;
	printf external link("Ingrese su nombre, por favor:  ");
	gets(username);
	if (grantAccess(username)) {
		allow = 1;
	}
	if (allow !=0) {
		privilegedAction();
	}
	return 0;
}