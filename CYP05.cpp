#include <stdio.h>

int main() {
	long cuentas[2000];
	float calif[2000];
	int num = 0;
	int aunicos = 0;

	scanf_s("%d", &num);

	for (int i = 0; i < num; i++) {
		long cuenta;
		float calificacion;
		scanf_s("%ld %f", &cuenta, &calificacion);
		int encontrado = 0;
		for (int j = 0; j < aunicos; j++) {
			if (cuentas[j] == cuenta) {
				encontrado = 1;

				if (calificacion > calif[j]) {
					calif[j] = calificacion;
				}
				break;
			}

		}
		if (encontrado == 0) {
			cuentas[aunicos] = cuenta;
			calif[aunicos] = calificacion;
			aunicos++;

		}
	}
	
	for (int i = 0; i < aunicos - 1; i++){
		
		for (int j = i + 1; j < aunicos; j++){
			
			if (cuentas[j] < cuentas[i]){

				long auxCuenta = cuentas[i];
				cuentas[i] = cuentas[j];
				cuentas[j] = auxCuenta;

				float auxCalif = calif[i];
				calif[i] = calif[j];
				calif[j] = auxCalif;
			}
		}
	}

	printf("%d\n",aunicos);

	for (int i = 0; i < aunicos; i++) {
		if(i == aunicos - 1)
			printf("%ld %f", cuentas[i], calif[i]);
		else
			printf("%ld %f\n", cuentas[i], calif[i]);

	}


}
	






