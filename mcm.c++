#include<iostream>
#include<cstdlib>

#define uint unsigned int

using namespace std;

const unsigned short numeros_primos[] = {
  2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97,
  101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199,
  211, 223, 227, 229, 233, 239, 241, 251
};

uint buscar_mayor(uint* numeros, uint cantidad_de_numeros);
void mostrar_numeros(uint* numeros, uint cantidad_de_numeros);
unsigned long mcm(uint cantidad_de_numeros, uint* numeros);

int main(int argc, char** argv){
  uint cantidad_de_numeros = argc - 1;
  uint* numeros = new uint[cantidad_de_numeros];
  
  // Convertir los argumentos a enteros y calcula el mayor
  for(uint i = 0; i < cantidad_de_numeros; i++)
    numeros[i] = atoi(argv[i+1]);
  
  // Calcula el minimo comun multiplo
  unsigned long MCM = mcm(cantidad_de_numeros, numeros);
  
  // Mostrar el resultado
  cout << endl << "El minimo comun multiplo es: " << MCM << endl;
  
  // Liberar memoria
  delete[] numeros;
  return 0;
}

unsigned long mcm(uint cantidad_de_numeros, uint* numeros){
  unsigned long MCM = 1;
  uint i, j, k = 0;
  uint mayor = 255;
  uint factor = 0;
  bool hubo_cambios = false;
  
  // Muestra el primer renglon
  mostrar_numeros(numeros, cantidad_de_numeros);
  
  
  do {
    // Intentar con un numero primo
    factor = numeros_primos[k++];
    
    // Dar las vueltas que pueda ese numero primo
    do {
      hubo_cambios = false;
      
      // Buscar entre todos los numeros cuales se pueden dividir
      for(i = 0; i < cantidad_de_numeros; i++) {
        if (numeros[i] % factor == 0) {
          numeros[i] /= factor;
          hubo_cambios = true;
        }
      }
      
      // Si hubo cambios, este factor es valido
      if (hubo_cambios) {
        // Mostrar cambios
        cout << "|\t" << factor << ";\t" << MCM << " x " << factor << " = " << MCM * factor << endl;
        // cout << "|\t" << factor << ";\tacum: " << MCM * factor <<";\tmayor: "<< mayor << endl;
        mostrar_numeros(numeros, cantidad_de_numeros);
        
        // Buscar el nuevo mayor para ahorrar iteraciones
        mayor = buscar_mayor(numeros, cantidad_de_numeros);
        // Acumular
        MCM *= factor;        
      }
      
      // Si ya no hubo cambios, no hay mas vueltas con ese factor
    } while(hubo_cambios);
    
  } while(factor <= mayor);
  
  return MCM;
}

uint buscar_mayor(uint* numeros, uint cantidad_de_numeros){
  uint mayor = 0;
  
  for(uint i = 0; i < cantidad_de_numeros; i++){
    if(numeros[i] > mayor){
      mayor = numeros[i];
    }
  }
  
  return mayor;
}

void mostrar_numeros(uint* numeros, uint cantidad_de_numeros){
  for(int i = 0; i < cantidad_de_numeros; i++){
    cout << numeros[i] << "\t";
  }
}
