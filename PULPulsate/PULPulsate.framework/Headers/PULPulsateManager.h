//
//  PULPulsateManager.h
//  PULPulsate 3.8.0
//
//  Created by Michal on 04/12/2014.
//  Copyright (c) 2014 Pulsatehq. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PULPulsateUnauthorizedManagerDelegate.h"
#import "PULPulsateBadgeDelegate.h"
#import <UIKit/UIKit.h>
#import <UserNotifications/UserNotifications.h>
#import "PULRevenueEvent.h"

@class UINavigationController;

@interface PULPulsateManager : NSObject

@property (nonnull, nonatomic, retain) IBOutlet id<PULPulsateUnauthorizedManagerDelegate> unauthorizedDelegate;
@property (nonnull, nonatomic, retain) IBOutlet id<PULPulsateBadgeDelegate> badgeDelegate;

typedef void(^RequestListener)(BOOL success, NSError* _Nullable error);
typedef void(^FeedListener)(NSArray* _Nullable feed, NSError* _Nullable error);

typedef NS_ENUM(NSUInteger, PULUserGender){
    PULMale,
    PULFemale
};

typedef NS_ENUM(NSUInteger, PULPrivacyLevel){
    PULPrivacySubscribed,
    PULPrivacyUnsubscribed
};

/**
 *  Starts Pulsate session lifecycle. If location and push were set as enabled it'll show the prompts to the user.
 *  Session starts when the app enters foreground and ends when it goes to background.
 */
-(void)startPulsateSession:(nullable RequestListener)listener;

/**
 *  Starts Pulsate session lifecycle for given user (alias). If location and push were set as enabled it'll show the prompts to the user.
 *  Session starts when the app enters foreground and ends when it goes to background.
 */
-(void)startPulsateSessionForAlias:(nonnull NSString*)alias withListener:(nonnull RequestListener)listener;

/**
 * Logs out the current user
 */
-(void)logout:(nonnull RequestListener)listener;

/**
 *  If you chose to have location disabled when instantiating the Pulsate Manager, you can enable it later.
 *  This enables you to postpone the location query prompt.
 */
-(void)startLocation;

/**
 *  If you chose to have push disabled when instantiating the Pulsate Manager, you can enable it later.
 *  This enables you to postpone the push query prompt.
 */
-(void)startRemoteNotifications;

/**
 *  If you chose to have push disabled when instantiating the Pulsate Manager, you can enable it later.
 *  This enables you to postpone the push query prompt and customize the push settings
 */
-(void)startRemoteNotificationsWithSettings:(nonnull UIUserNotificationSettings*)notificationSettings;

/**
 *  Creates and returns a Pulsate Feeed Navigation Controller. You can choose to present it however you see fit.
 *
 */
-(nonnull UINavigationController*)getFeedNavigationController;

/**
 *  Allows Developers to get the Pulsate Inbox JSON that they can later render and show to the user in a custom way
 *
 */
-(void)getFeed:(nonnull NSString*)page withListener:(nonnull FeedListener)listener;

/**
 *  When using -(void)getFeed:(NSString*)page withListener:(nonnull FeedListener)listener;
 *  We recommend using this method to pass user onClick events to Pulsate to properly handle it.
 *  Pulsate will make sure that the click does what it should do - open url, open deeplink, send custom events, record opens / clicks
 *
 */
-(void)handleFeedClick:(nonnull id)pulsateInboxItem;

/**
 * If feed is opened automatically (by pressing a push notification for example) you might want to
 * hide it programatically.
 */
-(void)closeAutomaticallyOpenedFeed;

/**
 * Developers can now add an additional button in the Pulsate Feed. The button will appear in the main Feed Toolbar in the right corner.
 * To add this button you need to call the new setInboxRightButton method and pass an UIBarButtonItem that you want to show. This should be
 * done in the AppDelegate under didFinishLaunchingWithOptions.
 * @param rightButton UIBarButtonItem
 */
-(void)setInboxRightButton:(nullable UIBarButtonItem*)rightButton;

/**
 *  Disables or Enables push notifications for Pulsate
 *
 *  @param enabled user's push notification preference
 */
-(void)setPushNotificationEnabled:(BOOL)enabled;

-(BOOL)isPushNotificationEnabled;

/**
 *  Sets user's privacy settings.
 *
 *  @param privacyLevel user's privacy level
 */
-(void)setPrivacy:(PULPrivacyLevel)privacyLevel;

-(NSUInteger)getPrivacy;

/**
 * Enables or Disables using the user initials as the user avatar.
 * When disabled the avatar will always be an anon icon.
 * By default enabled
 *
 * @param useInitials
 */
-(void)useInitialsForUserAvatar:(BOOL)useInitials;

-(BOOL)getUseInitialsForUserAvatar;


/**
 * Enables or Disables the Geofencing and Beacon Scanning.
 * By default enabled.
 */
-(void)setLocationUpdatesEnabled:(BOOL)enabled;

-(BOOL)isLocationEnabled;

/**
 *  Enables or Disables In-App Notifications. Default - YES.
 */
-(void)enableInAppNotification:(BOOL)enabled;

-(BOOL)isInAppNotificationEnabled;

-(void)setSmallInAppNotificationDuration:(NSInteger)seconds;

-(NSInteger)getSmallInAppNotificationDuration;

/**
 *  Shows the last in app notification. In App Notification need to be enabled.
 *  To enable in app notifications use enableInAppNotification(BOOL).
 */
-(void)showLastInAppNotification;

/**
 *  Set if user is authorized or not. The default is YES.
 */
-(void)setUserAuthorized:(BOOL)authorized;

-(BOOL)isUserAuthorized;

/**
 *  Shows the last blocked message or card. User must be authorized.
 *  To authorize a user use setUserAuthorized(BOOL).
 */
-(void)showLastUnauthorizedMessage;

/**
 *  Sets the create thread button in feed visibility.
 *
 *  @param buttonEnabled decides if the button should be enabled
 */
-(void)setNewThreadButtonEnabled:(BOOL)buttonEnabled;

-(BOOL)isNewThreadButtonEnabled;

/**
 *  Updates the user's first name. Gets updated when entering background.
 *
 *  @param firstName firstName - can't be nil
 */
-(void)updateFirstName:(nonnull NSString*)firstName;

/**
 *  Updates the user's last name. Gets updated when entering background.
 *
 *  @param lastName lastName - can't be nil
 */
-(void)updateLastName:(nonnull NSString*)lastName;

/**
 *  Updates the user's email. Gets updated when entering background.
 *
 *  @param email email - can't be nil
 */
-(void)updateEmail:(nonnull NSString*)email;

/**
 *  Updates the user's phone number. Gets updated when entering background.
 *  Specify the phone number using the E.164 format. E.164 is a standard for the phone number structure used for international telecommunication.
 *  Phone numbers that follow this format can have a maximum of 15 digits, and they are prefixed with the plus character (+) and the country code.
 *  For example, a contact in the United States has a country code "1" , area code "408" and phone number "XXX-XXXX", you'd enter +1408XXXXXXX.
 *  @param phoneNumber - can't be nil
 */
-(void)updatePhoneNumber:(nonnull NSString*)phoneNumber;

-(nonnull NSString*)getPhoneNumber;

/**
 *  Updates user's age. Gets updated when entering background.
 *
 *  @param age user's age
 */
-(void)updateAge:(NSUInteger)age;

/**
 *  Updates user's gender. Gets updated when entering background.
 *
 *  @param gender user's gender
 */
-(void)updateGender:(PULUserGender)gender;

/**
 *  Creates a custom attribute with a string. Neither can be nil. Gets updated when entering background.
 *
 *  @param propertyName custom attribute name
 *  @param value        attribute value
 */
-(void)createAttribute:(nonnull NSString *)propertyName withString:(nonnull NSString *)value;

/**
 *  Creates a custom attribute with a float. Key can't be nil. Gets updated when entering background.
 *
 *  @param propertyName custom attribute name
 *  @param number       attribute value
 */
-(void)createAttribute:(nonnull NSString*)attributeName withDecimal:(nonnull NSDecimalNumber*)value;

/**
 *  Creates a custom attribute with an integer. Key can't be nil. Gets updated when entering background.
 *
 *  @param propertyName custom attribute name
 *  @param number       attribute value
 */
-(void)createAttribute:(nonnull NSString *)propertyName withInteger:(NSInteger)number;

/**
 *  Creates custom attribute with a bool. Key can't be nil. Gets updated when entering background.
 *
 *  @param propertyName custom attribute name
 *  @param boolean      attribute value
 */
-(void)createAttribute:(nonnull NSString *)propertyName withBoolean:(BOOL)boolean;

/**
 *  Creates custom attribute with a date. Key can't be nil. Gets updated when entering background.
 *
 *  @param propertyName custom attribute name
 *  @param date         attribute value
 */
-(void)createAttribute:(nonnull NSString *)propertyName withDate:(nonnull NSDate*)date;

/**
 *  Increments given integer attribute by given value. Gets updated when entering background.
 *
 *  @param attributeName which attribute to increment
 *  @param value         value to increment by
 */
-(void)incrementIntegerAttribute:(nonnull NSString*)attributeName withInteger:(NSInteger)value;

/**
 *  Decrements given integer attribute by given. Gets updated when entering background.
 *
 *  @param attributeName custom attribute name
 *  @param value         attribute value
 */
-(void)decrementIntegerAttribute:(nonnull NSString*)attributeName withInteger:(NSInteger)value;

/**
 *  Increments given float attribute with given value. Gets updated when entering background.
 *
 *  @param attributeName custom attribute name
 *  @param value         attribute value
 */
-(void)incrementDecimalAttribute:(nonnull NSString*)attributeName withDecimal:(nonnull NSDecimalNumber*)value;

/**
 *  Decrements given float attribute with given value. Gets updated when entering background.
 *
 *  @param attributeName custom attribute name
 *  @param value         attribute value
 */
-(void)decrementDecimalAttribute:(nonnull NSString*)attributeName withDecimal:(nonnull NSDecimalNumber*)value;

/**
 *  Sends a custom in app event
 *
 *  @param event event to be sent - can't be nil
 */
-(void)createEvent:(nonnull NSString*)event;

/**
 *  Sends a custom revenue event
 *
 *  @param revenueEvent event to be sent - can't be nil
 */
-(void)createRevenueEvent:(nonnull PULRevenueEvent*)revenueEvent;

/**
 * Attributes synchronize when the app is entering background. This method forces the synchronization to happen instantly.
 */
-(void)forceAttributeSync;

/**
 *  Decides if beacon actions should be sent with a location. The default is NO.
 */
-(void)sendLocationWithBeaconEvents:(BOOL)sendLocation;

/**
 *  Returns the Device Guid that Pulsate uses to identify users.
 */
-(nonnull NSString*)getDeviceGuid;

/**
 *  Sends a request to the server to get the Pulsate badge count.
 *  The badge count will be returned in the PULPulsateBadgeDelegate badgeUpdated callback.
 */
-(void)getBadgeCount;

/**
 *  Shows the last in app notification. In App Notification need to be enabled.
 *  To enable in app notifications use enableInAppNotification(BOOL).
 */
-(nonnull id<UIApplicationDelegate, UNUserNotificationCenterDelegate>)getPulsateSystemManager;

/**
 *  Sends a request to the server to get the Pulsate badge count.
 *  The badge count will be returned in the PULPulsateBadgeDelegate badgeUpdated callback.
 */
-(void)startBackgroundUpdates:(nonnull RequestListener)listener;

@end
