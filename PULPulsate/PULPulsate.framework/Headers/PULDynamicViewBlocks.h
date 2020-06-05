//
//  PULDynamicView.h
//  PULPulsate
//
//  Created by Michal on 23/07/2015.
//  Copyright (c) 2015 Pulsatehq. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PULJSONSerializable.h"

@interface PULDynamicViewBlocks : NSObject <PULJSONSerializable>

@property (nonatomic) NSArray* viewBlocks;

@end
