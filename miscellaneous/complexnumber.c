/* complex header file 
let a complex number z=a+bi, 'a' is real part Re(z) and 'b' is imaginary  part Im(z),i is imaginary unit sqrt(-1)
Author: Ved Vyas   github:vedcodes2312                    
*/
#include<stdio.h>
#include<complex.h>//complex header file
#include<stdlib.h>
int main()
{
    system("cls");
double complex z1 = 1 + 2.0 * I; // complex number z1
double complex z2 = 3 + 4.0 * I; // complex number z2
printf("z1 = %f + %fi\n",creal(z1),cimag(z1));  //cimg returns imaginary part
printf("z2 = %f + %fi\n",creal(z2),cimag(z2));  //creal returns real part
double complex z_sum = z1 + z2;  //basic arithmetic operations performed on complex number
double complex z_product = z1 * z2; 
double complex z_diff = z1 - z2; 
double complex z_quotient = z1 / z2;
printf("Sum: %.2f + %.2fi\n", creal(z_sum), cimag(z_sum)); 
printf("Product: %.2f + %.2fi\n", creal(z_product), cimag(z_product)); 
printf("Difference: %.2f + %.2fi\n", creal(z_diff), cimag(z_diff)); 
printf("Quotient: %.2f + %.2fi\n", creal(z_quotient), cimag(z_quotient));
double complex z = 3 + 3 * I;
printf("z = %f + %fi\n",creal(z),cimag(z));
int n;
printf("enter value of power(n)\n");
scanf("%d",&n);
double complex z_pow = cpow(z, n); //POWER OF A COMPLEX NUMBER
double complex z_sin = csin(z); //SINE OF A COMPLEX NUMBER
double complex z_cos = ccos(z); //COSINE OF A COMPLEX NUMBER
double complex z_tan = ctan(z); //TANGENT OF A COMPLEX NUMBER             _
double complex z_conjugate = conj(z); //conjugate if z=a+bi,conjugate is  z = a-bi                    
double z_arg = carg(z); // z=a+bi   then arg(z) = tan inverse(b/a)
// ln(z) = ln(|z|) + i*arg(z)   lnx = log x to the base 'e'
double complex z_log = clog(z); //natural log base e of a complex number
double complex z_exp = cexp(z); // euler form of complex number
double complex z_sqrt = csqrt(z); //square root of complex number
double z_magnitude = cabs(z); //magnitude(modulus/absolute value) of a complex number
double complex z_sinh = csinh(z); //hyperbolic sine
double complex z_cosh = ccosh(z); //hyperbolic cosine
double complex z_tanh = ctanh(z);//hyperbolic tangent
printf("z raised to %d : %.2f + %.2fi\n",n, creal(z_pow), cimag(z_pow)); 
printf("Sine of z: %.2f + %.2fi\n", creal(z_sin), cimag(z_sin)); 
printf("Cosine of z: %.2f + %.2fi\n", creal(z_cos), cimag(z_cos)); 
printf("Tangent of z: %.2f + %.2fi\n", creal(z_tan), cimag(z_tan));
 printf("Conjugate of z: %.2f + %.2fi\n", creal(z_conjugate), cimag(z_conjugate)); 
 printf("Argument (phase angle) of z: %.2f radians\n", z_arg); 
 printf("Natural logarithm base e of z: %.2f + %.2fi\n", creal(z_log), cimag(z_log)); 
 printf("Exponential of z: %.2f + %.2fi\n", creal(z_exp), cimag(z_exp)); 
 printf("Square root of z: %.2f + %.2fi\n", creal(z_sqrt), cimag(z_sqrt)); 
 printf("Magnitude of z: %.2f\n", z_magnitude); 
 printf("Hyperbolic sine of z: %.2f + %.2fi\n", creal(z_sinh), cimag(z_sinh)); 
 printf("Hyperbolic cosine of z: %.2f + %.2fi\n", creal(z_cosh), cimag(z_cosh)); 
 printf("Hyperbolic tangent of z: %.2f + %.2fi\n", creal(z_tanh), cimag(z_tanh));
return 0;
}