#include <iostream>
#include <date.h>

void print_date(Date date)
{
	std::cout <<"Day: "<<date.get_day()<<std::endl;
	std::cout <<"Month: "<<date.get_month()<<std::endl;
	std::cout <<"Year: "<<date.get_year()<<std::endl;
}
int main(void)
{
	Date d1;

	d1.set_day(31);
	d1.set_month(8);
	d1.set_year(1988);

	Date *d_ptr = new Date();
	d_ptr->set_day(1);
	d_ptr->set_month(8);
	d_ptr->set_year(1990);

	print_date(d1);
	print_date(*d_ptr);

	return 0;

}
