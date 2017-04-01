namespace mymatrix
{
	class matrix
	{
		private:	
		int cols;
		int rows;
		int **p;
		public:
		matrix();
		matrix(int,int);
		matrix(matrix&);
		void getdata();
		void display();
		matrix operator+(int val);
		matrix operator+(matrix&);
		matrix operator-(matrix&);
		matrix operator-(int val);
		bool operator==(matrix&);
		matrix operator*(matrix&);
		matrix operator*(int val);
		matrix operator++();
		matrix operator++(int);
		matrix operator--();
		matrix operator--(int);
		//matrix operator=(matrix&)
	};
}
