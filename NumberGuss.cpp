#include <iostream>
#include <iomanip>
using namespace std;
int main()
{   cout<<"Steps:\n1. Select any number in any columns\n2. Then Enter the column number in which your selected number is present\n";
	cout<<"3. Repeat this for three time only.";
	bool again = true;
    while(again){
    cout<<"\n\n";
    int list[21]={0};
    for (int i = 0; i < 21; i++)
    {   int x = rand() % 88 + 11;
		for(int j=0; j <= i; j++) 
        	if(x != list[j])
        		{ list[i] = x; break;}
        	else if(x == list[j])
				{ --i; break; }
    }
    int column[7][3]; int upper, middell, lower;
    
    for(int play=0; play < 3; play++){

    cout << "| Column 1 | Column 2 | Column 3 |\n";
    cout << "|__________|__________|__________|\n";
    for (int i = 0, j = 0 ; i < 21;  i += 3, j++)
    {
    cout << "|  " <<setw(3)<<setfill(' ')<< list[i] << "\t   |   "<<setw(3)<<setfill(' ') << list[i+1] << "    |   "<<setw(3)<<setfill(' ')  << list[i+2] << "\t |" << endl;
    column[j][0] = list[i];  column[j][1] = list[i+1]; column[j][2] = list[i+2];
    }
    cout << "|__________|__________|__________|\n";
	
    cout<<"\n    \nEnter the Column No : ";   
    cin>>middell;
    system("cls");
    switch(middell){
        case 1:
            upper = 2; lower = 3; break;
        case 2: 
            upper = 1; lower = 3; break;
        case 3: 
            upper = 2; lower = 1; break;
        default:
            cout<<"Invalid input"<<endl;
            again = false;
            list[10] = NULL;
    }
    for(int i=0; i<7; i++){
        list[i] = column[i][upper-1];
        list[7+i] = column[i][middell-1];
        list[14+i] = column[i][lower-1];
    }}
    system("cls");
    cout<<"\n     Your Number: "<<list[10];
    }
    cout<<"\n================================================================\n";
    

}