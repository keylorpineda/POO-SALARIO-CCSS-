#include <iostream> 
using namespace std; 
class Salario 
{ 
private: 
	string nombre;  
	float hora; 
	float extra; 
	float rebajos; 
public: 
	Salario() 
	{ 
	nombre: ""; 
		hora = 0; 
		extra = 0; 
		rebajos = 0; 
	} 
	Salario(string _nombre, float _hora, float _extra, float _rebajos) 
	{ 
		nombre = _nombre; 
		hora = _hora; 
		extra = _extra; 
		rebajos = _rebajos; 
	} 
	void setNombre(string _nombre) 
	{ 
		nombre = _nombre; 
	} 
	void setHora(float _hora) 
	{ 
		hora = _hora; 
	} 
	void setExtra(float _extra)  
	{ 
		extra = _extra; 
	} 
	void setRebajos(float _rebajos) 
	{ 
		rebajos = _rebajos; 
	} 
	string getNombre() 
	{ 
		return nombre; 
	} 
	float getHora() 
	{ 
		return hora; 
	} 
	float getExtra() 
	{ 
		return extra; 
	} 
	float getRebajos() 
	{ 
		return rebajos; 
	} 
	float calcSala() 
	{ 
		return hora * 3000;  
	} 
	float calcExtra() 
	{ 
		return extra * 6000;  
	} 
	float Rebajos() 
	{ 
		return (calcSala() + calcExtra()) * 0.09;   
	} 
	float SalarioTotal()   
	{ 
		return (calcSala() + calcExtra()) - Rebajos();        
	} 
}; 
int main() 
{ 
	string nombre; 
	float hora{}; 
	float extra{}; 
	float rebajos{};  
	cout << "Ingrese su nombre: "; 
	cin >> nombre; 
	cout << "Ingrese las horas que trabajo este mes: " << endl; 
	cin >> hora;   
	cout << "Ingrese las horas extra que trabajo este mes: " << endl;   
	cin >> extra;   
	Salario salario(nombre, hora, extra, rebajos);   
	cout << "El total de horas que trabajo es de: " << salario.getHora() << endl; 
	cout << "El total de horas extra que trabajo es de: " << salario.getExtra() << endl; 
	cout << "###############################################" << endl;   
	cout << "Sistema de Salarios" << endl; 
	cout << "Su nombre es: " << salario.getNombre() << endl; 
	cout << "El salario base(sin reducciones ni horas extras): " << salario.calcSala() << endl;     
	cout << "El monto que gano en horas extra es de: " << salario.calcExtra() << endl; 
	cout << "El monto de rebajos de la caja es de: " << salario.Rebajos() << endl;  
	cout << "Por lo tanto su salario total con las reducciones de la CCSS es de: " << salario.SalarioTotal() << endl; 
	return 0; 
}  