#include "std_lib_facilities.h"
using s32 = int32_t;

s32 bin_search(vector<string> v,s32 l,s32 r,string word)
{
	if(r >= l)
	{
		s32 mid = l + (r-l) / 2;
		if(v[mid] == word)
		{
			return mid;
		}

		if(v[mid] > word)
		{
			return bin_search(v,l,mid - 1,word);
		}

		return bin_search(v,mid+1,r,word);
	}
	return -1;
}

s32 main(void){
	string input;
	vector<string> disliked(3);
	disliked.push_back("Brocolli");
	disliked.push_back("Carrot");
	disliked.push_back("Pea");
	cout << "Enter a word\n";
	cout << "Press Ctrl+d to exit\n";
	sort(disliked);
	while(cin >> input){
		
		//for(string x:disliked){
		//	
		//	if(x == input){
		//		cout << "BLEEP\n";
		//	}

		//

		//}
		if(s32 pos = bin_search(disliked,0,disliked.size() - 1,input)  != -1)
		{
			cout << "BLEEP\n";
		}	
		
	}
}

