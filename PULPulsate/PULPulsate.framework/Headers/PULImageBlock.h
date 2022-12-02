//
//  PULImageBlock.h
//  PULPulsate
//
//  Created by Michal on 13/07/2015.
//  Copyright (c) 2015 Pulsatehq. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PULJSONSerializable.h"
#import "PULRenderable.h"


@interface PULImageBlock : NSObject<PULJSONSerializable, PULRenderable>

@property (nonatomic) NSString* imageUrl;
@property (nonatomic) NSNumber* width;
@property (nonatomic) NSNumber* height;

@end
