//
//  PULButtonsBlock.h
//  PULPulsate
//
//  Created by Michal on 10/07/2015.
//  Copyright (c) 2015 Pulsatehq. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PULButton.h"
#import "PULBlockDataInjectable.h"
#import "PULButtonTouchViewEffect.h"

@interface PULButtonsBlockView : UIView<PULBlockDataInjectable>

@property (weak, nonatomic) IBOutlet PULButtonTouchViewEffect *buttonOne;
@property (weak, nonatomic) IBOutlet PULButtonTouchViewEffect *buttonTwo;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *proportionalWidth;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *equalWidth;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *spaceBetweenButtons;

- (void)setCorners:(CGFloat) corner;
- (IBAction)firstButtonClicked:(id)sender;
- (IBAction)secondButtonClicked:(id)sender;

@end
