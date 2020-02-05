//
//  PULTouchViewEffect.h
//  PULPulsate
//
//  Created by Michal on 11/09/2015.
//  Copyright (c) 2015 Pulsatehq. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PULView.h"
#import "PULImageView.h"

@interface PULTouchViewEffect : PULView

@property (nonatomic) NSArray<PULImageView*>* dependentImageViews;

@end
