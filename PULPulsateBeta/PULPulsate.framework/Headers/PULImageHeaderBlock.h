//
//  PULImageHeaderBlock.h
//  PULPulsate
//
//  Created by Michal on 14/07/2015.
//  Copyright (c) 2015 Pulsatehq. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PULJSONSerializable.h"
#import "PULRenderable.h"

@interface PULImageHeaderBlock : NSObject<PULJSONSerializable, PULRenderable>

@property (nonatomic) NSString* message;
@property (nonatomic) NSString* imageURL;

@end
