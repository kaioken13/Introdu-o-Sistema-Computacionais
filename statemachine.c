#include <stdio.h>

int main()
{
    int button;
    int state;
    int sensor;
    int red_light, horn;
    
    /* LÓGICA DE TRANSIÇÃO */
    
    while() {
        scanf("%d", &button);
        scanf("%d", &sensor);
        scanf("%d", &state);
        
        if(state == 0){
            if(button == 1){
                state == 1;
            }
        } else if(state == 1) {
            if(sensor == 1) {
                state == 2;
            }
        } else if(state == 2) {
            if(button == 1) {
                state == 0;
            }
        }
        
        /* LÓGICA DE AÇÃO */
        
        
        if(state == 0){
            horn == 0;
            red_light == 0;
        } 
        
        if(state == 1) {
            horn == 0;
            red_light == 1;
        }
        
        if(state == 2) {
            button == 1;
            state == 1;
        }
        
        if(state == 3) {
            button == 0;
            state == 0;
        }
        
    }
    
    printf("%d", horn);
    printf("%d", red_light);

    return 0;
}
