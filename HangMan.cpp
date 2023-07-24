#include<iostream>
#include<string>

using namespace std;

int main()
{   TOP: 
    string words[10]={"RED","BLUE","GREEN","AN","YELLOW","LIGHT","ANIMAL","PURPLE","CIAN","HIEST"};
	char letters[10];
	int decission;
	int attempt=3;  // Number of attempts allowed , to guess the charcters
	int status=1;   //Status of the current game, 1 repressent the start
    int userBeg=0;
	int userEnd=9;
    int score=0;      	
	int outPut;
	int isFound;
    char guess;
    int num;

     srand(time(NULL)); //generates random seed value
    num = rand()%10;
    
	int lengthOfWord=words[num].size();
	for (int i=0;i<=lengthOfWord;i++)
	{
    	letters[i]=words[num][i];
	}

	cout<<"\t\t\t\t\t***************************\n";
	cout<<"\t\t\t\t\t  WELCOME TO HANGMAN GAME     \n"; 
	cout<<"\t\t\t\t\t            BY                   \n";
	cout<<"\t\t\t\t\t       ABDUL BASIT                \n";
	cout<<"\t\t\t\t\t*************************** \n";

	//Loop to Guess the game
	while(status<=attempt)
	{
		isFound=0;	
		
        cout<<"\n-----------------------------------------------";
		cout<<"\nSCORE IS "<< score<<"                     Attempts: " <<status<<"/"<<attempt;
        cout<<"\n-----------------------------------------------\n";
		cout<<"WORD IS ";
		
	  for (int i=1;i<=lengthOfWord;i++)
	   {
	     cout<<"_,";
       } 
	       
	    cout<<"Attempt the Letter ";
	    cin>>guess;
	    
			for(int j=0; j<=lengthOfWord; j++)
			{
				if(guess==letters[j])
				{
					isFound=1;
					
				}
			}
	   if(isFound==1)
	   {   
	       cout<<endl;
	       cout<<"YES :) YOU GUESS CORRECT WORD";	
	       cout<<endl;
		   score++;
       }
	   else
	   {   
	       cout<<endl;
	       cout<<" NO ;) YOU GUESS WRONG WORD THINK MORE AND SAVE ME ";
	       cout<<endl;
		   status++;
	   }
		
		if(score==lengthOfWord)
		{
			break;
		}
		
			
	}

	if(score==lengthOfWord)
	 {
	    cout<<endl;
	    cout<<"HURRAY! You Won The GAME !";
     }
  
	 else
	 {
	    cout<<endl;
		cout<<"OPPS! YOU LOST "<<endl;
		cout<<"YOU FAILED TO SAVE ME";
	 	
	 }		
 	
		cout<<"\n\n\\n PRESS 1 to play again , or any key to quit! ";
		cin>>decission;
		while(decission==1)
		{
		    goto TOP;
		}
  	
	return 0;
}
