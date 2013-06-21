//
//  PantallaView.m
//  visorDistribuido
//
//  Created by Alberto on 21/06/13.
//  Copyright (c) 2013 Alberto. All rights reserved.
//

#import "PantallaView.h"

@implementation PantallaView

- (id)initWithFrame:(NSRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code here.
        
        imagen = [[NSImageView alloc] initWithFrame:NSMakeRect(0, 0, frame.size.width, frame.size.height)];
        
        [imagen setImageAlignment: NSImageAlignBottomLeft];
        [imagen setImageScaling: NSImageScaleNone];
        
        [self addSubview: imagen];
    }
    
    return self;
}

- (void)drawRect:(NSRect)dirtyRect
{
    // Drawing code here.
}

//se utiliza cuando cambio la imagen
-(void) despliegaImagen
{
    [imagen setFrameSize:visorConfiguracion.imagen.size];
    
    [imagen setImage: visorConfiguracion.imagen];
}

//se utiliza cuando cambio la posicion
-(void) despliegaEnElPunto
{
    
}

//se utliza cuando cambia la imagen y el punto de origen
-(void) despliegaImagenEnElPunto
{
    
}

@end
