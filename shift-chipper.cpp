#include <iostream> 
using namespace std; 

string encrypt(string text, int s) 
{ 
	string result = ""; 

	for (int i=0;i<text.length();i++) 
	{ 
		if (isupper(text[i])) 
			result += char(int(text[i]+s-65)%26 +65); 

	else
		result += char(int(text[i]+s-97)%26 +97); 
	} 
	return result; 
} 

string decrypt(string text, int s) 
{ 
	string result = ""; 
	for (int i=0;i<text.length();i++) 
	{ 
		if (isupper(text[i])) 
			result += char(int(text[i]-s-65)%26 + 65); 

	else
		result += char(int(text[i]-s-97)%26 + 97); 
	} 
	return result; 
} 

int main() 
{ 
	string text;
	cout<< "Input Text : ";cin>>text; 
	int s,c ;
	cout<< "Input Key : ";cin>>s; 
	system("cls");
	cout<<"1.Encrypt\n2.Decrypt";
	cout<<"\nChoose Menu:";cin>>c;
	switch(c){
	case 1:
		cout<<text;
		cout << "\nEncrypt: " << encrypt(text, s); 
		break;
	case 2:
		cout<<text;
		cout << "\nDecrypt: " << decrypt(text, s);
		break;
	default:
		cout<<"Error";
	}
} 

