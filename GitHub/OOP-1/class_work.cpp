
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string nm;
	int acc,id,bnk,csh,with,chng,brch,opt,min;
	cout<<"Enter you names"<<endl;
	cin>>nm;
	cout<<"Enter your ID number"<<endl;
	cin>>id;
    cout<<"Enter the bank of your choice \n 1. barclays\n 2. kcb\n 3. stanbic "<<endl;
    cin>>bnk;
    min=10000;
    //for bank one
    if(bnk == 1)
    {
    	cout<<"Enter the branch of your choice \n1.nairobi \n2.kisumu \n3.nakuru \n";
    	cin>>brch;
    	//start of branch one
		if(brch == 1)
		{
			cout<<"\tnairobi branch"<<endl;
			cout<<"Do you wish to 1.deposit or 2.withdraw?\n";
			cin>>opt;
			if(opt == 1)
			{
				cout<<"Enter amount to deposit"<<endl;
    			cin>>acc;
    			min =min+acc;
    			cout<<"your new balance is "<<min<<endl;
    			cout<<"dp you wish to withdraw \n 1. yes\n 2.no"<<endl;
    			cin>>with;
    			if(with == 1)
    			{
    				cout<<"Enter the amount you want to withdraw"<<endl;
					cin>>csh;
					chng=(min-csh);
					cout<<"your new balance is "<<chng<<endl;
				}
				else if(with ==2)
				{
					cout<<"Have a nice day"<<endl;
				}
    			
			}
			else if(opt == 2)
			{
				cout<<"Enter the amount you want to withdraw"<<endl;
				cin>>csh;
				chng=(min-csh);
				cout<<"your new balance is "<<chng<<endl;
			}
		}
		//end of branch one
		//start of branch two
		if(brch == 2)
		{
			cout<<"\tkisumu branch"<<endl;
			cout<<"Do you wish to 1.deposit or 2.withdraw?\n";
			cin>>opt;
			if(opt == 1)
			{
				cout<<"Enter amount to deposit"<<endl;
    			cin>>acc;
    			min =min+acc;
    			cout<<"your new balance is "<<min<<endl;
    			cout<<"dp you wish to withdraw \n 1. yes\n 2.no"<<endl;
    			cin>>with;
    			if(with == 1)
    			{
    				cout<<"Enter the amount you want to withdraw"<<endl;
					cin>>csh;
					chng=(min-csh);
					cout<<"your new balance is "<<chng<<endl;
				}
				else if(with ==2)
				{
					cout<<"Have a nice day"<<endl;
				}
    			
			}
			else if(opt == 2)
			{
				cout<<"Enter the amount you want to withdraw"<<endl;
				cin>>csh;
				chng=(min-csh);
				cout<<"your new balance is "<<chng<<endl;
			}
		}
		//end of branch two
		//start branch three
		if(brch == 3)
		{
			cout<<"\tnakuru branch"<<endl;
			cout<<"Do you wish to 1.deposit or 2.withdraw?\n";
			cin>>opt;
			if(opt == 1)
			{
				cout<<"Enter amount to deposit"<<endl;
    			cin>>acc;
    			min =min+acc;
    			cout<<"your new balance is "<<min<<endl;
    			cout<<"dp you wish to withdraw \n 1. yes\n 2.no"<<endl;
    			cin>>with;
    			if(with == 1)
    			{
    				cout<<"Enter the amount you want to withdraw"<<endl;
					cin>>csh;
					chng=(min-csh);
					cout<<"your new balance is "<<chng<<endl;
				}
				else if(with ==2)
				{
					cout<<"Have a nice day"<<endl;
				}
    			
			}
			else if(opt == 2)
			{
				cout<<"Enter the amount you want to withdraw"<<endl;
				cin>>csh;
				chng=(min-csh);
				cout<<"your new balance is "<<chng<<endl;
			}
		}
		//end branch tthree
	}
	//end of bank one	
	//for bank two
	if(bnk == 2)
    {
    	cout<<"Enter the branch of your choice \n1.nairobi \n2.kajiado \n3.naikuru \n";
    	cin>>brch;
    	//start of branch one
		if(brch == 1)
		{
			cout<<"\tnairobi branch"<<endl;
			cout<<"Do you wish to 1.deposit or 2.withdraw?\n";
			cin>>opt;
			if(opt == 1)
			{
				cout<<"Enter amount to deposit"<<endl;
    			cin>>acc;
    			min =min+acc;
    			cout<<"your new balance is "<<min<<endl;
    			cout<<"DO you wish to withdraw \n 1. yes\n 2.no"<<endl;
    			cin>>with;
    			if(with == 1)
    			{
    				cout<<"Enter the amount you want to withdraw"<<endl;
					cin>>csh;
					chng=(min-csh);
					cout<<"your new balance is "<<chng<<endl;
				}
				else if(with ==2)
				{
					cout<<"Have a nice day"<<endl;
				}
    			
			}
			else if(opt == 2)
			{
				cout<<"Enter the amount you want to withdraw"<<endl;
				cin>>csh;
				chng=(min-csh);
				cout<<"your new balance is "<<chng<<endl;
			}
		}
		//end of branch one
		//start of branch two
		if(brch == 2)
		{
			cout<<"\tkajiado branch"<<endl;
			cout<<"Do you wish to 1.deposit or 2.withdraw?\n";
			cin>>opt;
			if(opt == 1)
			{
				cout<<"Enter amount to deposit"<<endl;
    			cin>>acc;
    			min =min+acc;
    			cout<<"your new balance is "<<min<<endl;
    			cout<<"DO you wish to withdraw \n 1. yes\n 2.no"<<endl;
    			cin>>with;
    			if(with == 1)
    			{
    				cout<<"Enter the amount you want to withdraw"<<endl;
					cin>>csh;
					chng=(min-csh);
					cout<<"your new balance is "<<chng<<endl;
				}
				else if(with ==2)
				{
					cout<<"Have a nice day"<<endl;
				}
    			
			}
			else if(opt == 2)
			{
				cout<<"Enter the amount you want to withdraw"<<endl;
				cin>>csh;
				chng=(min-csh);
				cout<<"your new balance is "<<chng<<endl;
			}
		}
		//end of branch two
		//start branch three
		if(brch == 3)
		{
			cout<<"\tnaikuru branch"<<endl;
			cout<<"Do you wish to 1.deposit or 2.withdraw?\n";
			cin>>opt;
			if(opt == 1)
			{
				cout<<"Enter amount to deposit"<<endl;
    			cin>>acc;
    			min =min+acc;
    			cout<<"your new balance is "<<min<<endl;
    			cout<<"DO you wish to withdraw \n 1. yes\n 2.no"<<endl;
    			cin>>with;
    			if(with == 1)
    			{
    				cout<<"Enter the amount you want to withdraw"<<endl;
					cin>>csh;
					chng=(min-csh);
					cout<<"your new balance is "<<chng<<endl;
				}
				else if(with ==2)
				{
					cout<<"Have a nice day"<<endl;
				}
    			
			}
			else if(opt == 2)
			{
				cout<<"Enter the amount you want to withdraw"<<endl;
				cin>>csh;
				chng=(min-csh);
				cout<<"your new balance is "<<chng<<endl;
			}
		}
		//end branch tthree
	}
	//end of bank two
	//for bank three
	if(bnk == 3)
    {
    	cout<<"Enter the branch of your choice \n1.nairobi \n2.kitale \n3.nanyuki \n";
    	cin>>brch;
    	//start of branch one
		if(brch == 1)
		{
			cout<<"\tnairobi branch"<<endl;
			cout<<"Do you wish to 1.deposit or 2.withdraw?\n";
			cin>>opt;
			if(opt == 1)
			{
				cout<<"Enter amount to deposit"<<endl;
    			cin>>acc;
    			min =min+acc;
    			cout<<"your new balance is "<<min<<endl;
    			cout<<"DO you wish to withdraw \n 1. yes\n 2.no"<<endl;
    			cin>>with;
    			if(with == 1)
    			{
    				cout<<"Enter the amount you want to withdraw"<<endl;
					cin>>csh;
					chng=(min-csh);
					cout<<"your new balance is "<<chng<<endl;
				}
				else if(with ==2)
				{
					cout<<"Have a nice day"<<endl;
				}
    			
			}
			else if(opt == 2)
			{
				cout<<"Enter the amount you want to withdraw"<<endl;
				cin>>csh;
				chng=(min-csh);
				cout<<"your new balance is "<<chng<<endl;
			}
		}
		//end of branch one
		//start of branch two
		if(brch == 2)
		{
			cout<<"\tkitale branch"<<endl;
			cout<<"Do you wish to 1.deposit or 2.withdraw?\n";
			cin>>opt;
			if(opt == 1)
			{
				cout<<"Enter amount to deposit"<<endl;
    			cin>>acc;
    			min =min+acc;
    			cout<<"your new balance is "<<min<<endl;
    			cout<<"DO you wish to withdraw \n 1. yes\n 2.no"<<endl;
    			cin>>with;
    			if(with == 1)
    			{
    				cout<<"Enter the amount you want to withdraw"<<endl;
					cin>>csh;
					chng=(min-csh);
					cout<<"your new balance is "<<chng<<endl;
				}
				else if(with ==2)
				{
					cout<<"Have a nice day"<<endl;
				}
    			
			}
			else if(opt == 2)
			{
				cout<<"Enter the amount you want to withdraw"<<endl;
				cin>>csh;
				chng=(min-csh);
				cout<<"your new balance is "<<chng<<endl;
			}
		}
		//end of branch two
		//start branch three
		if(brch == 3)
		{
			cout<<"\tnanyuki branch"<<endl;
			cout<<"Do you wish to 1.deposit or 2.withdraw?\n";
			cin>>opt;
			if(opt == 1)
			{
				cout<<"Enter amount to deposit"<<endl;
    			cin>>acc;
    			min =min+acc;
    			cout<<"your new balance is "<<min<<endl;
    			cout<<"DO you wish to withdraw \n 1. yes\n 2.no"<<endl;
    			cin>>with;
    			if(with == 1)
    			{
    				cout<<"Enter the amount you want to withdraw"<<endl;
					cin>>csh;
					chng=(min-csh);
					cout<<"your new balance is "<<chng<<endl;
				}
				else if(with ==2)
				{
					cout<<"Have a nice day"<<endl;
				}
    			
			}
			else if(opt == 2)
			{
				cout<<"Enter the amount you want to withdraw"<<endl;
				cin>>csh;
				chng=(min-csh);
				cout<<"your new balance is "<<chng<<endl;
			}
		}
		//end branch tthree
	}
	//end of bank three
	
    if(((chng >= 10000) && (min >= 10000))&&(bnk == 1) || (bnk == 2) || (bnk == 3))
	{
        cout<<"You have successfully updated your account :-)\n"<<endl;
    }
    else
    {
    	cout<<"\tchange the name of the bank and ensure your balance is greater than 10,000. \n\tTRY AGIN NEXT TIME"<<endl;	
	}
return 0;
}
