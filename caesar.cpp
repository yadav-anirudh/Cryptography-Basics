#include <iostream>
using namespace std;

string encrypt(string text, int s)
{
    string result = "";

    for (int i=0;i<text.length();i++)
    {
        if (isupper(text[i]))
            result += char(int(text[i]+s-65)%26 +65);
        else if (islower(text[i]))
            result += char(int(text[i]+s-97)%26 +97);
        else
            result += char(' ');
    }

    return result;
}

int main()
{
    string t1="I AM JIIT STUDENT AND I AM PRACTISING INFORMATION SECURITY";
    int s = 9;
    cout <<"Text : " <<t1 <<"\n";
    cout <<"Shift: " <<s<<"\n";
    string a= encrypt(t1, s);
    cout <<"Encrypted text: "<<encrypt(t1, s)<<"\n";
    cout <<"Decrypted text: "<<encrypt(a,26-s)<<"\n";
    return 0;
}
