#include <stdio.h>

int main() {
  int age;
  int votingAge = 18;
  printf("Enter Voter's age: ");
  scanf("%d",&age)
  if (age>votingAge) {
    printf("The person is eligible to vote");
  }else{
    printf("The person is UnderAge");
  }
  return 0;
}
