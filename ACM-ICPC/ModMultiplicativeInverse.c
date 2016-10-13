//
//  ModMultiplicativeInverse.c
//  ACM-ICPC
//
//  Created by Alexander Bradley on 10/13/16.
//  Copyright © 2016 Alexander Bradley. All rights reserved.
//

#include <stdio.h>

int mod(int a, int m){
    if (a >= 0)
        return a % m;
    else{
        while (a <= 0)
            a = a + m;
        return a;
    }
}

int main(){
    int x[3], y[3], t[3], q, i, m;
    x[0] = y[1] = 1; x[1] = y[0] = 0;
    
    scanf("%d %d", &y[2], &x[2]);
    m = x[2];
    while (y[2] > 1) {
        q = x[2] / y[2];
        
        for (i = 0; i < 3; i++){
            t[i] = x[i] - (q*y[i]);
            x[i] = y[i]; y[i] = t[i];
        }
    }
    printf("%d\n", mod(y[1],m));
}
