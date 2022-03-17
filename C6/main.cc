#include "../include/std_lib_facilities.h"
class Token
{
	public:
	char kind;
	double value;
	Token( char k )
		: kind{k}
		, value{0.0}
	{
	}
	Token( char k, double v )
		: kind{k}
		, value{v}
	{
	}
};

Token get_token();
	
int main()
{
	vector<Token>tok;
    Token t1{'+'};
    Token t2{'8', 11.5};
	while(cin){
		Token t = get_token();
		tok.push_back(t);
	}
	for(int i = 0;i<tok.size();++i){
		if(tok[i].kind == '*'){
			double d = tok[i-1].value*tok[i+1].value;
			cout << d;
		}
	}
}

Token get_token()    // read a token from cin
{
    char ch;
    cin >> ch;    // note that >> skips whitespace (space, newline, tab, etc.)

    switch (ch) {
        //not yet   case ';':    // for "print"
        //not yet   case 'q':    // for "quit"
    case '(': case ')': case '+': case '-': case '*': case '/':
        return Token(ch);        // let each character represent itself
    case '.':
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
    {
        cin.putback(ch);         // put digit back into the input stream
        double val;
        cin >> val;              // read a floating-point number
        return Token('8', val);   // let '8' represent "a number"
    }
    default:
        error("Bad token");
    }
}

