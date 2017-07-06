//
//  HJCrc32Module.c
//  HJCRC32Module
//
//  Created by 谢豪杰 on 2017/7/4.
//  Copyright © 2017年 Hjay. All rights reserved.
//

#include "HJCrc32Module.h"

    char * getHeader(long token , long timestamp){
        short maigcNumber = 0xDBDD;
        char version = 0x15;
       // char tokenStr[16] = ;
      //  long timestamp;
        char locationEngine[16] = "thisi siasad";
        char count = strlen(locationEngine) ;//sizeof(locationEngine);
        
        
        char * str = "kkkkkk";
        return str;
}

char * getStrToAsii(char * str){
    char * s = {"ssddf"};
    int length = strlen(<#const char *__s#>) sizeof(&str);
    for (int i = 0; i < length; i++) {
        char u = str[i];
        sprintf(s, "%X",u);
        
        printf("%s",s);
    }
    
    return s;

}

char * getpayLoad(){

    char clientMac[6] = "02000000";
   
   // char x[8] = ;
    //char y[8] = ;
   // char floorId[8] = ;
    

}
