    #include <stdio.h>

int main() {
	int maior, menor, altura;
	
	printf("digite o trapezio maior: ");
	scanf("%d", &maior);
	
	printf("digite o trapezio menor: ");
	scanf("%d", &menor);
	
	printf("digite a altura do trapezio: ");
	scanf("%d", &altura);
	
	if (maior > 0 && menor > 0 && altura > 0 && maior > menor) {
		printf("\n\na area do trapezio e: %dm2", ((maior + menor) * altura) / 2);
	} else if(menor > maior) {
		printf("\n\no trapezio menor precisa ser menor que o trapezio maior");
	}else{
	printf("\n\nescolha um numero maior que 0.");
	}
}
