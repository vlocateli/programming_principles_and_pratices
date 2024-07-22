#include "std_lib_facilities.h"

int main(void) {
  vector<double> temps;
  for (double temp; cin >> temp;) {
    temps.push_back(temp);
  }

  double sum = 0;
  for(double x:temps){
	  sum += x;
  }
		 
  for(double element : temps)
	{
		std::cout << element;
	}
  cout << "Average temperature " << sum/temps.size() << '\n';
  sort(temps);
  cout << "Median temperature  " << temps[(temps.size()-1)/2] << '\n';
}
