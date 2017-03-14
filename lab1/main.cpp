//
//  main.cpp
//  lab1
//
//  Created by 黃玄堯 on 2017/3/13.
//  Copyright © 2017年 黃玄堯. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    

    
    int n ;
    std:: cin >> n ;
    
    while (n!=1){
        
    
    if (n==1) {
        
        std:: cout  << n << std::endl ;

    }
    else {
        if (n%2 == 0) {
            n=n/2;
            std:: cout  << n << std::endl ;

        } else {
            n=3*n+1;
            std:: cout  << n << std::endl ;

               }
         }
    }
    return 0;
}
