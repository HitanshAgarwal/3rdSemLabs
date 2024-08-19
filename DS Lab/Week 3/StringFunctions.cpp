#include <iostream>
using namespace std;

class Str{
	public:
		string s;
		int getlength(){
			int i;
			for(i = 0; s[i] != '\0'; i++);
			return i;
		}
		
		void concatenate(Str n, Str m){
			int l = n.getlength();
			for (int i = 0; i < l; i++)
				s[i] = n.s[i];

			int l2 = m.getlength();
			for (int i = 0; i < l2; i++)
				s[i + l] = m.s[i];
		}
		
		int comparison(Str n, Str m){
			int ln = n.getlength(), lm = m.getlength();
			int minl = min(ln, lm);
			for (int i = 0; i < minl; i++)
				if (n[i] > m[i])
					return 1;
				else if (m[i] > n[i])
					return -1;
					
			if (ln == lm)
				return 0;
			else if (ln > lm)
				return 1;
			else
				return -1;
		}
		
		void insertsub(Str n, int ins){
			int l = getlength(), i, j;
			string temp;
			
			for (i = ins, j= 0; i < l; j++, i++)
				temp[j] = s[i];
				
			for (i = 0; i < n.getlength(); i++)
				s[i + ins] = n.s[i];
				
			for (i = 0; i < l - ins; i++)
				s[i + ins + n.getlength()] = temp[i];
		}
		
		void del(Str n){
			int i, j;
			for(i = 0, j = 0; i < getlength(); i++)
			{
				if (s[i] == n.s[j])
					j++;
				else
					j = 0;
				if(j == n.getlength())
				{
					for (int k = 0; k < i; k++)
						s[k + i - j] = s[i + k];
						
					j = 0;
				}
			}
		}
};
