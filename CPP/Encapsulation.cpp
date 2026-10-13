#include<iostream>
using namespace std;
class BankAcc{
	private :
		int AccountNo;
		int Balance;
	public:
		BankAcc(int accno,int bal){
			AccountNo = accno;
			Balance = bal;
		}
		void withdraw(int Amountw){
			if(Balance<Amountw){
				cout<<"Insufficient Balance\n";
			}
			else{
				cout<<"Money Has Been Withdrawn\n";
				Balance -= Amountw;
			}
		}
		void deposit(int Amountd){
			cout<<"Amount has been Credited to Your Account\n";
			Balance += Amountd;
		}
		int getbalance(){
			return Balance;
		}
//		void changeBalance(int bal){
//			Balance = bal;
//		}
};
int main(){
	int choice;
	int balance , i;
	BankAcc b1(890,1000);
	b1.Balance(300);
//	b1.changeBalance(3000);
	do{
		cout<<"What Operation You want to perform : 1.get Balance  2.Deposit  3.Withdraw  4.exit\n";
		cin>>choice;
		if(choice == 1){
			balance = b1.getbalance();
			cout<<"Balance is : "<<balance<<"\n";
		}
		else if(choice == 2){
			cout<<"Enter Amount to be Deposited : ";
			cin>>i;
			b1.deposit(i);
		}
		else if(choice == 3){
			cout<<"Enter Amount to be Withdrawn : ";
			cin>>i;
			b1.withdraw(i);
		}
		else if(choice<=0 or choice>4){
			cout<<"Invalid option Choose a Correct Option\n";
		}
		else{}
	}while(choice!=4);
	return 0;
}