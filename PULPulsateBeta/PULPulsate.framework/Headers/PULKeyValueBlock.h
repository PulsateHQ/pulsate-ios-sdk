//
//  PULKeyValueBlock.h
//  PULPulsate
//
//  Created by Michal on 31/07/2015.
//  Copyright (c) 2015 Pulsatehq. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PULJSONSerializable.h"
#import "PULRenderable.h"

@interface PULKeyValueBlock : NSObject<PULRenderable, PULJSONSerializable>

@property (nonatomic,copy) NSString* key;
@property (nonatomic,copy) NSString* value;

@end
