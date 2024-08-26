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
				if (n.s[i] > m.s[i])
					return 1;
				else if (m.s[i] > n.s[i])
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
 // Constructor to initialize from a string literal
    Str(const char* str) {
        s = str;
    }
};

int main() {
    Str str1("Hello"), str2(" World!"), str3("How are you?");

    // Concatenate str1 and str2
    str1.concatenate(str1, str2);
    cout << "Concatenated string: " << str1.s << endl;

    // Compare str1 and str3
    int result = str1.comparison(str1, str3);
    if (result == 1) {
        cout << "str1 is greater than str3" << endl;
    } else if (result == -1) {
        cout << "str1 is smaller than str3" << endl;
    } else {
        cout << "str1 is equal to str3" << endl;
    }

    // Insert " there" into str1 at index 6
    str1.insertsub(Str(" there"), 6);
    cout << "Inserted string: " << str1.s << endl;

    // Delete "World" from str1
    str1.del(Str("World"));
    cout << "Deleted string: " << str1.s << endl;

    return 0;
}
