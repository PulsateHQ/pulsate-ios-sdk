//
//  PULCardCell.h
//  PULPulsate
//
//  Created by Michal on 15/07/2015.
//  Copyright (c) 2015 Pulsatehq. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PULCard.h"
#import "PULButtonTouchViewEffect.h"
#import "PULTouchViewEffect.h"

@protocol PULCardcellDelegate <NSObject>

-(void)openBackOfTheCardForCell:(UITableViewCell*)cell;
-(void)openMessagesForCard:(UITableViewCell*)cell;
-(void)deleteCardForCell:(UITableViewCell*)cell;
-(void)CardAddedToFavorites:(UITableViewCell*)cell;
-(void)didRegisterOpenCardForGUID:(NSString*)guid andIsUnread:(BOOL)isUnread;


@end

@interface PULCardCell : UITableViewCell

@property (nonatomic, weak) id<PULCardcellDelegate> delegate;

@property (weak, nonatomic) IBOutlet PULTouchViewEffect *cardContentView;
@property (weak, nonatomic) IBOutlet UIView             *cardView;
@property (weak, nonatomic) IBOutlet UIView             *deleteView;
@property (weak, nonatomic) IBOutlet UIButton           *favoriteButton;
@property (weak, nonatomic) IBOutlet UIButton           *deleteButton;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *cardViewLeftConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *cardViewRightConstraint;

@property (weak, nonatomic) IBOutlet UIView             *callToActionView;

@property (nonatomic) IBOutlet NSLayoutConstraint *proportionalReadMoreWidth;

@property (weak, nonatomic) IBOutlet UILabel            *bulletLabel;

@property (weak, nonatomic) IBOutlet UIButton *readMoreButton;
@property (weak, nonatomic) IBOutlet PULButtonTouchViewEffect *replyButton;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *topCardConstraint;

@property (weak, nonatomic) IBOutlet UIImageView *cardFinImage;



-(void)setupWithTalk:(PULCard*)card;

-(void)hideReplyButton;
-(void)showReplyButton;
- (IBAction)didPressDelete:(id)sender;
-(void)disableDeleting;
-(void)hideTimestampForSingleView;

+(NSUInteger)getEstimatedCellHeightForCard:(PULCard*)card withWidth:(NSUInteger)width withTimestampEnabled:(BOOL)timestampEnabled;



@end
