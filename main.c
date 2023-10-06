#include<stdio.h>

int main(){

	int a,b,c,i;

	printf("Digite tres numeros:");
	scanf("%d%d%d",&a,&b,&c);

	printf("Escolha a ordem \n(1)Crescente\n(2)Decrescente\n(3)Maior valor\nQual sua escolha?:");
	scanf("%d",&i);

	switch(i){
		case 1:
		if (a<b && b<c){
			printf("\nA ordem crescente e %d-%d-%d",a,b,c);
			}
	    else if (a<b && c<b){
			printf("\nA ordem crescente e %d-%d-%d",a,c,b);
		}
		else if (b<a && a<c){
			printf("\nA ordem crescente e %d-%d-%d",b,a,c);
			}
		else if (b<c && c<a){
			printf("\nA ordem crescente e %d-%d-%d",b,c,a);
		}
		else if (c<b && b<a){
			printf("\nA ordem crescente e %d-%d-%d",c,b,a);
	    }
	    else if (c<a && a<b){
			printf("\nA ordem crescente e %d-%d-%d",c,a,b);

        }break;

        case 2:
		if (a>b && b>c){
			printf("\nA ordem decrescente e %d-%d-%d",a,b,c);
			}
	    else if (a>b && c>b){
			printf("\nA ordem decrescente e %d-%d-%d",a,c,b);

		}
		else if (b>a && a>c){
			printf("\nA ordem decrescente e %d-%d-%d",b,a,c);
			}
		else if (b>c && c>a){
			printf("\nA ordem decrescente e %d-%d-%d",b,c,a);
		}
		else if (c>b && b>a){
			printf("\nA ordem decrescente e %d%d%d",c,b,a);
	    }
	    else if (c>a && a>b){
			printf("\nA ordem decrescente e %d-%d-%d",c,a,b);

        }break;

        case 3:
        if (a>b && a>c){
        	printf("\nMaior no meio %d-%d-%d",b,a,c);
		}
		 if (b>a && b>c){
        	printf("\nMaior no meio %d-%d-%d",a,b,c);
		}
		 if (c>a && c>b){
        	printf("\nMaior no meio %d-%d-%d",a,c,b);

		}break;

}

return 0;
}
