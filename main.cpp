//Keene Cabahug This is a program to get the GCD and the LCM
#include <iostream>
#include <algorithm>
#include <unistd.h>
#include <cmath>


void printMenu(){
    std::cout<<"1. Find the GCD\n2. Find the LCM\n3. Find the Prime Factors\n4. Find the factors\n5. QUIT\n";
}//end of printMenu

void gcd()
{
    int n, i, gcd;
    int num[i], gdb, average;
    std::cout << "How many numbers would you like to find the GCD for? ";
   std:: cin >> n;
    
    
    for(i = 0; i < n; ++i){
        std:: cout << i + 1 << ". Enter number: ";
        std:: cin >> num[i];
        gcd += num[i];
    }

    int result = num[0]; 
    for (int i = 1; i < n; i++) 
        result = std:: __gcd(num[i], result);
        std::cout<<"The GCD is "<<result;
       
       std::cout<<"\nPlease select 1. (GCD) 2. (LCM) 3. (Prime Factor) 4. (Factors) 5. (QUIT) \n";
    
}//end of GCD

void lcm()
{
    int n, i, lcm;
    int num[i], average;
    std::cout << "How many numbers would you like to find the LCM for? ";
    std::cin >> n;
    
  
    for(i = 0; i < n; ++i){
        std::cout << i + 1 << ". Enter number: ";
        std::cin >> num[i];
        lcm += num[i];
    }
        int result = num[0];
        for (int i = 1; i < n; i++) 
        result = (((num[i] * result)) / (std::__gcd(num[i], result))); 
  
    std::cout<<"The LCM is "<<result; 
    
    std::cout<<"\nPlease select 1. (GCD) 2. (LCM) 3. (Prime Factor) 4. (Factors) 5. (QUIT) \n";
}//end of LCM

void primeF(){ 
    int n, i;
    std::cout<<"What number would you like to find the prime factors for?\n";
    std::cin>>n;

    while (n%2 == 0){ 
        std::cout<<(2); 
        n = n/2; 
    } 
    for (int i = 3; i <=sqrt(n); i = i+2){ 
        while (n%i == 0){ 
           std::cout<<(" ")<<(i)<<" "; 
            n = n/i; 
        } 
    } 
    if (n > 2) 
        std::cout<<(n); 
        std::cout<<"\nPlease select 1. (GCD) 2. (LCM) 3. (Prime Factor) 4. (Factors) 5. (QUIT) \n";
} 
void factors(){
    int n, temp = 1;
 
    std::cout <<"What number would you like to find the factors for?\n";
    std::cin >> n;
    while (temp <= n)
    {
        if (not(n % temp))
            std::cout << temp << " ";
 
        temp++;
    }
    std::cout<<"\nPlease select 1. (GCD) 2. (LCM) 3. (Prime Factor) 4. (Factors) 5. (QUIT) \n";
}//end of factors

 int main(){
        
        int choice;
        
        std::cout<<"Hi, here is a list of things I can do!\n\n";
        printMenu();
        do{
        std::cin>>choice;
        switch(choice){
            case 1:
            gcd();
            break;
            case 2:
            lcm();
            break;
            case 3:
            primeF();
            break;
            case 4:
            factors();
            break;
            case 5:
            std::cout<<"GOODBYE!";
            return 0;
            defualt:
            std::cout<<"what does that mean!\n";
            break;
        }//end
        }while(true);

}//end of main