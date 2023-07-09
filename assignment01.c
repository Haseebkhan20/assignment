                              
     /*
    NAME : Haseeb Anwar
    
    Father's Name :Raees Ahmed
    
    ROLL NO : 02
     
     */






#include<stdio.h>
#include<stdbool.h>

bool isprime(int n) {
  if (n == 0 || n == 1) {
    return false;
  }
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int num, choice;
  bool valid = false;
  while (!valid) {   
    printf("Enter a number between 2 and 100: ");
    scanf("%d", &num);
    
    
    if (num < 2 || num > 100) {
      printf("Number out of range. Press 1 to try again: ");
      scanf("%d", &choice);
      
      if (choice == 1) {
        continue;
      }
      
      else {
        return 0;
      }
    }
    
    else {
      valid = true;
    }
  }
 
  if (isprime(num)) {
    printf("%d is a prime number.\n", num);
  }
  else {
    printf("%d is not a prime number.\n", num);
  }
  
  return 0;
}
    