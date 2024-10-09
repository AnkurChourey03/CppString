/*check string palindrom or not */

/*header file  */
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>

/*constat define */
#define NOT_PALINDROM 2
#define PALINDROM     1
#define STRING_SIZE 20
//#define 0 (int)0
/* class defination */
class cStringClass
{
    private:
    /**
     * function name : vGetString
     * taking input string from user
     */
    void vGetString(char* pString)
    {
        int iLen=0;
        std::cout<<"enter string\n";
        gets(pString);
    }
    /**
     * funation name : iCheckPalindromInString
     * checking palindrom string.
     * if string is palindrom its return 1 other wise send 2. 
     */
    int iCheckPalindromInString(char* pCheckForPalindrom)
    {
        int iStatus=0;
        char *pReverseString;
        int iLength=0;
        char cChar=0;
        char cTemp=0;
        pReverseString = new char[STRING_SIZE];
       
        //copy string, we can use strcpy also
        for(cChar=0;pCheckForPalindrom[cChar];cChar++)
        {
            pReverseString[cChar] = pCheckForPalindrom[cChar];
            iLength++;
        }
        pReverseString[iLength]='\0';
        //reverse string.
        for(char cJ=iLength-1, cTemp,cChar=0;cChar<cJ;cChar++,cJ--)//rahul lu ar
        {
            
            cTemp=pCheckForPalindrom[cChar];
            pCheckForPalindrom[cChar]=pCheckForPalindrom[cJ];
            pCheckForPalindrom[cJ]=cTemp;
        }
       
        //campair string
        for(cChar=0;pCheckForPalindrom[cChar];cChar++)
        {
            if(pCheckForPalindrom[cChar]!=pReverseString[cChar])
            {
                iStatus=NOT_PALINDROM;
                break;
            }
        }

        //if strings are same 
        if(iStatus!=NOT_PALINDROM)iStatus=PALINDROM;
        return iStatus; 
    }
    public:
    
    /**
     * constructor defination.
     * calling private function.
     */
    cStringClass()
    {
        //!< local variable
        char *pMainString;
        int iStatusMain = 0;
        pMainString = new char[STRING_SIZE];
        vGetString(pMainString);
        iStatusMain = iCheckPalindromInString(pMainString);
        if(iStatusMain == PALINDROM)
        {
            std::cout<<"string is palindrom\n";
        }
        else 
        {
            std::cout<<"string is not palindrom\n";
        }
    }
};
/**
 * main function
 */
int main()
{
    /**creating object, with object constructor will create */
    cStringClass oStringClass;
    return 0;
}