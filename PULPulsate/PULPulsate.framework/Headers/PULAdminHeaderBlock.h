//
//  PULAdminHeaderBlock.h
//  PULPulsate
//
//  Created by Michal on 13/07/2015.
//  Copyright (c) 2015 Pulsatehq. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PULJSONSerializable.h"
#import "PULRenderable.h"

@interface PULAdminHeaderBlock : NSObject<PULJSONSerializable, PULRenderable>

@property (nonatomic) NSString* adminAvatarUrl;
@property (nonatomic) NSString* adminName;
@property (nonatomic) NSString* title;
@property (nonatomic) NSString* message;

@end
