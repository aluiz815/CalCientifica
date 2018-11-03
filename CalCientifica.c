#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fatorial(float num){
    if (num ==1 || num == 0){
        return 1;
    }
    else {
        return fatorial(num-1)*num;
    }
}
int main(int argc, char *argv[]) {
	int op,m;
	float n1,n2,res;
	setlocale(LC_ALL,"");
	do{		
	printf("\n1-SOMA\n2-Subtração\n3-Multiplicação\n4-Divisão\n5-Fatorial\n6-Seno\n7-Cosseno\n8-Tangente\n9-Raiz Quadrada\n10-Potênciação\n11-Logaritmo natural\n12-Logaritmo na base 10\n13-Raiz Cubica\n14-Resto\n15-Raiz Enésima\n16-Sair");
	printf("\n\nDigite o numero da operação que voce deseja realizar:\n");
	scanf("%d",&op);
	system("cls");
		if(op==1){
		printf("Digite o primeiro numero:\n");
		scanf("%f",&n1);
		printf("Digite o segundo numero:\n");
		scanf("%f",&n2);
		res=n1+n2;
		printf("O resultado é: %.2f",res);
		printf("\nDeseja realizar outra operação? 1-Sim ou 2-Não\n");
		scanf("%d",&m);
		system("cls");
	}else if(op==2){
		printf("Digite o primeiro numero:\n");
		scanf("%f",&n1);
		printf("Digite o segundo numero:\n");
		scanf("%f",&n2);
		res=n1-n2;
		printf("O resultado é: %.2f",res);
		printf("\nDeseja realizar outra operação? 1-Sim ou 2-Não\n");
		scanf("%d",&m);
		system("cls");
	}else if(op==3){
		printf("Digite o primeiro numero:\n");
		scanf("%f",&n1);
		printf("Digite o segundo numero:\n");
		scanf("%f",&n2);
		res=n1*n2;
		printf("O resultado é: %.2f",res);
		printf("\nDeseja realizar outra operação? 1-Sim ou 2-Não\n");
		scanf("%d",&m);
		system("cls");
	}else if(op==4){
		printf("Digite o primeiro numero:\n");
		scanf("%f",&n1);
		printf("Digite o segundo numero:\n");
		scanf("%f",&n2);
		res=n1/n2;
		printf("O resultado é: %.2f",res);
		printf("\nDeseja realizar outra operação? 1-Sim ou 2-Não\n");
		scanf("%d",&m);
		system("cls");
	}else if(op==5){
		float num;
    	printf("Informe um numero para obter seu fatorial:\n");
    	scanf("%f", &num);
    	printf("O fatorial do numero eh: %d", fatorial(num));
    	printf("\nDeseja realizar outra operação? 1-Sim ou 2-Não\n");
		scanf("%d",&m);
		system("cls");
	}else if(op==6){
		printf("Digite o numero que deseja saber o seno:\n");
		scanf("%f",&n1);
		res=sin(n1);
  		printf("O seno é:\n%.2f",res);
  		printf("\nDeseja realizar outra operação? 1-Sim ou 2-Não\n");
		scanf("%d",&m);
		system("cls");
	}else if(op==7){
		printf("Digite o numero que deseja saber o cosseno:\n");
		scanf("%f",&n1);
		res=cos(n1);
  		printf("O cosseno é:\n%.2f",res);
		printf("\nDeseja realizar outra operação? 1-Sim ou 2-Não\n");
		scanf("%d",&m);
		system("cls");
	}else if(op==8){
		printf("Digite o numero que deseja saber a tangente:\n");
		scanf("%f",&n1);
		res=tan(n1);
  		printf("A tangente é:\n%.2f",res);
		printf("\nDeseja realizar outra operação? 1-Sim ou 2-Não\n");
		scanf("%d",&m);
		system("cls");
	}else if(op==9){
		printf("Digite o numero que deseja saber a raiz quadrada:\n");
		scanf("%f",&n1);
		res=sqrt(n1);
		printf("A raiz quadrada é:\n%.2f",res);
		printf("\nDeseja realizar outra operação? 1-Sim ou 2-Não\n");
		scanf("%d",&m);
		system("cls");
	}else if(op==10){
		printf("Digite a base:\n");
		scanf("%f",&n1);
		printf("Digite o expoênte:\n");
		scanf("%f",&n2);
		res=pow(n1,n2);
		printf("O resultado da potência é:\n%.2f",res);
		printf("\nDeseja realizar outra operação? 1-Sim ou 2-Não\n");
		scanf("%d",&m);
		system("cls");
	}else if(op==11){
		printf("Digite o numero que deseja saber o logaritmo natural:\n");
		scanf("%f",&n1);
		res=log(n1);
		printf("O logaritmo é:\n%.2f",res);
		printf("\nDeseja realizar outra operação? 1-Sim ou 2-Não\n");
		scanf("%d",&m);
		system("cls");
	}else if(op==12){
		printf("Digite o numero que deseja saber o logaritmo na base 10:\n");
		scanf("%f",&n1);
		res=log10(n1);
		printf("O logaritmo na base 10 é:\n%.2f",res);
		printf("\nDeseja realizar outra operação? 1-Sim ou 2-Não\n");
		scanf("%d",&m);
		system("cls");
	}else if(op==13){
		printf("Digite o numero que deseja saber a raiz cubica:\n");
		scanf("%f",&n1);
		res=cbrt(n1);
		printf("A raiz cubica é:\n%.2f",res);
		printf("\nDeseja realizar outra operação? 1-Sim ou 2-Não\n");
		scanf("%d",&m);
		system("cls");}
		else if(op==14){
		printf("Digite o primeiro numero:\n");
		scanf("%f",&n1);
		printf("Digite o segundo numero:\n");
		scanf("%f",&n2);
		res=fmod(n1,n2);
		printf("O resto da divisão é:\n%.2f",res);
		printf("\nDeseja realizar outra operação? 1-Sim ou 2-Não\n");
		scanf("%d",&m);
		system("cls");}
		else if(op==15){
		printf("Digite o x da raiz:\n");
		scanf("%f",&n1);
		printf("Digite o y da raiz:\n");
		scanf("%f",&n2);
		res=pow(n1,1/n2);
		printf("O resultado é:\n%.2f",res);
		printf("\nDeseja realizar outra operação? 1-Sim ou 2-Não\n");
		scanf("%d",&m);
		system("cls");}
		else if(op==16){
		return 0;}
		else{
		printf("Operação invalida");
		n1=1;
		op=1;
		printf("\nDeseja realizar uma operação valida ? 1-Sim ou 2-Não\n");
		scanf("%d",&m);
		system("cls");
	}
	}while(n1!= 0 && op!=0 && m!=2);
return 0;
}
