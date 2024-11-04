/* complex number
let a complex number z=a+bi, 'a' is real part Re(z) and 'b' is imaginary  part Im(z),i is imaginary unit sqrt(-1)
Author: Ved Vyas           github:vedcodes2312                    
*/

#include <stdio.h>
#include <complex.h>

int main()
 {
    double real_part, imag_part;

    //input from user: REAL PART AND IMAGINARY PART OF COMPLEX NUMBER
    printf("Enter the real part: ");
    scanf("%lf", &real_part);
    printf("Enter the imaginary part: ");
    scanf("%lf", &imag_part);

    // the complex number
    double complex z = real_part + imag_part * I;

    // print the complex number
    printf("Complex number z: %.2f + %.2fi\n", creal(z), cimag(z));

    return 0;
}
