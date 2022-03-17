#include"../include/std_lib_facilities.h"

int main()
{
	cout << "Please enter expression(we can handle +,-,*, and /)\n";
	cout << "Add an x to end of expression (e.g. 1+2*3x):\n";
	int lval = 0;
	int rval;
	cin >> lval;
	if(!cin)
	{
		error("no first operand\n");
	}
	for(char op;cin>>op;)
	{
		if(op!='x')
		{
			cin>>rval;
		}
		if(!cin)
		{
			error("no second operand\n");
		}
		switch(op){
			case '+':
				lval += rval;
				break;
			
			case '-':
				lval -= rval;
				break;

			case '*':
				lval *= rval;
				break;

			case '/':
				lval /= rval;
				break;

			default:
				cout << "Result: " << lval << '\n';
				keep_window_open();
				
		}
		
	}
	error("bad expression");

}

