//
//  VisorConfiguracion.h
//  visorDistribuido
//
//  Created by Alberto on 21/06/13.
//  Copyright (c) 2013 Alberto. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VisorConfiguracion : NSObject {
    
    NSSize tamanoRectangulo;
    NSImage *imagen;
    
    NSPoint puntoOrigen;
}

@property int filas;
@property int columnas;

@property NSSize tamanoRectangulo;
@property NSImage *imagen;

@property NSPoint puntoOrigen;

@end
