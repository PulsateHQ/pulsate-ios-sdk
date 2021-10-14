//
//  PULConstants.h
//  PULPulsate
//
//  Created by Michal on 09/12/2014.
//  Copyright (c) 2014 Pulsatehq. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_RETINA ([[UIScreen mainScreen] scale] >= 2.0)

#define SCREEN_WIDTH ([[UIScreen mainScreen] bounds].size.width)
#define SCREEN_HEIGHT ([[UIScreen mainScreen] bounds].size.height)
#define SCREEN_MAX_LENGTH (MAX(SCREEN_WIDTH, SCREEN_HEIGHT))
#define SCREEN_MIN_LENGTH (MIN(SCREEN_WIDTH, SCREEN_HEIGHT))
#define IS_ZOOMED (IS_IPHONE && SCREEN_MAX_LENGTH == 736.0)

#define IS_IPHONE_4_OR_LESS (IS_IPHONE && SCREEN_MAX_LENGTH < 568.0)
#define IS_IPHONE_5 (IS_IPHONE && SCREEN_MAX_LENGTH == 568.0)
#define IS_IPHONE_6 (IS_IPHONE && SCREEN_MAX_LENGTH == 667.0)
#define IS_IPHONE_6P (IS_IPHONE && SCREEN_MAX_LENGTH == 736.0)
#define IS_IPHONE_X (IS_IPHONE && SCREEN_MAX_LENGTH == 812.0)

extern const int ddLogLevel;

extern NSString* const PUL_SDK_API_VER;

extern unsigned const PUL_API_KEY_LENGTH;
extern NSString* const PUL_API_URL;
extern int const PUL_API_HTTP_TIMEOUT;
extern NSString* const PUL_API_URL_SEALION;
extern NSString* const PUL_API_URL_TIGER;
extern NSString* const PUL_API_URL_SZYMON;
extern NSString* const PUL_API_URL_LEOPARD;
extern NSString* const PUL_API_AUTH_HEADER;
extern NSString* const PUL_API_AUTH_TOKEN_PREFIX;
extern NSString* const PUL_API_START_SESSION_AND_GET_DATA_URL;
extern NSString* const PUL_API_START_SESSION_URL;
extern NSString* const PUL_API_UPDATE_USER_URL;
extern NSString* const PUL_API_SEND_GEOFENCE_EVENT_URL;
extern NSString* const PUL_API_SEND_BEACON_EVENT_URL;
extern NSString* const PUL_API_GETDATA_URL;
extern NSString* const PUL_API_RICH_NOTIFICATION_URL;
extern NSString* const PUL_API_GET_INBOX_URL;
extern NSString* const PUL_API_GET_MESSAGES_URL;
extern NSString* const PUL_API_CREATE_TALK_URL;
extern NSString* const PUL_API_CREATE_MESSAGE;
extern NSString* const PUL_API_END_SESSION;
extern NSString* const PUL_API_LOGOUT;
extern NSString* const PUL_API_CREATE_EVENT;
extern NSString* const PUL_API_SET_PUSH_PREFERENCES;
extern NSString* const PUL_API_SET_LOCATION_UPDATES;
extern NSString* const PUL_API_SET_PRIVACY;
extern NSString* const PUL_API_ARCHIVE;
extern NSString* const PUL_API_GET_INBOX_ITEM;

extern NSString* const PUL_API_VIEW_HEADER_IDENTIFIER;
extern NSString* const PUL_API_VIEW_NORMALTEXT_IDENTIFIER;
extern NSString* const PUL_API_VIEW_ADMIN_HEADER_IDENTIFIER;
extern NSString* const PUL_API_VIEW_IMAGE_IDENTIFIER;
extern NSString* const PUL_API_VIEW_IMAGE_TEXT;

extern NSString* const PUL_API_CALL_TO_ACTION_IDENTIFIER;
extern NSString* const PUL_API_DIVIDER_IDENTIFIER;
extern NSString* const PUL_API_KEYVALUE_IDENTIFIER;

extern NSUInteger const PUL_API_NUMBER_OF_ELEMENTS_PER_PAGE;

extern NSString* const PUL_UI_TALK_CATEGORY_OTHER;
extern NSString* const PUL_UI_TALK_CATEGORY_COMPLAINT;
extern NSString* const PUL_UI_TALK_CATEGORY_FEATURE;
extern NSString* const PUL_UI_TALK_CATEGORY_FEEDBACK;
extern NSUInteger const PUL_UI_MAX_INPUT_HEIGHT;
extern CGFloat const PUL_UI_OFFSET_PICTURE;
extern CGFloat const PUL_UI_OFFSET_BUBBLE;
extern NSInteger const PUL_ARROW_SIZE_X;
extern NSInteger const PUL_ARROW_SIZE_Y;
extern NSInteger const PUL_MESSAGE_FONT_SIZE;
extern NSInteger const PUL_MESSAGE_CONTAINER_INSET;
extern NSInteger const PUL_BUBBLE_PICTURE_OFFSET;
extern NSInteger const PUL_BUBBLE_OFFSET;
extern NSUInteger const PUL_NO_INTERNET_CONNECTION_HEIGHT;

extern NSString* const PUL_CONFIG_BUNDLE_VERSION_DICTKEY;
extern NSString* const PUL_CONFIG_IOS_EIGHT;
extern NSString* const PUL_CONFIG_DICTIONARY_NAME;
extern NSString* const PUL_CONFIG_DICTIONARY_APPKEY_NAME;
extern NSString* const PUL_CONFIG_DICTIONARY_APPID_NAME;
extern NSString* const PUL_CONFIG_PULSATE_BASIC_BUNDLE_NAME;
extern NSString* const PUL_CONFIG_PULSATE_BUNDLE_EXTENSION;
extern NSString* const PUL_CONFIG_PULSATE_UNIQUE_IDENTIFIER_KEY;

extern NSString* const PUL_DB_MODELNAME;
extern NSString* const PUL_DB_MODEL_EXTENSION_NAME;
extern NSString* const PUL_DB_PERSISTENT_STORE_FILENAME;
extern NSString* const PUL_DB_USER_AVATAR_URL;

extern NSString* const PUL_UI_MESSAGE_STORYBOARD_NAME;

extern NSString* const PUL_NOTIFICATION_RELOAD_INBOX;
extern NSString* const PUL_NOTIFICATION_READ_THREAD_AT_CAMPAIGN;
extern NSString* const PUL_NOTIFICATION_READ_MESSAGE_THREAD;
extern NSString* const PUL_NOTIFICATION_OPEN_URL;
extern NSString* const PUL_NOTIFICATION_SEND_EVENT;
extern NSString* const PUL_NOTIFICATION_DISMISS_BACK_CARD;
extern NSString* const PUL_NOTIFICATION_DISMISS_INAPP;
extern NSString* const PUL_NOTIFICATION_OPEN_CAMPAIGN;
extern NSString* const PUL_NOTIFICATION_SEND_OPEN_EVENT;
extern NSString* const PUL_NOTIFICATION_OPEN_SINGLE_CARD;

extern NSInteger const PUL_STATUS_BAR_HEIGHT;

extern NSString* const PUL_PICTURE_EXT;
extern NSString* const PUL_PICTURE_LIGHTFIN;
extern NSString* const PUL_PICTURE_DARKFIN;
extern NSInteger const PUL_FIN_SIZE;
extern CGFloat const PUL_FIN_ADMIN_OFFSET;
extern CGFloat const PUL_FIN_USER_OFFSET;

extern NSString* const PUL_IMAGE_CACHE_FOLDER;

extern NSInteger const PUL_NO_INTERNET_CONNECTION;

typedef enum
{
    PULAuthorizationNone,
    PULAuthorizationRejected,
    PULAuthorizationAccepted
} PULAuthorizationResult ;

typedef enum
{
    PULInAppSmallPersonal,
    PULInAppSmallCorporate,
    PULInAppBigPersonal,
    PULInAppBigCorporate
} PULInAppMessageType ;

typedef enum {
    PULEventTypeOther = 0,
    PULEventTypeForeground = 1,
    PULEventTypeBackground = 2
} PULEventType;

typedef enum {
    PULLocationTypeUnknown = 0,
    PULLocationTypeCellular = 1,
    PULLocationTypeGps = 2,
    PULLocationTypeSignificant = 3,
} PULLocationType;

typedef enum {
    PULLess,
    PULEqual,
    PULGreater
} PULCompareResult;

typedef enum {
    PULHeaderText,
    PULNormalText,
    PULSmallText,
    PULSmallHeaderText,
    PULHeading
} PULTextStyle ;

typedef enum
{
    PULNoInternetConnection,
    PULServerError,
    PULExpired,
    PULUserDeleted,
    PULSuccess
} PULInternetConnectionStatus;

typedef enum {
    PULWifi,
    PULMobile,
    PULNone
} PULConnectionType;
