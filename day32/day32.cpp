include <iostream>
#include <iomanip>
 
using namespace std;
 
#define MAX 50      
 
class stack
{
  private:
    int arr[MAX];  
    int top;      

 
  public:
     stack()         
     {
        top=-1;    
     }
 

     void push(int total) 
     {

        top++;        
        if(top < MAX)
         {
            arr[top]=total;  
         }

         else
         {
            cout<<"STACK FULL"<<endl;
            top--;
         }

     }

	int pop(int total)               
    {
		 if(top==-1)
		 {
            cout<<"STACK IS EMPTY"<<endl;
            return NULL;
		 }
        else
		{
            total = arr [top];	
            arr[top]= NULL;				 
            top--;			
            return total;				
		 }

     }
};

int main() 
{
	stack total;

    int firstNum, secondNum;		
    char oper;						
	char undo;
    int  result;                  
    int sum = 0;                  
 
	cout << "press c to input numbers, or press u to undo calculation" << endl << endl;

	while(cin >> undo)
	{
		if (undo =='c')
		{	
			while (cin >> firstNum >> oper >> secondNum)
			{
				 switch (oper) 
				{
					case '+': result = firstNum + secondNum;
							 sum+= result;
							 total.push(sum);
							 break; 
					case '-': result = firstNum - secondNum;
							 sum-= result;
					         total.push(sum);
							 break;
					 default : cout << "Bad operator '" << oper << "'" << endl;
                      continue;  
				}
 
				 cout << result << endl << endl;
				 cout << "Sum: " << sum << endl << endl;
			}
		}
		else if (undo == 'u')
		{
			sum = total.pop(sum);
			cout << "Sum: " << sum << endl;
		}

    }
 
 
	system("pause");
    return 0;
}