#include"../include/std_lib_facilities.h"

int main()
{
	cout << "PLease enter expression (we can handle + and -):\n";
	int lval = 0;
	int rval;
	char op;
	int res;
	cin >> lval >> op >> rval;
	if(op == '+')
	{
		res = lval + rval;
	}
	else if(op == '-')
	{
		res = lval - rval;
	}

	cout << "Result: " << res << '\n';
	keep_window_open();
	return 0;
}

