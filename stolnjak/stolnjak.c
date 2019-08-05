// Hip / 2019-07-07 / 2019-08-05

#include <math.h>
#include <stdio.h>

#include <emscripten.h>

#define NMAX 25
#define R 300.0

void line(double x1, double y1, double x2, double y2) {
EM_ASM({
    var g = Module.canvas.getContext('2d');
    g.strokeStyle = 'red';
	g.moveTo($0, $1);
	g.lineTo($2, $3);
    g.stroke();    
}, x1, y1, x2, y2);
} // line

int main()
{
    double dphi;
    double vrh[NMAX][2];
    int vn = 25;

    printf("Broj vrhova: %d\n", vn);

    dphi = 2.0 * M_PI / vn;

    // inicijaliziraj vrhove
    for(int i = 0; i < vn; i++) {
        vrh[i][0] = R * (1.0 + cos(i * dphi));
        vrh[i][1] = R * (1.0 + sin(i * dphi));
    }
    
    for(int i = 0; i < vn; i++) 
        for(int j = 0; j < i; j++)
            if(i != j) line(vrh[i][0], vrh[i][1], vrh[j][0], vrh[j][1]);

}
