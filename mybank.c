#include <stdio.h>

int main() {
  int opt;
  float bal,dep,withd;
  printf("Welcome.Choose Opt1:Deposit Opt2:Withdraw Opt3:Check balance\n");
  scanf("%d",&opt);
  switch (opt) {
    case 1:
      printf("Enter the Amount of Money You wish to Deposit: ");
      scanf("%f",&dep);
      bal=bal+dep;
      printf("You have deposited Ksh.%f and your balance is:Ksh.%f",dep,bal);
      break;
    case 2:
      printf("Enter the Amount of Money You wish to Withdraw: ");
      scanf("%f",&withd);
      if (bal<withd){
        printf("You have insufficient funds to complete the operation.Please Top up your account to avoid further\ninconvniences");
      }else{
        bal=bal-withd;
        printf("You have withdrawn Ksh.%f and your balance is Ksh.%f",withd,bal);
      }break;
    case 3:
      printf("Your Balance is Ksh.%f ",bal);
      break;
  }

  return 0;
}
