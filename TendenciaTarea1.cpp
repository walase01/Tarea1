#include<iostream>

using namespace std;

bool primo(int numero);
int valor(int numero);

int main(){
	
	int n = 1;
	
	int fibo = 1;
	int otro = 1;
	int suma = 0;
	string paroimpar;
	
	cout<<0<<". "<<fibo<<": "<<"impar"<<" no es primo"<<"\n";
	while(n < 50){	

		suma = fibo + otro;
		if(suma % 2 == 0){
			paroimpar = "par";
		}
		else{
			paroimpar = "impar";
		}
		if(primo(suma) == true){
			paroimpar += " primo";
		}
		else{
			paroimpar += " no es primo";
		}
		cout<<n<<". "<<suma<<": "<<paroimpar<<"  "<<valor(suma)<<"\n";
		otro=fibo;
		fibo = suma;
		n++;
	}
	
	return 0;
}


bool primo(int numero){
	
	if (numero == 0 || numero == 1 || numero == 4) return false;
  	
	for (int x = 2; x < numero / 2; x++) {
		
    if (numero % x == 0) return false;
    
    }
    return true;	
}

int valor(int numero){
	
	int otro = 0;
	
	otro = numero % 10;
	
	return otro;
}
