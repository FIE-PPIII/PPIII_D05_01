#ifndef __FECHA_H__

#define __FECHA_H__

	class Fecha
	{
		private:
			int dd;
    		int mm;
    		int aaaa;
    
    		int ProcesarCompararFecha(const int, const int, const int) const;

		public:
			// Constructor
			Fecha();
			Fecha(const int, const int, const int);
			
			// Destructor
			~Fecha();
			
			// Asignar Atributo
			void AsignarDD(const int);
			void AsignarMM(const int);
			void AsignarAAAA(const int);
			
			// Obtener Atributo
			int ObtenerDD() const;
			int ObtenerMM() const;
			int ObtenerAAAA() const;
		
			// Servicio
			int CompararFecha(const int, const int, const int) const;
			int CompararFecha(const Fecha) const;
			int ValidarFecha() const;
			void MostrarFecha() const;
		
		protected:
	};

	// Asignar Atributo
	inline void Fecha::AsignarDD(const int dd) 
	{
		this->dd = dd;
	}

	inline void Fecha::AsignarMM(const int mm)
	{
		this->mm = mm;
	}
	
	inline void Fecha::AsignarAAAA(const int aaaa)
	{
		this->aaaa = aaaa; 
	}

	// Obtener Atributo
	inline int Fecha::ObtenerDD(void) const
	{
    	return this->dd; 
	}

	inline int Fecha::ObtenerMM() const
	{
    	return this->mm;
	}

	inline int Fecha::ObtenerAAAA(void) const
	{
		return this->aaaa; 
	}

#endif
