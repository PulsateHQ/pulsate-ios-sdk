//
//  PULCallToAction.h
//  PULPulsate
//
//  Created by Michal on 31/07/2015.
//  Copyright (c) 2015 Pulsatehq. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PULJSONSerializable.h"
#import "PULRenderable.h"

@interface PULCallToActionBlock : NSObject<PULRenderable, PULJSONSerializable>

@property (nonatomic) NSArray* buttons;

@end
