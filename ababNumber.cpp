//
//  main.cpp
//  single
//
//  Created by Charles on 2019-02-15.
//  Copyright © 2019 Mu He. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <cmath>
#include <gmpxx.h>

#define M 1000

using namespace std;

int digit(mpz_class x){
    int i = 1;
    for (;;)
    {
        x /= 10;
        if (x == 0) break ;
        i++;
    }
    return i;
}

//int main(){
//    mpz_t sq_in, sq_out, test;
//    mpz_init(sq_in);
//    mpz_init(sq_out);
//    mpz_init(test);
//    mpz_set_str(sq_in, "1322314049613223140496", 10);
//    mpz_sqrt(sq_out, sq_in);
//    mpz_mul(test,sq_out,sq_out);
//    gmp_printf ("%Zd\n\n", sq_out);
//    gmp_printf ("%Zd\n\n", test);
//
//    return 0;
//}

int main(){
    mpz_t magicNum;
    mpz_init(magicNum);
    mpz_set_str(magicNum, "1322314049613223140496",10);
    mpz_sqrt(magicNum, magicNum);

    cout<<magicNum<<endl;

    mpz_class i_2;
    long oneOone;
    int temp, d = 0, d_half = 0;

    clock_t t1 = clock();

    for(mpz_class i = 0; i <= 999999999; i++){
        i_2 = i*i;
        temp = digit(i_2);

        //cout<<i<<" "<<temp<<" "<<i_2<<" "<<d_half<<endl;

        if(temp>d){
            d = temp;
            d_half = (d>>1);
        }
        if(d - 2*d_half==1){
            continue ;
        }//skip aaa;
        d_half = (d>>1);

        //mpz_ui_pow_ui(oneOone.get_mpz_t(),10,d_half);
        oneOone = pow(10,d_half)+1;

        mpz_t r,q,o;
        mpz_init(r);
        mpz_init(o);
        mpz_set_ui(o,oneOone);
        mpz_fdiv_r(r,i_2.get_mpz_t(),o);
        if(mpz_cmp_ui(r,0)==0){
            mpz_init(q);            
            mpz_fdiv_q(q,i_2.get_mpz_t(),o);
            cout<<i<<"^2 = "<<i_2<<" / "<<oneOone<<" = "<<q<<"..."<<r<<endl;
        }
    }
    double time = (clock() - t1) * 1.0 / CLOCKS_PER_SEC * 1000;
    std::cout << "time: "<< time <<"ms    /"<<endl;

    return 0;
}
