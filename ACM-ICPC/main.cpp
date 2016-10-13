//
//  main.cpp
//  ACM-ICPC
//
//  Created by Alexander Bradley on 10/4/16.
//  Copyright © 2016 Alexander Bradley. All rights reserved.
//

// USELESS
// START OVER RECOMMENDED 

#include <stdio.h>
#include <stack>

using namespace std;

int testCases = 0, size = 0;

stack<char> q;


int main(){
//    scanf("%d\n", &testCases);
//    for (int i =0; i < testCases; i++) {
//        scanf("%d\n", &size);
//        
//        char cadena[size+1];
//        char last[size+1];
//        int frecuency[30];
//        
//        for (int h = 0; h < 30; h++) {
//            frecuency[h] = 0;
//        }
//        
//        for (int c = 0; c < size; c++) {
//            scanf("%c", &cadena[c]);
//        }
//        
//        for (int j = 0 ; j < size ; j++) {
//            frecuency[cadena[j] - 'A']++;
//        }
//        
//        int counter = 0;
//        while (counter != size)
//        for (int j = 0 ; j < 30; j++){
//            if (frecuency[j] - 2 >= 0 ){
//                last[counter] = j + 'A';
//                q.push( j + 'A');
//                counter+=1;
//                frecuency[j] -= 2;
//            }
//        }
//        
//        for (int j = 0 ; j < 30; j++){
//            if (frecuency[j] == 1 && (size % 2 != 0 )) {
//                last[counter++] = j + 'A';
//                break;
//            }
//        }
//        
//        while (!q.empty()) {
//            last[counter++] = q.top();
//            q.pop();
//        }
//        printf("%s\n",last);
//    }
}
