//
//  Mod.c
//  ACM-ICPC
//
//  Created by Alexander Bradley on 10/11/16.
//  Copyright © 2016 Alexander Bradley. All rights reserved.
//

#include <stdio.h>

int main(){
    int a, b, m;
    scanf("%d %d %d", &a, &b, &m);
    int saves[32];
    saves[0] = (a % m);
    for (int i = 1; i < 32; i++){
        saves[i] = ((saves[i-1]%m) * (saves[i-1]%m)) % m;
    }
    int result = 1;
    char first = 1;
    for (int i = 0 ; i < 32; i++){
        if (b&(1<<i)){
            if (first){
                result = (saves[i] % m);
                first = 0;
            } else {
                result = (result * (saves[i] % m)) % m;
            }
        }
    }
    
    printf("%d\n", result);
}
