#ifndef DATE
#define DATE
#endif 

class Date
{
	private:
		int day, month, year;

	public:
		Date();
		void set_day(int day);
		void set_month(int month);
		void set_year(int year);
		int get_day(void);
		int get_month(void);
		int get_year(void);

};
