#include <iostream>

int x0=0;
int t0=0;
int rho_max=4;
int const N=40;
int i;
int L=2000;
int x[N];

int funcion(int rho_max);

int main()
{
	
	std::cout<<funcion(rho_max)<<std::endl;

	return 0;
}

int funcion(int rho_max)
{

	for(int i=0; i<N; i++)
	{
	
		if(i<N/4)
		{
			x[i]=0;
		}
		if(i<((N/2)-1))
		{
			x[i]=rho_max;
		}
		if(i>N/4)
		{
			x[i]=rho_max;
		}
		if(i=2)
		{
			x[i]=rho_max/2;
		}
		else
		{
			x[i]=0;
		}

		return x[i];
	}
	
}


/*-------Punto 2--------
Juan pablo montoya nacio en Bogota, Colombia, el 20 de Septiembre de 1975. Participo en la formula 1 entre el año 2001 y 2006*/
