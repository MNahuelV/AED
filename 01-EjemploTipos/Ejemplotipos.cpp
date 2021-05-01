/* Ejemplo de Valores
 y operaciones de tipos
 de datos
 MNV
 01/05/2021
 */


#include <iostream>
#define NDEBUG
#include <Cassert>


/* Consultar
 #include <climits>
*/

using namespace std;


int main () {
    //tipo de dato int
        int Num  = 1045/43;
        assert(Num == 1025/43);


    //Tipo de dato bool
        assert (true + true == false);
    
    //Tipo de dato Char
        char Letra = 'a';
        assert(Letra == 96 );

    //Tipo de dato Unsigned
        unsigned Pos = -3;
        assert (Pos < 0);

	//tipo de dato Double
	    int a = 1.4;
	    double b = 1.4;
	    assert( a == b);
        
    // Tipo de dato String 
        string pal = "";
        assert (pal.empty());

}