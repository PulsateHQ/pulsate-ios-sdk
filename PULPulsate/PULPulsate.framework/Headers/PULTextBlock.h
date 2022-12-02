//
//  PULTextBlock.h
//  PULPulsate
//
//  Created by Michal on 13/07/2015.
//  Copyright (c) 2015 Pulsatehq. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PULJSONSerializable.h"
#import "PULConstants.h"
#import "PULRenderable.h"

@interface PULTextBlock : NSObject<PULJSONSerializable, PULRenderable>

@property (nonatomic) NSString* contentText;
@property (nonatomic) PULTextStyle textStyle;

@end
