//
//  piCarrera.cpp
//  ACM-ICPC
//
//  Created by Alexander Bradley on 10/6/16.
//  Copyright © 2016 Alexander Bradley. All rights reserved.
//

#include <stdio.h>

int m, t, i;
char letra, u, f, d;
int main(){
    scanf("%d %d %d %d %d%*c", &m, &t, &u, &f, &d);

    for (i = 0; i < t; i++){
        scanf("%c%*c", &letra);
        switch (letra) {
            case 'U':
                m = m - u - d;
                break;
            case 'F':
                m = m - (f*2);
                break;
            case 'D':
                m = m - d - u;
                break;
        }
        if (m <= 0){
            printf("%d\n", i);
            return 0;
        }
    }
}
