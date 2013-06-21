//
//  PantallaView.h
//  visorDistribuido
//
//  Created by Alberto on 21/06/13.
//  Copyright (c) 2013 Alberto. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "VisorConfiguracion.h"

@interface PantallaView : NSView{
    
    int identificador;
    NSImageView *imagen;
    VisorConfiguracion *visorConfiguracion;
    
}

//se utiliza cuando cambio la imagen
-(void) despliegaImagen;

//se utiliza cuando cambio la posicion
-(void) despliegaEnElPunto;

//se utliza cuando cambia la imagen y el punto de origen
-(void) despliegaImagenEnElPunto;

@end
