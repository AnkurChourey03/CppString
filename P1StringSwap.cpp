/*09-10-2024
swap strings
 */
//header section
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
//namespace define
using namespace std;

//class for string
class cString
{
    private:
    char *pString1;  
    char *pString2;  
    char *pStringTemp;  
    void vGetString(char* pString1Take,char* pString2Take)
    {
        for(char i=0;i<10;i++)cout<<"\n";
        cout<<"enter string1\n";
        //scanf("%[^\n]s",pString1Take);
        fgets(pString1Take,20,stdin);
        cout<<"enter string2\n";
        //scanf("%[^\n]s",pString2Take);

        fgets(pString2Take,20,stdin);
    }
    public:
    void vSwapString(void)
    {
        pString1 = new char (100);
        pString2 = new char (100);
        pStringTemp = new char (100);

        vGetString(pString1,pString2);
        cout<<"before swap=\n";
        printf("string 1: %s\n",pString1);
        printf("string 2: %s\n",pString2);
        strcpy(pStringTemp,pString1);
        strcpy(pString1,pString2);
        strcpy(pString2,pStringTemp);
        cout<<"after swap=\n";
        printf("string 1: %s\n",pString1);
        printf("string 2: %s\n",pString2);
        delete[] pString1;
        delete[] pString2;
        delete[] pStringTemp;
    }
};
int main()
{
    cString oString;
    oString.vSwapString();
    return 0;
}